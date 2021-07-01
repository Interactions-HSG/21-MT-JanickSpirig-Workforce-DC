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
    public GameObject windowOpenWarning;
    public GameObject officeWelcomeBox;
    public GameObject curtainsControl;
    public GameObject ceilingLightControl;
    
    public DateTime officeEntryTime;
    public DateTime labEntryTime;

    public bool showCherrybot {get; set;}
    public bool showLeubot {get; set;}
    public bool showLabWelcomeBox {get; set;}
    public bool showOfficeWelcomeBox {get; set; }
    public bool showLabMenu {get; set; }
    public bool showCO2Warning {get; set; }
    public bool inLab {get; set; }
    public bool inOffice {get; set; }
    public bool locationUndefined {get; set; }
    public bool showWindowOpenWarning  {get; set; }
    public bool showCurtainsControl {get; set; }
    public bool showCeilingLightControl {get; set; }

	void Start ()
	{
        // HOLOGRAMS
        showCherrybot = false;
        showLeubot = false;
        showLabWelcomeBox = false;
        showOfficeWelcomeBox = false;
        showLabMenu = false;
        showCO2Warning = false;
        showWindowOpenWarning = false;
        showCurtainsControl = false;
        showCeilingLightControl = false;

        // USER LOCATION AT START
        locationUndefined = true;
        inOffice = false;
        inLab = false;
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

        // WINDOW OPEN WARNING AND EITHER GOING TO RAIN, BAD AQ OR BOTH AND OUTSIDE AQ BAD WARNING
        if (showWindowOpenWarning)
        {
            windowOpenWarning.SetActive(true);
        }
        else
        {
            windowOpenWarning.SetActive(false);
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

        // CURTAINS CONTROL
        if (showCurtainsControl)
        {
            curtainsControl.SetActive(true);
        }
        else
        {
            curtainsControl.SetActive(false);
        }

        // CEILING LIGHT CONTROL
        if (showCeilingLightControl)
        {
            ceilingLightControl.SetActive(true);
        }
        else
        {
            ceilingLightControl.SetActive(false);
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

    public void uponOfficeEntrance()
    {
        showOfficeWelcomeBox = false;
        officeEntryTime = DateTime.Now;

        inOffice = true;
        inLab = false;
        locationUndefined = false;
    }

    public void uponLabEntrance()
    {
        inOffice = false;
        inLab = true;
        locationUndefined = false;

        showLabWelcomeBox = false;
        showLabMenu = true;

        labEntryTime = DateTime.Now;
    }


}