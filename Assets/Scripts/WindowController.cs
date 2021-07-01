using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using System.Web;
using System;
using SimpleJSON;
using System.Globalization;
using TMPro;

public class WindowController : MonoBehaviour
{
    public SceneController sceneController;
    public WeatherChecker weatherChecker;
    public OutsideAirQualityChecker outsideAirQualityChecker;
    public GameObject windowOpenWarning;
    
    private bool checkClosingNeeded;
    private bool processRunning;
    private string windowEndpoint;
    private int frequencyOfCheckInSeconds;
    private DateTime timeLastExecution;
    private bool firstExecution;


    // Start is called before the first frame update
    void Start()
    {
        frequencyOfCheckInSeconds = 120;
        firstExecution = true;
        processRunning = false;
        checkClosingNeeded = false;
        windowEndpoint = "http://10.2.1.218/things/sensor/properties"; // must come from the ontology
    }

    // Update is called once per frame
    void Update()
    {
        
        if (sceneController.inOffice && !sceneController.locationUndefined)
        {    
            if (firstExecution)
            {
                timeLastExecution = sceneController.officeEntryTime;
                firstExecution = false;
            }

            DateTime currentDateTime = DateTime.Now;
            double diffMinutes = (currentDateTime - timeLastExecution).TotalSeconds;
           
            if (diffMinutes > frequencyOfCheckInSeconds)
            {
                Debug.Log("Check if window is open..");
                StartCoroutine(checkWindow());
                timeLastExecution = currentDateTime;
                processRunning = true;
            }
            
        }
        

        if (checkClosingNeeded && processRunning)
        {
            StartCoroutine(weatherChecker.getWeatherForecast());
            StartCoroutine(outsideAirQualityChecker.getAQData());
            checkClosingNeeded = false;
        }

        if (weatherChecker.weatherForecastSet && outsideAirQualityChecker.aqSet && processRunning)
        {
            bool displayWarning = false;
            string warningText = "It is going to rain or outside Air Quality is too bad. Please close the windows!";
            if (weatherChecker.goingToRain || !outsideAirQualityChecker.outsideAirQualityOkay)
            {
                displayWarning = true;
            }

            if (displayWarning)
            {
                windowOpenWarning.transform.Find("DescriptionText").GetComponent<TextMeshPro>().text = warningText;
                sceneController.showWindowOpenWarning = true;
            }
            
            weatherChecker.weatherForecastSet = false;
            outsideAirQualityChecker.aqSet = false;
            processRunning = false;
        }
        
    }

    public IEnumerator checkWindow () {

        UnityWebRequest uwr = UnityWebRequest.Get(windowEndpoint);
        uwr.downloadHandler = (DownloadHandler) new DownloadHandlerBuffer();
        
        yield return uwr.SendWebRequest();

        var data = JSON.Parse(uwr.downloadHandler.text);

        // check if window is open and set checkForecast only if window is open 
        bool windowopen = true;
        if (windowopen)
        {
            checkClosingNeeded = true;
        }
    }
}