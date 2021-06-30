using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using System.Web;
using System;
using SimpleJSON;
using System.Globalization;
using TMPro;

public class CO2LevelController : MonoBehaviour
{
    public OutsideAirQualityChecker outsideAirQualityChecker;
    public GameObject co2Warning;
    public SceneController sceneController;

    private double co2Threshold;
    private double co2Value;
    private bool co2ValueSet;
    private bool processStarted;
    private DateTime timeLastExecution;
    private int frequencyOfCheckInSeconds;
    private string sensorEndpoint;
    private bool aqRequested;

    // Start is called before the first frame update
    void Start()
    {
        co2ValueSet = false;
        processStarted = false;
        aqRequested = false;
        // we don't want to execute all the checks simultaneously
        timeLastExecution = DateTime.Now;
        frequencyOfCheckInSeconds = 60; // must come from the ontology
        sensorEndpoint = ""; // must come from the ontology
        co2Threshold = Convert.ToDouble(1000); // must come from the onology


        // outsideAirQualityChecker.aqSet = false;
    }

    // Update is called once per frame
    void Update()
    {
        // get weather forecast every 15 minutes and check if windows are open, if windows are open, then display an alert!
        // authentication with POST request

        if (sceneController.inOffice && !sceneController.locationUndefined) {
            if (!processStarted) {
                DateTime currentDateTime = DateTime.Now;
                double diffMinutes = (currentDateTime - timeLastExecution).TotalSeconds;
            
                if (diffMinutes > frequencyOfCheckInSeconds) {
                    Debug.Log("Check CO2 concentration in office.");
                    StartCoroutine(getCo2Data());
                    timeLastExecution = currentDateTime;
                    processStarted = true;
                }
            }
        }

        if (co2ValueSet) {
            if (co2Value > co2Threshold) {
                // co2 is too high!
                // check if outside air quality is sufficient to open the window.
                StartCoroutine(outsideAirQualityChecker.getAQData());
                aqRequested = true;
            }
            co2ValueSet = false;
        }

        if (outsideAirQualityChecker.aqSet) {
            string text = "";
            if (!outsideAirQualityChecker.outsideAirQualityOkay) {
                // air quaility is bad, do not open window, instead increase mechanical ventilation rate.   
                text = $"The current CO2 pollution in the office exceeds currently the limit of {Convert.ToString(co2Threshold)}. As the outdoor air quality is not good enough and could harm your health, please do not open the windows. Instead, consider increase the mechanical ventilation to achieve better air quality and productivity."; 

                outsideAirQualityChecker.outsideAirQualityOkay = true;
                outsideAirQualityChecker.messages.Clear();
            }
            else {
                // air quality is good, recommend to open the window or / and increase mechanical ventilation
                text = $"The current CO2 pollution in the office exceeds currently the limit of {Convert.ToString(co2Threshold)}. Please open the windows to achieve better air quality and productivity. Don't worry, it is not going to start raining in the next few minutes and the outdoor air quality is also fine."; 
            }

            co2Warning.transform.Find("DescriptionText").GetComponent<TextMeshPro>().text = text;
            sceneController.showCO2Warning = true;

            outsideAirQualityChecker.aqSet = false;
        }
        processStarted = false;
    }

    public IEnumerator getCo2Data () {

        string temp_url = "https://u50g7n0cbj.execute-api.us-east-1.amazonaws.com/v2/latest/9585";

        // UnityWebRequest uwr = UnityWebRequest.Get(sensorEndpoint);
        UnityWebRequest uwr = UnityWebRequest.Get(temp_url);

        uwr.downloadHandler = (DownloadHandler) new DownloadHandlerBuffer();
        
        yield return uwr.SendWebRequest();

        string data = JSON.Parse(uwr.downloadHandler.text);
        
        // set the CO2 value based on the JSON structure
        co2Value = 1100.0;
        co2ValueSet = true;
    }
}