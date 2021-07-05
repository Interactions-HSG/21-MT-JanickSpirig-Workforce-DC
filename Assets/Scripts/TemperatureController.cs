using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using System.Linq;
using SimpleJSON;
using System.Globalization;
using System;
using TMPro;

// this script should start the ObjectRecognition process running on another computer
public class TemperatureController : MonoBehaviour
{

    // control the temerature in the office very 15 minutes
    // if temperature too hot and outside is cooler and air quality outside is fine, then recommend to topen the window
    // if temperature too cold and outside air is more hot and air quality outside is fine, then recommend to open the window
    // if outside air quality is not good enough, then recommend to adjust mechanical ventilation
    private bool endpointSet;
    private bool firstExecution;
    private string temperatureEndpoint;
    private double frequencyOfCheckInSeconds;
    private DateTime timeLastExecution;
    
    public GameObject tempWarning;
    public SceneController sceneController;
    public OntologyReader ontologyReader;

    void Start()
    {
        endpointSet = false;
        frequencyOfCheckInSeconds = 120.0;
        firstExecution = true;
    }

    void Update()
    {
        if (!endpointSet) {
            if (ontologyReader.endpointsSet) {
                temperatureEndpoint = ontologyReader.endpoints.FirstOrDefault(o => o.thing == "temperature sensor").uri;
                endpointSet = true;
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
                Debug.Log("Check temperature in office.");
                StartCoroutine(getTemperature());
                timeLastExecution = currentDateTime;
            }   
        }
    }

    private IEnumerator getTemperature() {

        UnityWebRequest uwr = UnityWebRequest.Get(temperatureEndpoint);

        uwr.downloadHandler = (DownloadHandler) new DownloadHandlerBuffer();
        yield return uwr.SendWebRequest();

        JSONNode data = JSON.Parse(uwr.downloadHandler.text);
        
        // set the CO2 value based on the JSON structure
        double currentTemperature = (int)data["Temperature"];

        List<Double> tempThreshold = new List<double>();

        if (isHeatingSeason()) {
            tempThreshold.Add(21.2);
            tempThreshold.Add(24.5);
        } else {
            tempThreshold.Add(18.4);
            tempThreshold.Add(24.8);
        }

        string warningText = "";
        if (currentTemperature < tempThreshold[0]) {
            warningText = $"The current temperature of {Convert.ToString(currentTemperature)} is too low, please increase the heating rate.";
        } else if (currentTemperature > tempThreshold[1]) {
            warningText = $"The current temperature of {Convert.ToString(currentTemperature)} is too high, please increase the cooling rate.";
        }

        tempWarning.transform.Find("DescriptionText").GetComponent<TextMeshPro>().text = warningText;
        sceneController.showTemperatureWarning = true;
    }

    private bool isHeatingSeason() {
        DateTime date = DateTime.Now; 
        float value = (float)date.Month + date.Day / 100f;  // <month>.<day(2 digit)>    
        if (value < 4.30 || value >= 10.1) return true;   // Winter
        return false;   // Autumn
    }   
}
