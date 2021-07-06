using UnityEngine;
using UnityEngine.Networking;
using System;
using System.IO;
using System.Net;
using System.Threading;

public class SceneController : MonoBehaviour
{
    public GameObject cherrybotItemBox;
    public GameObject dialogAuthenticate;
    public GameObject leubotItemBox;
    public GameObject labWelcomeBox;
    public GameObject labMenu;
    public GameObject CO2Warning;
    public GameObject temperatureWarning;
    public GameObject windowOpenWarning;
    public GameObject officeWelcomeBox;
    public GameObject curtainsControl;
    public GameObject ceilingLightControl;
    public GameObject labLightReminder;
    public GameObject lablightReminderConfirm;
    public GameObject hueInformation; 
    public GameObject hueControl;
    
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
    public bool showTemperatureWarning {get; set; }
    public bool showLabLightReminder {get; set; }
    public bool showLabLightReminderConfirm {get; set; }
    public bool showHueControl {get; set; }
    public bool showHueInformation {get; set; }
    public bool showDialogAuthenticate {get; set; }

	void Start ()
	{
        // WHICH HOLOGRAMS TO SHOW BY DEFAULT
        showCherrybot = false;
        showLeubot = false;
        showLabWelcomeBox = false;
        showOfficeWelcomeBox = false;
        showLabMenu = false;
        showCO2Warning = false;
        showWindowOpenWarning = false;
        showCurtainsControl = false;
        showCeilingLightControl = false;
        showTemperatureWarning = false;
        showLabLightReminder = false;
        showHueControl = true;
        showHueInformation = false;
        showDialogAuthenticate = true;

        // USER LOCATION AT START
        locationUndefined = true;
        inOffice = false;
        inLab = false;
	}

	void Update ()
	{

        // CHERRYBOT AUTHENTICATION
        if (showDialogAuthenticate)
        {
            dialogAuthenticate.SetActive(true);
        }
        else
        {
            dialogAuthenticate.SetActive(false);
        }
        
        if (showHueControl)
        {
            hueControl.SetActive(true);
        }
        else
        {
            hueControl.SetActive(false);
        }

        if (showHueInformation)
        {
            hueInformation.SetActive(true);
        }
        else
        {
            hueInformation.SetActive(false);
        }

        if (showLabLightReminderConfirm)
        {
            lablightReminderConfirm.SetActive(true);
        }
        else
        {
            lablightReminderConfirm.SetActive(false);
        }

        if (showLabLightReminder)
        {
            labLightReminder.SetActive(true);
        }
        else
        {
            labLightReminder.SetActive(false);
        }

        // CO2 WARNING
        if (showCO2Warning)
        {
            CO2Warning.SetActive(true);
        }
        else
        {
            CO2Warning.SetActive(false);
        }

        // TEMPERATURE WARNING
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