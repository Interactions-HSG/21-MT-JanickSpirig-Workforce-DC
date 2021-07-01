using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using System.Web;
using System;
using SimpleJSON;
using System.Globalization;
using TMPro;

public class CurtainsController : MonoBehaviour
{
    private string curtainEndpoint;
    
    // Start is called before the first frame update
    void Start()
    {
        curtainEndpoint = "http://10.2.1.212:1880/knx/floor_4/room_402/blinds"; // must come from the ontology
    }

    // Update is called once per frame

    public void curtainsUp()
    {
        string url = curtainEndpoint + "/up";
        StartCoroutine(modifyCurtainState(url));
    }

    public void curtainsDown()
    {
        string url = curtainEndpoint + "/down";
        StartCoroutine(modifyCurtainState(url));
    }

    public void curtainsStop()
    {
        string url = curtainEndpoint + "/stop";
        Debug.Log("We are here!");
        // StartCoroutine(modifyCurtainState(url));
    }

    private IEnumerator modifyCurtainState(string url)
    {
        byte[] dataToPut = System.Text.Encoding.UTF8.GetBytes("");
        UnityWebRequest uwr = UnityWebRequest.Put(url, dataToPut);
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