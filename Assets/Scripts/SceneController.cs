using UnityEngine;
using UnityEngine.Networking;
using System;
using System.IO;
using System.Net;
using System.Threading;

public class SceneController : MonoBehaviour
{
    public GameObject toggleSwitch;
    public bool showToggleSwitch {get; set;}
    
    void Awake() {
        
    }

	void Start ()
	{
        showToggleSwitch = false;
	}

	void Update ()
	{
        // activate / deactivate here the different compenents
        if (showToggleSwitch) {
            toggleSwitch.SetActive(true);
            // cat.SetActive(false); // false to hide, true to show
        } else {
            toggleSwitch.SetActive(false);
        }   
	}
}