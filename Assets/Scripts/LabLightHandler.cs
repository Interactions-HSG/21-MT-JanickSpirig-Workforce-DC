using UnityEngine;
using UnityEngine.Networking;
using System;
using System.IO;
using System.Net;
using System.Threading;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Web;
using System.Linq;
using SimpleJSON;

public class LabLightHandler : MonoBehaviour
{

    public OntologyReader ontologyReader;
    public NetworkHandler networkHandler;
    public SceneController sceneController;

    private bool sendReminder;
    private bool labLightsChecked;

    private string lightEndpoint;

	void Start ()
	{
        labLightsChecked = false;
        lightEndpoint = "";
	}

	void Update ()
	{	

        if (sceneController.inOffice && !labLightsChecked) {

            if ((DateTime.Now - sceneController.officeEntryTime).TotalSeconds > 5.0)
            {
                StartCoroutine(getLightState());
                labLightsChecked = true;
            }
            
        }

        if (sendReminder) {
            sceneController.showLabLightReminder = true;
            sendReminder = false;
        }

        // set here the endpoints
        if (lightEndpoint == "") {
            if (ontologyReader.endpointsSet) {
                //lightEndpoint= ontologyReader.endpoints.FirstOrDefault(o => o.thing == "ceiling-light").uri;
                lightEndpoint = "https://api.interactions.ics.unisg.ch/knx/lights/61-102/g4";
                /* 
                foreach (Endpoint x in endpoints) {
                    if (x.uri.Contains("false")) {
                        lightOffEndpoint = x.uri;
                    } else if (x.uri.Contains("true")) {
                        lightOnEndpoint = x.uri;
                    }
                }
                */
            }
        }

        /*	
        if (requestToSend) {
                // execute the request now
                switch (this.method)
                {
                    case "PUT":
                        StartCoroutine(networkHandler.PutRequest(thing, uri, "", false));
                        requestToSend = false;
                        break;
                }
            
        };
        */
	
    }
    public void turnLightOnOff(string action) {

        if (action == "turn off")
        {
            StartCoroutine(modifyLightState("false"));
        } else if (action == "turn on")
        {
            StartCoroutine(modifyLightState("true"));
        }
    }

    private IEnumerator getLightState() {

        UnityWebRequest uwr = UnityWebRequest.Get(lightEndpoint);

        uwr.downloadHandler = (DownloadHandler) new DownloadHandlerBuffer();
        yield return uwr.SendWebRequest();

        JSONNode data = JSON.Parse(uwr.downloadHandler.text);

        // if light is still on when user entered the office, we recommend the robot to turn off the light automatically
        if (data["state"] == "on") {
            sendReminder = true;
        }
    }

    private IEnumerator modifyLightState(string state)
    {     
        string json = "{\"state\":" + state  + "}";

        byte[] dataToPut = System.Text.Encoding.UTF8.GetBytes("{}");
        UnityWebRequest uwr = UnityWebRequest.Put(lightEndpoint, dataToPut);
       
        uwr.SetRequestHeader ("Content-Type", "application/json");

        yield return uwr.SendWebRequest();

        Debug.Log(uwr.responseCode);    

        if (uwr.responseCode != System.Convert.ToInt64(200) && uwr.responseCode != System.Convert.ToInt64(202))
        {
            Debug.Log("Error While Sending: " + uwr.error);
        }
        else
        {
            Debug.Log("Request sent successfully!");            
        }

    }
}