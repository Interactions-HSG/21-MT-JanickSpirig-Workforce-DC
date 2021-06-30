using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LabMenuController : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject lightButton;
    public LabLightHandler labLightHandler;

    void Start() {
        // TO DO: Get current state of light to set toggle accordingly.
        
    }
    public void turnLightOn() {
        labLightHandler.turnLightOnOff("true");
    }
    public void turnLightOff() {
        labLightHandler.turnLightOnOff("false");
    }
}
