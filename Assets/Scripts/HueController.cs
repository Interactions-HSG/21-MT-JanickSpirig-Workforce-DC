using UnityEngine;
using UnityEngine.Networking;
using System;
using System.Collections;
using TMPro;
using Microsoft.MixedReality.Toolkit.UI;


public class HueController : MonoBehaviour {
     
    public SceneController sceneController;
    public CO2LevelController cO2LevelController;

    public GameObject birghtnessSlider;
    public GameObject redToggle;
    public GameObject greenToggle;
    public GameObject yellowToggle;
    public GameObject purpleToggle;

    private string currentColor;
    private int currentBrightness;
    private string airQuality;
    private string hueEndpoint;

    public bool adjustLamp {get; set; }

    public string targetColor {get; set; }

    public float targetBrightness {get; set; }

    void Start() {
        adjustLamp = false;
        hueEndpoint =  "http://10.2.1.211:1880/room_402/hue"; // should come from the ontology
    }

    void Update() {

        if (adjustLamp) {
            //StartCoroutine(changeLampState());
            Debug.Log(targetColor);
            Debug.Log(targetBrightness);
            adjustLamp = false;
        }

        /*
        // we sow the information only one time, when the user is standing in front of the hue lamp, this is the case as soon as we have retrieved the current CO2-level from the sensor.
        if (cO2LevelController.valueUpdated) {

            // display now the warning messages with alle the texts
            string infoText = $"This is our smart hue lamp. Its color represents the current air quality in the room. The color {currentColor} indicates a {airQuality} air quality, as the CO2 concentration is currently {cO2LevelController.co2Value}";

            sceneController.hueInformation.transform.Find("DescriptionText").GetComponent<TextMeshPro>().text = infoText;
            sceneController.showHueInformation = true;
            cO2LevelController.valueUpdated = false;
        }
        */
    }

    public void displayControlField() {

        // set toggle and brightness according to current state

        sceneController.showHueControl = true;


    }

    private IEnumerator changeLampState() {

        int brightness = (int) targetBrightness;

        string json = "{\"on\": true,\"color\": \"" + targetColor + "\", \"brightness\":" + brightness.ToString() + ", \"override\": true}";

        byte[] dataToPut = System.Text.Encoding.UTF8.GetBytes(json);
        UnityWebRequest uwr = UnityWebRequest.Put(hueEndpoint, dataToPut);

        uwr.SetRequestHeader ("Content-Type", "application/json");
        yield return uwr.SendWebRequest();
    }

    public void updateTargetBrightness() {
        targetBrightness = birghtnessSlider.GetComponent<PinchSlider>().SliderValue;

    }

    public void processRequest(string color) {
        // get CO2 value and set tex tin infobox and display the ifnobox
        currentColor = color;

        switch (currentColor)
        {
            case "green":
                airQuality = "good";
                break;
            case "red":
                airQuality = "bad";
                break;
            case "purple":
                airQuality = "critical";
                break;
            case "yellow":
                airQuality = "moderate";
                break;
        }

        // if there is a value from a previous execution has been set
        cO2LevelController.valueUpdated = false;
        StartCoroutine(cO2LevelController.getCo2Data(true));
    }
}