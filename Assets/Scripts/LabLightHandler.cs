using UnityEngine;
using UnityEngine.Networking;
using System;
using System.IO;
using System.Net;
using System.Threading;
using System.Text;

public class LabLightHandler : MonoBehaviour
{

    public NetworkHandler networkHandler;
    public string thing;
    public string json;
    public string uri;
    public string method;

    public bool requestToSend;
    public bool tokenRequested;

	void Start ()
	{
        thing = "/knx/lights/61-102";
        requestToSend = false;
        tokenRequested = false;
	}

	void Update ()
	{		
        if (requestToSend) {
                // execute the request now
                switch (this.method)
                {
                    case "PUT":
                        StartCoroutine(networkHandler.PutRequest(thing, uri, json, false));
                        requestToSend = false;
                        break;
                }
            
        };
	
    }
    public void turnLightOnOff(
            string state
        ) {
        
        uri = "/g4";
        method = "PUT";
        json = "{\"state\":" + state  + "}";
        
        requestToSend = true;
    }
}