using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using System.Web;
using System;

public class NetworkHandler : MonoBehaviour
{
    public Token token = new Token();
    public long responseCode { get; set; }
    public string responseJson { get; set; }
    public string baseUrl;
    public bool tokenSet;
    public string currentThing  {get; set;}
    public float waitForSeconds;

    void Start() {
       baseUrl = "https://api.interactions.ics.unisg.ch";
       tokenSet = false;
       waitForSeconds = (float)1.0;
    }

    void Update() { 

    }

    public IEnumerator setToken(string thing) {
        var uri = baseUrl + thing + "/operator";
        UnityWebRequest uwr = UnityWebRequest.Get(uri);
        yield return uwr.SendWebRequest();

        yield return new WaitForSeconds(waitForSeconds);

        if (uwr.responseCode == System.Convert.ToInt64(204)) {
            // log in here
            
            Debug.Log("Let's do login....");
            
            string json = "{\"name\": \"Janick Spirig\",\"email\": \"janick.spirig@student.unisg.ch\"}";
            UnityWebRequest uwr2 = new UnityWebRequest(uri, "POST");
            //UnityWebRequest uwr2 = UnityWebRequest.Post(uri, json);
            
            byte[] encodedPayload = new System.Text.UTF8Encoding().GetBytes(json);
            uwr2.uploadHandler = (UploadHandler) new UploadHandlerRaw(encodedPayload);
            uwr2.downloadHandler = (DownloadHandler) new DownloadHandlerBuffer();
            
            uwr2.SetRequestHeader("Content-Type", "application/json");
            
            yield return uwr2.SendWebRequest();
            yield return new WaitForSeconds(waitForSeconds);
            
            UnityWebRequest uwr3 = UnityWebRequest.Get(uri);
            yield return uwr3.SendWebRequest();
            yield return new WaitForSeconds(waitForSeconds);

            Debug.Log("Login done successfully!");

            token = JsonUtility.FromJson<Token>(uwr3.downloadHandler.text);
            tokenSet = true;
            currentThing = thing;
        }
        else {
            token = JsonUtility.FromJson<Token>(uwr.downloadHandler.text);
            tokenSet = true;
            currentThing = thing;
        }
    }

    /*
    IEnumerator GetRequest(string thing, string uri)
    {
        StartCoroutine(setToken(thing, (token) => {
            UnityWebRequest uwr = UnityWebRequest.Get(uri);

            if (auth == true) {
                uwr.SetRequestHeader("Authentication", this.token);
            }

            yield return uwr.SendWebRequest();
        
            if (uwr.isNetworkError)
            {
                Debug.Log("Error While Sending: " + uwr.error);
            }
            else
            {
                Debug.Log("Request sent successfully!");
                JSONNode response = JSON.Parse(uwr.downloadHandler.text);
                callback(response, uwr.responseCode);
            }
    }

    */
    public IEnumerator PutRequest(string thing, string uri, string json)
    {       

        byte[] dataToPut = System.Text.Encoding.UTF8.GetBytes(json);
        UnityWebRequest uwr = UnityWebRequest.Put(baseUrl + thing + uri, dataToPut);
        uwr.SetRequestHeader("Authentication", this.token.token); 
        uwr.SetRequestHeader ("Content-Type", "application/json");

        yield return uwr.SendWebRequest();
        yield return new WaitForSeconds(waitForSeconds);

        if (uwr.responseCode != System.Convert.ToInt64(200))
        {
            Debug.Log("Error While Sending: " + uwr.error);
        }
        else
        {
            Debug.Log("Request sent successfully!");            
        }

    }

    /*
    public IEnumerator PutRequest(string thing, string uri, string json)
    {
        yield return StartCoroutine(setToken(thing, (token) => {
            // here we have now the token to execute our request 
            
            Debug.Log("We have the token here: ");
            Debug.Log(token);


            byte[] dataToPut = System.Text.Encoding.UTF8.GetBytes("Hello, This is a test");
            UnityWebRequest uwr = UnityWebRequest.Put(baseUrl + thing + uri, dataToPut);
            uwr.SendWebRequest();
            if (uwr.isNetworkError)
            {
                Debug.Log("Error While Sending: " + uwr.error);
            }
            else
            {
                Debug.Log("Request sent successfully!");
                // var data = JSON.Parse(uwr.downloadHandler.text);
                
            }  
        }));
    }
    */
    
    public IEnumerator PostRequest(string url, string json, string token="")
        {
            var uwr = new UnityWebRequest(url, "POST");

            if (token != "") {
                uwr.SetRequestHeader("Authentication", token);
            }

            byte[] jsonToSend = new System.Text.UTF8Encoding().GetBytes(json);
            uwr.uploadHandler = (UploadHandler)new UploadHandlerRaw(jsonToSend);
            uwr.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();
            uwr.SetRequestHeader("Content-Type", "application/json");

            //Send the request then wait here until it returns
            yield return uwr.SendWebRequest();

            if (uwr.isNetworkError) {
                Debug.Log("Error While Sending: " + uwr.error);
            } else {
                Debug.Log("Request sent successfully!");   
            }
        }
    }

[System.Serializable]
public class Token
{
    public string name;
    public string email;
    public string token;
}