using SimpleJSON;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using System.Web;
using System;
using System.IO;
using System.Text;
using System.Text.RegularExpressions;

public class OntologyReader : MonoBehaviour {

    private JSONNode result;
    private string user = "jspirig";
    private string passcode = "MxkA3dCcFE7";
    private string ontologyEndpoint;

    public List<Endpoint> endpoints = new List<Endpoint>();
    public List<Threshold> thresholds = new List<Threshold>();
    public bool endpointsSet;
    public bool thresholdsSet;

    void Awake() {
        ontologyEndpoint =  $"https://{user}:{passcode}@graphdb.interactions.ics.unisg.ch/repositories/dc?query=";
        endpointsSet = false;
        thresholdsSet = false;
        // query and set endpoints
        string query = readQuery("selectThings.rq");
        StartCoroutine(queryOntology(query, "endpoints")); 
    }

    public string readQuery(string filename) {
        // read the query
        string filePath = @"Assets/SPARQL/" + filename;
        StreamReader sr = new StreamReader(filePath);
        string fileContent = sr.ReadToEnd();
        sr.Close();
        return encodeQuery(fileContent);
    }

    private string encodeQuery(string value)  
    {  
        StringBuilder retval = new StringBuilder();  
        foreach (char c in value)  
        {   
            if ((c >= 48 && c <= 57) || //0-9  
                (c >= 65 && c <= 90) || //a-z  
                (c >= 97 && c <= 122) || //A-Z                    
                (c == 45 || c == 46 || c == 95 || c == 126)) // period, hyphen, underscore, tilde  
            {  
                retval.Append(c);  
            }  
            else  
            {  
                retval.AppendFormat("%{0:X2}", ((byte)c));  
            }  
        }

        string resultString = retval.ToString().Replace("%20", "+");

        return resultString;
    }  

    public IEnumerator queryOntology(string query, string what) {

        var uri = ontologyEndpoint + query;
        UnityWebRequest uwr = UnityWebRequest.Get(uri);
        uwr.downloadHandler = (DownloadHandler) new DownloadHandlerBuffer();
        yield return uwr.SendWebRequest();

        /*
        // JSON.Parse(uwr.downloadHandler.text);
        Debug.Log(uwr.downloadHandler.text);
        var csvTable = new DataTable();  
                using (var csvReader = new CsvReader(new StreamReader(System.IO.File.OpenRead(@"D:\CSVFolder\CSVFile.csv")), true))  
                {  
                    csvTable.Load(csvReader);  
                } 
        */

        string response = uwr.downloadHandler.text;
        string[] lines = Regex.Split(response, Environment.NewLine);
        
        if (what == "endpoints") {
            for (int i = 1; i <= lines.Length - 2; i++) {
                string[] line = lines[i].Split(Convert.ToChar(","));
                Debug.Log(line);
                Endpoint endpoint = new Endpoint((string)line[0], (string)line[1], (string)line[2], (string)line[3], (string)line[4], (string)line[5]);
                endpoints.Add(endpoint);
            }
            endpointsSet = true;
        }
    }
}


public class Endpoint {
    public string thing;
    public string method;
    public string uri;
    public string actionName;
    public string actionDescription;
    public string space;

    public Endpoint(string thing, string method, string uri, string actionName, string actionDescription, string space) {
        this.thing = thing;
        this.method = method;
        this.uri = uri;
        this.actionName = actionName;
        this.actionDescription = actionDescription;
        this.space = space;
    }   
}


public class Threshold {
    public string thing;
    public double minThreshold;
    public double maxThreshold;

    public Threshold(string thing, double minThreshold, double maxThreshold) {
        this.thing = thing;
        this.minThreshold = minThreshold;
        this.maxThreshold = maxThreshold;
    }   
}