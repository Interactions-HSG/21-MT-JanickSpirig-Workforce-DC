using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using System.Web;
using System;
using SimpleJSON;
using System.Globalization;
using TMPro;
using System.Linq;

public class CurtainsController : MonoBehaviour
{
    public OntologyReader ontologyReader;
    private string curtainStopEndpoint;
    private string curtainUpEndpoint;
    private string curtainDownEndpoint;

    private bool endpointsSet;
    
    void Start()
    {
        endpointsSet = false;

    }

    // one script for both, curtains in lab and in office!

    void Update()
    {
        // get endpoints from ontology
        if (!endpointsSet) {
            if (ontologyReader.endpointsSet) {
                var endpoints = ontologyReader.endpoints.Where(o => o.thing == "window").ToList();
                foreach (Endpoint x in endpoints) {
                    if (x.uri.Contains("up")) {
                        curtainUpEndpoint = x.uri;
                    } else if (x.uri.Contains("down")) {
                        curtainDownEndpoint = x.uri;
                    } else if (x.uri.Contains("stop")) {
                        curtainStopEndpoint = x.uri;
                    }
                }
                endpointsSet = true;
            }
        }
    }

    // Update is called once per frame

    public void curtainsUp()
    {
        StartCoroutine(modifyCurtainState(curtainUpEndpoint));
    }

    public void curtainsDown()
    {
        StartCoroutine(modifyCurtainState(curtainDownEndpoint));
    }

    public void curtainsStop()
    {
        StartCoroutine(modifyCurtainState(curtainStopEndpoint));
    }

    private IEnumerator modifyCurtainState(string uri)
    {
        byte[] dataToPut = System.Text.Encoding.UTF8.GetBytes("{}");
        UnityWebRequest uwr = UnityWebRequest.Put(uri, dataToPut);
        yield return uwr.SendWebRequest();
        yield return new WaitForSeconds((float)1.0);

        Debug.Log(uwr.responseCode);    

        if (uwr.responseCode != System.Convert.ToInt64(200))
        {
            Debug.Log("Error While Sending: " + uwr.error);
        }
        else
        {
            Debug.Log("Request sent successfully!");            
        }
    }
}