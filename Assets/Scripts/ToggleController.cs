using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using TMPro;
using System;

public class ToggleController : MonoBehaviour
{

    public CherrybotHandler cherrybotHandler;

    void Start() {
        // TO DO: Get current state of light to set toggle accordingly.
       
    }
    public void turnOn() {
        GetComponentInChildren<TextMesh>().text = "On";
        cherrybotHandler.changePosition("300", "0", "400", "180", "0", "0", "50");
    }
    public void turnOff() {
        GetComponentInChildren<TextMesh>().text = "Off";
        cherrybotHandler.resetPosition();
    }
    /*
    IEnumerator sendRequest(int content) {
        // var url = "https://api.interactions.ics.unisg.ch/knx/lights/61-102/g4";
        var url =  "https://api.interactions.ics.unisg.ch/cherrybot/tcp/target";
        var yourAPIKey = "398a0f00a80847fe879fddb9550f7798";
        
        string json = "{\"target\": {\"coordinate\":{\"x\": 300, \"y\":0,\"z\":400},\"rotation\":{\"roll\":180, \"pitch\":0, \"yaw\":0 }}, \"speed\":50 }";

        byte[] data = System.Text.Encoding.UTF8.GetBytes(json);  
    }
    */
}
