// largely based on https://gist.github.com/amimaro/10e879ccb54b2cacae4b81abea455b10
using UnityEngine;
using UnityEngine.Networking;
using System;
using System.IO;
using System.Net;
using System.Threading;

public class HTTPListener : MonoBehaviour
{
	public SceneController sceneController;
	private HttpListener listener;
	private Thread listenerThread;
	public HueController hueController;
	public CurtainsController curtainsController;
	public authenticator authenticator;
	public RobotInSceneHandler robotInSceneHandler;
	public LabLightHandler labLightHandler;

	private bool cherryBotReceived = false;
	private bool leubotReceived = false;
	private bool hueReceived = false;
	private bool ceilingLightReceived = false;
	private bool windowDone = false;

	void Start ()
	{
		listener = new HttpListener ();
		
		listener.Prefixes.Add("http://10.2.1.85:5050/"); // labnet lab
		// listener.Prefixes.Add("http://10.2.1.233:5050/"); // labnet office

		listener.AuthenticationSchemes = AuthenticationSchemes.Anonymous;
		listener.Start ();

		listenerThread = new Thread (startListener);
		listenerThread.Start ();
		Debug.Log ("Server Started");

		cherryBotReceived = false;
		leubotReceived = false;
		hueReceived = false;
		ceilingLightReceived = false;
		windowDone = false;
	}

	private void startListener ()
	{
		while (true) {               
			var result = listener.BeginGetContext (ListenerCallback, listener);
			result.AsyncWaitHandle.WaitOne ();
		}
	}

	private void ListenerCallback (IAsyncResult result)
	{				
		var context = listener.EndGetContext(result);		
		
		Debug.Log ("Request received");

		if (context.Request.QueryString.AllKeys.Length > 0)
		{
			foreach (var key in context.Request.QueryString.AllKeys) {
				var value = context.Request.QueryString.GetValues(key)[0];
				
				switch (key)
				{	
					case "Cherrybot":
						// 1 is equal to show and 0 is equal to hide
						if (value == "1")
						{
							// only show Cherrybot if interaction with blinds already happended
							if (sceneController.cherrybotNextStepDone && sceneController.inLab && !cherryBotReceived) {
								robotInSceneHandler.thing = "Cherrybot";
								robotInSceneHandler.processRobot = true;
								cherryBotReceived = true;
							}
							
						}
						else if (value == "0")
						{
							sceneController.showCherrybotControl = false;
						}
						break;
					case "Leubot":
						if (value == "1")
						{
							// only show Leubot it interaction with blinds already happened
							if (sceneController.cherrybotInteractionDone && sceneController.inLab && !leubotReceived) {
								robotInSceneHandler.thing = "Leubot";
								robotInSceneHandler.processRobot = true;
								leubotReceived = true;
							}	
							
						}
						else if (value == "0")
						{
							sceneController.showLeubotControl = false;
						}
						break;
					case "desk-bulb":
						if (value == "1")
						{
							if (!sceneController.deskBulbDone) {
								sceneController.showDeskBulbInfo = true;
							}
						}
						break;
					case "desk-lamp":
						if (value == "1")
						{
							if (!sceneController.deskLampDone) {
								sceneController.showDeskLampInfo = true;
							}
						}
						break;
					case "lab":
						if (value == "1")
						{
							sceneController.showLabWelcomeBox = true;
						}
						else if (value == "0")
						{
							sceneController.showLabWelcomeBox = false;
						}
						break;
					case "office":
						if (value == "1")
						{
							sceneController.showOfficeWelcomeBox = true;
							// check if user has turned off light in Lab
							
						}
						else if (value == "0")
						{
							sceneController.showOfficeWelcomeBox = false;
						}
						break;
					case "ceiling-light":
						if (value == "1")
						{	
							if (!ceilingLightReceived) {
								labLightHandler.processCeilingLightAppereance = true;
								sceneController.showCeilingLightControl = true;
								ceilingLightReceived = true;
							}
							
						}
						else if (value == "0")
						{
							sceneController.showCeilingLightControl = false;
						}
						break;
					case "hue":
						if (value == "1")
						{
							if (sceneController.inOffice && sceneController.blindInteractionDone && !hueReceived){
								hueController.showHueInfoBox = true;
								hueReceived = true;
							}
						}
						break;
					case "hue-control":
						if (value == "1")
						{
							sceneController.showHueControl = true; // testing 
							if (sceneController.inOffice && sceneController.blindInteractionDone){
								hueController.showHueInfoBox = true;
							}
						}
						break;
					/*
					case "hue-red":
						if (value == "1")
						{
							hueController.showHueInfoBox = true;
						}
						else if (value == "0")
						{
							sceneController.showHueInformation = false;
							sceneController.showHueControl = false;
						}
						break;
					case "hue-green":
						if (value == "1")
						{
							hueController.showHueInfoBox = true;
						}
						else if (value == "0")
						{
							sceneController.showHueInformation = false;
							sceneController.showHueControl = false;	
						}
						break;
					case "hue-yellow":
						if (value == "1")
						{
							hueController.showHueInfoBox = true;
						}
						else if (value == "0")
						{
							sceneController.showHueInformation = false;
							sceneController.showHueControl = false;
						}
						break;
					case "hue-purple":
						if (value == "1")
						{
							hueController.showHueInfoBox = true;
						}
						else if (value == "0")
						{
							sceneController.showHueInformation = false;
							sceneController.showHueControl = false;
						}
						break;
					*/
					/* 
					// ENDPOINT FOR MIRO CARD AUTHENTICATION
					case "miroAuth":
					if (value == "1")
					{
						// display info box that tells the user that the authentication was successful
						authenticator.loggedIn = true;
					}
					else if (value == "0")
					{
						
					}
					break;
					*/
					case "cbEnded":
						if (value == "1")
						{
							// display info box that tells the user that the authentication was successful
							robotInSceneHandler.tbProcessFinished = true;
						}
					break;
					case "window":
						if (value == "1")
						{
							if (!windowDone)
							{
								// display the curtains control button
								curtainsController.processWindow = true;
								windowDone = true;
							}
							
						}
						break;
					case "smartcard":
						if (value == "1")
						{
							// display the info boy only after temperature warning has been done
							if (sceneController.temperatureWarningDone && sceneController.inLab && !sceneController.miroCardInfoDone) {
								sceneController.showMiroCardInfo = true;
							}
						}
						break;
				}
			}
		}
		context.Response.Close ();
	}
}
