using UnityEngine;
using UnityEngine.Networking;
using System;
using System.IO;
using System.Net;
using System.Threading;
using System.Text;

public class CherrybotHandler : MonoBehaviour
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
        thing = "/cherrybot";
        requestToSend = false;
        tokenRequested = false;
	}

	void Update ()
	{		
        if (requestToSend) {
            if (!networkHandler.tokenSet || networkHandler.currentThing != thing) {
                // ensure that we start the coroutine only once
                if (!tokenRequested) {
                    StartCoroutine(networkHandler.setToken(thing));
                    tokenRequested = true;
                }
            } else {
                // execute the request now
                switch (this.method)
                {
                    case "PUT":
                        StartCoroutine(networkHandler.PutRequest(thing, uri, json));
                        requestToSend = false;
                        tokenRequested = false;
                        break;
                }
            }
        };
	
    }

    public void changePosition(
        string x,
        string y,
        string z,
        string roll,
        string pitch,
        string yaw,
        string speed
        ) {

        uri = "/tcp/target";
        method = "PUT";
        json = "{\"target\": {\"coordinate\":{\"x\": " + x + ", \"y\": " + y + ",\"z\": "+z+ "},\"rotation\":{\"roll\": " + roll + ", \"pitch\": " + pitch + ", \"yaw\": " + yaw + "}}, \"speed\": " + speed + "}";
        
        requestToSend = true;
    }

    public void resetPosition() {
        
        uri = "/initialize";
        method = "PUT";
        json = "{\"none\": \"none\"}";

        requestToSend = true;
    }
}