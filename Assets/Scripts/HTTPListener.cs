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

	void Start ()
	{
		listener = new HttpListener ();
		
		// listener.Prefixes.Add ("http://localhost:5050/");
		listener.Prefixes.Add ("http://127.0.0.1:5050/");
	 	// listener.Prefixes.Add("http://192.168.43.54:5050/");
		//listener.Prefixes.Add("http://10.2.1.85:5050/");

		listener.AuthenticationSchemes = AuthenticationSchemes.Anonymous;
		listener.Start ();

		listenerThread = new Thread (startListener);
		listenerThread.Start ();
		Debug.Log ("Server Started");
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
							if (sceneController.miroCardInfoDone && sceneController.inLab) {
								robotInSceneHandler.thing = "Cherrybot";
								robotInSceneHandler.processRobot = true;
							}
							/*
							if (sceneController.miroCardInfoDone && sceneController.inLab) {
								sceneController.showCherrybotControl = true;
							}
							*/
							
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
							if (sceneController.cherrybotInteractionDone && sceneController.inLab) {
								robotInSceneHandler.thing = "Leubot";
								robotInSceneHandler.processRobot = true;
							}	
							
							/*
							if (sceneController.cherrybotInteractionDone && sceneController.inLab) {
								sceneController.showLeubotControl = true;
							}
							*/	
						}
						else if (value == "0")
						{
							sceneController.showLeubotControl = false;
						}
						break;
					case "Lab":
						if (value == "1")
						{
							sceneController.showLabWelcomeBox = true;
						}
						else if (value == "0")
						{
							sceneController.showLabWelcomeBox = false;
						}
						break;
					case "Office":
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
					case "Ceiling-light":
						if (value == "1")
						{
							sceneController.showCeilingLightControl = true;
						}
						else if (value == "0")
						{
							sceneController.showCeilingLightControl = false;
						}
						break;
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
							// display the curtains control button
							curtainsController.processWindow = true;
						}
						break;
					case "smartcard":
						if (value == "1")
						{
							// display the info boy only after temperature warning has been done
							if (sceneController.temperatureWarningDone && sceneController.inLab) {
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