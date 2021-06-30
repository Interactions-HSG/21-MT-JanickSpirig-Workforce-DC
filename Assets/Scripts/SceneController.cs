using UnityEngine;
using UnityEngine.Networking;
using System;
using System.IO;
using System.Net;
using System.Threading;

public class SceneController : MonoBehaviour
{
    public GameObject cherrybotItemBox;
    public GameObject leubotItemBox;
    public GameObject labWelcomeBox;
    public GameObject labMenu;
    public GameObject CO2Warning;
    public GameObject officeWelcomeBox;

    public bool showCherrybot {get; set;}
    public bool showLeubot {get; set;}
    public bool showLabWelcomeBox {get; set;}
    public bool showOfficeWelcomeBox {get; set; }
    public bool showLabMenu {get; set; }
    public bool showCO2Warning {get; set; }
    public bool inLab {get; set; }
    public bool inOffice {get; set; }
    public bool locationUndefined {get; set; }

	void Start ()
	{
        showCherrybot = false;
        showLeubot = false;
        showLabWelcomeBox = false;
        showOfficeWelcomeBox = false;
        showLabMenu = false;
        showCO2Warning = false;
        locationUndefined = true;
	}

	void Update ()
	{
        // CO2 WARNING
        if (showCO2Warning)
        {
            CO2Warning.SetActive(true);
        }
        else
        {
            CO2Warning.SetActive(false);
        }

        // OFFICE WELCOMEBOX
        if (showOfficeWelcomeBox)
        {
            officeWelcomeBox.SetActive(true);
        }
        else
        {
            officeWelcomeBox.SetActive(false);
        }

        // CHERRYBOT
        if (showCherrybot)
        {
            cherrybotItemBox.SetActive(true);
        }
        else
        {
            cherrybotItemBox.SetActive(false);
        }  

        // LEUBOT
        if (showLeubot)
        {
            leubotItemBox.SetActive(true);
        }
        else
        {
            leubotItemBox.SetActive(false);
        }

        // LAB
        if (showLabWelcomeBox)
        {
            labWelcomeBox.SetActive(true);
        }
        else
        {
            labWelcomeBox.SetActive(false);
        }

        // LAB MENU
        if (showLabMenu)
        {
            labMenu.SetActive(true);
        }
        else
        {
            labMenu.SetActive(false);
        }
	}
}