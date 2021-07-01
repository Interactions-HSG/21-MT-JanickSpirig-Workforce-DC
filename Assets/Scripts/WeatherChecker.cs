using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using System.Web;
using System;
using SimpleJSON;
using System.Globalization;

public class WeatherChecker : MonoBehaviour
{
    private string consumerKey;
    private string consumerSecret;
    private string geoLocationId;
    private string authEndpoint;
    private string forecastEndpoint;
    private DateTime timeLastExecution;

    public bool weatherForecastSet;
    public bool goingToRain; 
    public int rainProbabilityThreshold;

    // Start is called before the first frame update
    void Start()
    {
        consumerKey = "lBpHXNlMxvKAjVtT4bX8vitdD1IZjOX9";
        consumerSecret = "OHAHQ6EC2gSUzvxF";
        geoLocationId = "47.4238,9.3739";
        authEndpoint = "https://api.srgssr.ch/oauth/v1/accesstoken?grant_type=client_credentials";
        forecastEndpoint = "https://api.srgssr.ch/srf-meteo/forecast/" + geoLocationId;

        weatherForecastSet = false;
        goingToRain = false;

        rainProbabilityThreshold = 90;
    }

    public IEnumerator getWeatherForecast () {
        // AUTHENTICATION
        var uwr = new UnityWebRequest(authEndpoint, "POST");

        string auth = consumerKey + ":" + consumerSecret;
        auth = System.Convert.ToBase64String(System.Text.Encoding.GetEncoding("ISO-8859-1").GetBytes(auth));
        auth = "Basic " + auth;

        uwr.downloadHandler = (DownloadHandler) new DownloadHandlerBuffer();
        uwr.SetRequestHeader("Authorization", auth);
        
        yield return uwr.SendWebRequest();

        string token = JSON.Parse(uwr.downloadHandler.text)["access_token"];
        string bearerToken = "Bearer " + token;

        // GET WEATHER FORECAST
        var uri =  forecastEndpoint;
        UnityWebRequest uwr2 = UnityWebRequest.Get(uri);
        uwr2.downloadHandler = (DownloadHandler) new DownloadHandlerBuffer();
        uwr2.SetRequestHeader("Authorization", bearerToken);
        yield return uwr2.SendWebRequest();

        if (Convert.ToInt32(uwr2.responseCode) == 200)
        {
            var data = JSON.Parse(uwr2.downloadHandler.text);

            // GET CLOSEST FORECAST
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

            // CHECK IF IT IS GOING TO RAIN
            if (closestForecast["PROBPCP_PERCENT"] > rainProbabilityThreshold) {
                goingToRain = true;
            } else {
                goingToRain = false;
            }
            weatherForecastSet = true;
        }
        else
        {
            Debug.Log("Error at Weather Forecast API!");
            Debug.Log(uwr2.responseCode);

            // for testing purpose only
            goingToRain = true;
            weatherForecastSet = true;
        }
    }
}