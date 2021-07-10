using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using System.Linq;
using System;
using SimpleJSON; 
using TMPro;

// this script should start the ObjectRecognition process running on another computer
public class HumidityController : MonoBehaviour
{
    private bool endpointSet;
    private string apiEndpoint;
    private string apiMethod;
    private bool firstExecution;
    private bool thresholdSet;
    private DateTime timeLastExecution;
    private int frequencyOfCheckInSeconds;
    private double humidityMinThreshold;
    private double humidityMaxThreshold;

    public OntologyReader ontologyReader;
    public SceneController sceneController;
    public GameObject humidityWarning;

    void Start()
    {
        thresholdSet = false;
        endpointSet = false; 
        frequencyOfCheckInSeconds = 120;
        firstExecution = true;
    }

    void Update()
    {
        if (!endpointSet) {
            if (ontologyReader.endpointsSet) {

                Endpoint humidityThing = ontologyReader.endpoints.FirstOrDefault(o => o.thing == "humidity sensor");

                apiEndpoint = humidityThing.uri;
                apiMethod = humidityThing.method;
                endpointSet = true;
            } 
        }

        if (!thresholdSet) {
            if (ontologyReader.thresholdsSet) {
                humidityMinThreshold = ontologyReader.thresholds.FirstOrDefault(o => o.thing == "humidity sensor").minThreshold;
                humidityMaxThreshold = ontologyReader.thresholds.FirstOrDefault(o => o.thing == "humidity sensor").minThreshold;
            }
        }

        if (sceneController.inOffice && !sceneController.locationUndefined)
        {
            if (firstExecution)
            {
                timeLastExecution = sceneController.officeEntryTime.AddSeconds(700);
                firstExecution = false;
            }

            DateTime currentDateTime = DateTime.Now;
            double diffSeconds = (currentDateTime - timeLastExecution).TotalSeconds;
            
            if (diffSeconds > frequencyOfCheckInSeconds) {
                Debug.Log("Check humidity concentration in office.");
                StartCoroutine(getHumidity());
                timeLastExecution = currentDateTime;
            }   
        }
    }
    private IEnumerator getHumidity() {

        UnityWebRequest uwr = new UnityWebRequest(apiEndpoint, apiMethod);

        uwr.downloadHandler = (DownloadHandler) new DownloadHandlerBuffer();
        yield return uwr.SendWebRequest();

        JSONNode data = JSON.Parse(uwr.downloadHandler.text);
        
        // set the CO2 value based on the JSON structure
        double currentHumidity = (int)data["Humidity"];

        string warningText = "";
        if (currentHumidity < humidityMinThreshold) {
            warningText = $"The current humidity of {Convert.ToString(currentHumidity)} is too low, please adjust the ventilation accordingly.";
        } else if (currentHumidity > humidityMaxThreshold) {
            warningText = $"The current temperature of {Convert.ToString(currentHumidity)} is too high, please adjust the ventilation accordingly.";
        }

        humidityWarning.transform.Find("DescriptionText").GetComponent<TextMeshPro>().text = warningText;
        sceneController.showTemperatureWarning = true;
    }
}