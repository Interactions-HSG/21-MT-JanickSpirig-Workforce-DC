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
    public WeatherChecker weatherChecker;
    public OutsideAirQualityChecker outsideAirQualityChecker;
    public GameObject co2Warning;
    public SceneController sceneController;

    private double co2Threshold;
    private double co2Value;
    private bool checkOpeningWindowsOkay;
    private bool processRunning;

    private DateTime timeLastExecution;
    private int frequencyOfCheckInSeconds;
    private string sensorEndpoint;
    private bool firstExecution;

    // Start is called before the first frame update
    void Start()
    {
        checkOpeningWindowsOkay = false;
        firstExecution = true;
        processRunning = false;
        
        frequencyOfCheckInSeconds = 120; // must come from the ontology
        sensorEndpoint = ""; // must come from the ontology
        co2Threshold = Convert.ToDouble(1000); // must come from the onology
    }

    // Update is called once per frame
    void Update()
    {
        if (sceneController.inOffice && !sceneController.locationUndefined)
        {
            if (firstExecution)
            {
                timeLastExecution = sceneController.officeEntryTime.AddSeconds(60);
                firstExecution = false;
            }

            DateTime currentDateTime = DateTime.Now;
            double diffSeconds = (currentDateTime - timeLastExecution).TotalSeconds;
            
            if (diffSeconds > frequencyOfCheckInSeconds) {
                Debug.Log("Check CO2 concentration in office.");
                StartCoroutine(getCo2Data());
                timeLastExecution = currentDateTime;
                processRunning = true;
            }   
        }

        if (checkOpeningWindowsOkay && processRunning) {
            // CHECK OUTSIDE AIR QUALITY
            StartCoroutine(outsideAirQualityChecker.getAQData());

            // CHECK IF IT OS GOING TO RAIN
            StartCoroutine(weatherChecker.getWeatherForecast());
            checkOpeningWindowsOkay = false;
        }

        if (outsideAirQualityChecker.aqSet && weatherChecker.weatherForecastSet && processRunning) {

            string warningText = "";

            // OUTSIDE AIR QUALITY OKAY AND NOT GOING TO RAIN -> OPEN WINDOW
            if (outsideAirQualityChecker.outsideAirQualityOkay && !weatherChecker.goingToRain)
            {
                warningText = $"The current CO2 pollution in the office exceeds currently the limit of {Convert.ToString(co2Threshold)}. Please open the windows to achieve better air quality and productivity. Don't worry, it is not going to start raining in the next few minutes and the outdoor air quality is also fine.";
            }
            // OUTSIDE AIR QUALITY OKAY BUT IT IS GOING TO RAIN -> DO NOT OPEN WINDOW
            else if (outsideAirQualityChecker.outsideAirQualityOkay && weatherChecker.goingToRain)
            {
                warningText = $"The current CO2 pollution in the office exceeds currently the limit of {Convert.ToString(co2Threshold)}. As it is going to rain with a probability of more than {Convert.ToString(weatherChecker.rainProbabilityThreshold)} percent, please do not open the windows. Instead, consider increase the mechanical ventilation to achieve better air quality and productivity."; 
            }
            // OUTSIDE AIR QUALITY NOT OKAY AND IT IS NOT GOING TO RAIN -> DO NOT OPEN WINDOW
            else if (!outsideAirQualityChecker.outsideAirQualityOkay && !weatherChecker.goingToRain)
            {
                warningText = $"The current CO2 pollution in the office exceeds currently the limit of {Convert.ToString(co2Threshold)}. As the outside air quality is not okay and could harm you health, please do not open the windows. Instead, consider increase the mechanical ventilation to achieve better air quality and productivity."; 
            }
            // OUTSIDE AIR QUALITY NOT OKAY AND IT IS GOINT TO RAIN -> DO NOT OPEN WINDOW
            else if (!outsideAirQualityChecker.outsideAirQualityOkay && weatherChecker.goingToRain)
            {
                warningText = $"The current CO2 pollution in the office exceeds currently the limit of {Convert.ToString(co2Threshold)}. As the outside air quality is not okay and it is very likely going to rain, please do not open the windows. Instead, consider increase the mechanical ventilation to achieve better air quality and productivity."; 
            }

            co2Warning.transform.Find("DescriptionText").GetComponent<TextMeshPro>().text = warningText;
            sceneController.showCO2Warning = true;

            outsideAirQualityChecker.aqSet = false;
            weatherChecker.weatherForecastSet = false;
            processRunning = false;
        }
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

        if (co2Value > co2Threshold) {
            checkOpeningWindowsOkay= true;
        }
    }
}