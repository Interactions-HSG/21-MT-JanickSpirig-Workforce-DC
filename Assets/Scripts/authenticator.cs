using UnityEngine;
using UnityEngine.Networking;
using System;
using System.IO;
using System.Net;
using System.Threading;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Web;
using System.Linq;
using SimpleJSON;
using Microsoft.MixedReality.Toolkit.Experimental.UI;
using TMPro;


public class authenticator : MonoBehaviour {
     
    public bool loggedIn {get; set; }
    public string password {get; set; }
    
    private string miroCardEndpoint;

    private MixedRealityKeyboard keyBoard;

    public TextMeshPro previewText;
    public GameObject dialogAuthenticate;
    

    void Start()
    {
        loggedIn = false;
        password = "hsg1234";
        miroCardEndpoint = "some endpoint"; // the MiroCard IP Adress
        keyBoard = dialogAuthenticate.GetComponent<MixedRealityKeyboard>();
        // previewText = dialogAuthenticate.transform.Find("PasswordField").Find("PreviewText").gameObject.GetComponent<TextMeshPro>();
    }

    
    private bool checkPassword(string enteredPwd) {

        if (enteredPwd == password)
        {
            StartCoroutine(sendInfoToMiroCard());
            return true;
        } else
        {
            return false;
        }
    }

    private IEnumerator sendInfoToMiroCard() {
        byte[] dataToPut = System.Text.Encoding.UTF8.GetBytes("{}");
        UnityWebRequest uwr = UnityWebRequest.Put(miroCardEndpoint, dataToPut);
        uwr.SetRequestHeader ("Content-Type", "application/json");
        yield return uwr.SendWebRequest();
    }

    public void showKeyboard() {
        keyBoard.ShowKeyboard();   
    }

    public void processPassword() {
        keyBoard.HideKeyboard();
        string enteredPassword = keyBoard.Text;
        keyBoard.ClearKeyboardText();
        
        TextMeshPro resultText = dialogAuthenticate.transform.Find("PwdResultText").GetComponent<TextMeshPro>();
        resultText.text = enteredPassword;

        /*
        if (checkPassword(enteredPassword)) {
            // PASSWORD IS CORRECT

            // hide the password field
            dialogAuthenticate.transform.Find("PasswordField").gameObject.SetActive(false);
            // Instruct user to shake miro card.
            resultText.text = "PASSWORD CORRECT! Now please shake the MiroCard sideways for a couple of seconds to fully accomplish the two-factor authtentication!";
        } else {
            // PASSWORD IS NOT CORRECT
            resultText.text = "PASSWORD INCORRECT! Please enter the correct password!";
        }
        */
    }

}