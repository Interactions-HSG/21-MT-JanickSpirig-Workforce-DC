using UnityEngine;
using System;
using TMPro;

public class HueController : MonoBehaviour {
     
    public SceneController sceneController;
    public CO2LevelController cO2LevelController;

    private string currentColor;
    private string airQuality;

    void Start() {


    }


    void Update() {

        // we sow the information only one time, when the user is standing in front of the hue lamp, this is the case as soon as we have retrieved the current CO2-level from the sensor.
        if (cO2LevelController.valueUpdated) {

            // display now the warning messages with alle the texts
            string infoText = $"This is our smart hue lamp. Its color represents the current air quality in the room. The color {currentColor} indicates a {airQuality} air quality, as the CO2 concentration is currently {cO2LevelController.co2Value}";

            sceneController.hueInformation.transform.Find("DescriptionText").GetComponent<TextMeshPro>().text = infoText;
            sceneController.showHueInformation = true;
            cO2LevelController.valueUpdated = false;
        }
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