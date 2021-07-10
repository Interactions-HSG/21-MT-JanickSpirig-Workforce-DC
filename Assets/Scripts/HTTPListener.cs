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
	public authenticator authenticator;
	public RobotInSceneHandler robotInSceneHandler;

	void Start ()
	{
		listener = new HttpListener ();
		listener.Prefixes.Add ("http://localhost:5050/");
		listener.Prefixes.Add ("http://127.0.0.1:5050/");
		// listener.Prefixes.Add("http://192.168.43.54:5050/");
		//listener.Prefixes.Add("http://10.2.1.85:5050/");

		listener.AuthenticationSchemes = AuthenticationSchemes.Anonymous;
		listener.Start ();

		listenerThread = new Thread (startListener);
		listenerThread.Start ();
		Debug.Log ("Server Started");
	}

	void Update ()
	{		
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
							robotInSceneHandler.thing = "Cherrybot";
							robotInSceneHandler.processRobot = true;
							// sceneController.showCherrybot = true;
						}
						else if (value == "0")
						{
							sceneController.showCherrybotControl = false;
						}
						break;
					case "Leubot":
						if (value == "1")
						{
							// robotInSceneHandler.thing = "(key);
							// sceneController.showLeubot= true;
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
					case "Window":
						if (value == "1")
						{
							sceneController.showCurtainsControl = true;
						}
						else if (value == "0")
						{
							sceneController.showCurtainsControl = false;
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
					case "cbEnded":
					if (value == "1")
					{
						// display info box that tells the user that the authentication was successful
						sceneController.showCherrybotControl = true;
					}
					else if (value == "0")
					{
						
					}
					break;
				}
			}
		}
		context.Response.Close ();
	}
}