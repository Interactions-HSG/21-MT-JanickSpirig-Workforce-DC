using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using System.Web;
using System;
using SimpleJSON;
using System.Globalization;

public class OutsideAirQualityChecker : MonoBehaviour
{

    private string airQualityEndpoint;
    private int o3Threshold;
    private int pm10Threshold;
    private int no2Threshold;

    public bool aqSet;
    public bool outsideAirQualityOkay;
    public List<String> messages;

    // Start is called before the first frame update
    void Start()
    {
        airQualityEndpoint = "https://u50g7n0cbj.execute-api.us-east-1.amazonaws.com/v2/latest/9585"; // must come from the ontology
        o3Threshold = 80; // must come from the ontology
        pm10Threshold = 10; // must come from the ontology
        no2Threshold = 20; // must come from the ontology

        aqSet = false;

        outsideAirQualityOkay = true;

        messages = new List<String>();

    }

    public IEnumerator getAQData() {
        
        UnityWebRequest uwr = UnityWebRequest.Get(airQualityEndpoint);

        uwr.downloadHandler = (DownloadHandler) new DownloadHandlerBuffer();
        
        yield return uwr.SendWebRequest();

        var data = JSON.Parse(uwr.downloadHandler.text);

        JSONNode indicators = (JSONNode) data["results"][0]["measurements"];
        
        int no2 = 0;
        int pm10 = 0;
        int o3 = 0;

        foreach (JSONNode indicator in indicators) {
            switch ((string) (indicator["parameter"]))
            {
                case "o3":
                    o3 = Convert.ToInt32((float) indicator["value"]); 
                    break;
                case "no2":
                    no2 = Convert.ToInt32((float) indicator["value"]);
                    break;
                case "pm10":
                    pm10 = Convert.ToInt32((float) indicator["value"]);
                    break;
            }
        }
        
        if (no2 > no2Threshold) {
            this.outsideAirQualityOkay = false;
            messages.Add("NO2 level of " + Convert.ToString(no2) + " is too high!");
            Debug.Log("NO2 level of " + Convert.ToString(no2) + " is too high!");
        }

        if (pm10 > pm10Threshold) {
            this.outsideAirQualityOkay = false; 
            messages.Add("PM10 level of " + Convert.ToString(pm10) + " is too high!");
            Debug.Log("PM10 level of " + Convert.ToString(pm10) + " is too high!");
        }

        if (o3 > o3Threshold) {
            this.outsideAirQualityOkay = false;
            messages.Add("O3 level of " + Convert.ToString(o3) + " is too high!");
            Debug.Log("O3 level of " + Convert.ToString(o3) + " is too high!");
        }
        aqSet = true;
    }
}