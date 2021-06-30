using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using System.Web;
using System;
using SimpleJSON;
using System.Globalization;

public class WeatherHandler : MonoBehaviour
{

    public SceneController sceneController;

    private string consumerKey;
    private string consumerSecret;
    private string geoLocationId;
    private string authEndpoint;
    private string forecastEndpoint;
    private JSONNode weatherForecast;
    private bool weatherForecastSet;
    private bool processStarted;
    private DateTime timeLastExecution;
    private int frequencyOfCheck;

    // Start is called before the first frame update
    void Start()
    {
        consumerKey = "lBpHXNlMxvKAjVtT4bX8vitdD1IZjOX9";
        consumerSecret = "OHAHQ6EC2gSUzvxF";
        geoLocationId = "47.4238,9.3739";
        authEndpoint = "https://api.srgssr.ch/oauth/v1/accesstoken?grant_type=client_credentials";
        forecastEndpoint = "https://api.srgssr.ch/srf-meteo/forecast/" + geoLocationId;
        frequencyOfCheck = 15;
        weatherForecastSet = false;
        weatherForecast = null;
        timeLastExecution = DateTime.Now.AddSeconds(60);
        processStarted = false;
    }

    // Update is called once per frame
    void Update()
    {
        // get weather forecast every 15 minutes and check if windows are open, if windows are open, then display an alert!
        // authentication with POST request

        if (sceneController.inOffice && !sceneController.locationUndefined) {
            if (!processStarted) {
                DateTime currentDateTime = DateTime.Now;
                double diffMinutes = (currentDateTime - timeLastExecution).TotalMinutes;
                
                // get weather forecast data every 15 minutes
                if (diffMinutes >= Convert.ToDouble(frequencyOfCheck)) {
                    Debug.Log(diffMinutes);
                    StartCoroutine(getWeatherForecast());
                    timeLastExecution = currentDateTime;
                    processStarted = true;
                }
            }
        }

        if (weatherForecastSet) {
            // weatherforecast data is here, check if it is going to rain very soon.
            Debug.Log(weatherForecast["PROBPCP_PERCENT"]);
            if (weatherForecast["PROBPCP_PERCENT"] > 60) {
                // it is going to rain! 
                // check if window is open! 

                // if window is open, then tell the user to close the window as it is going to rain

            }
            processStarted = false;
            weatherForecastSet = false;
        }
    }

    public IEnumerator getWeatherForecast () {
        // authenticate
        var uwr = new UnityWebRequest(authEndpoint, "POST");

        string auth = consumerKey + ":" + consumerSecret;
        auth = System.Convert.ToBase64String(System.Text.Encoding.GetEncoding("ISO-8859-1").GetBytes(auth));
        auth = "Basic " + auth;

        uwr.downloadHandler = (DownloadHandler) new DownloadHandlerBuffer();
        uwr.SetRequestHeader("Authorization", auth);
        
        yield return uwr.SendWebRequest();

        string token = JSON.Parse(uwr.downloadHandler.text)["access_token"];
        string bearerToken = "Bearer " + token;

        // get weather forecast data
        var uri =  forecastEndpoint;

        UnityWebRequest uwr2 = UnityWebRequest.Get(uri);
        uwr2.downloadHandler = (DownloadHandler) new DownloadHandlerBuffer();
        uwr2.SetRequestHeader("Authorization", bearerToken);
        yield return uwr2.SendWebRequest();

        var data = JSON.Parse(uwr2.downloadHandler.text);

        // save informatin if it going to rain from next horu forecast
        DateTime currentDateTime = DateTime.Now.ToUniversalTime();

        JSONArray allForecasts = (JSONArray) data["forecast"]["60minutes"];

        int time_diff = 10000;
        JSONNode closestForecast = null;

        foreach (var forecast in allForecasts) {
            DateTime forecastDT = Convert.ToDateTime((string) forecast.Value["local_date_time"]).ToUniversalTime();
            
            int diffMinutes = Convert.ToInt32((forecastDT - currentDateTime).TotalMinutes);
            
            if (diffMinutes < time_diff && diffMinutes > -1) {
                time_diff = diffMinutes;
                closestForecast = forecast.Value;
            }
        }
        Debug.Log(closestForecast["local_date_time"]);
        weatherForecast = closestForecast;
        weatherForecastSet = true;
    }
}