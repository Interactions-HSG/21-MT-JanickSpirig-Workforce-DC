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

	void Start ()
	{
		listener = new HttpListener ();
		listener.Prefixes.Add ("http://localhost:5050/");
		listener.Prefixes.Add ("http://127.0.0.1:5050/");
		// listener.Prefixes.Add("http://192.168.43.54:5050/");
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
		var context = listener.EndGetContext (result);		
		
		Debug.Log ("Method: " + context.Request.HttpMethod);
		Debug.Log ("LocalUrl: " + context.Request.Url.LocalPath);
		Debug.Log (context.Request.QueryString.AllKeys);

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
							Debug.Log("We are here! ");
							sceneController.showCherrybot = true;
						}
						else if (value == "0")
						{
							sceneController.showCherrybot = false;
						}
						break;
					case "Leubot":
						if (value == "1")
						{
							sceneController.showLeubot = true;
						}
						else if (value == "0")
						{
							sceneController.showLeubot = false;
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
				}
			}
		}
		context.Response.Close ();
	}
}