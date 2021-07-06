using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class RobotInSceneHandler : MonoBehaviour
{

    public SceneController sceneController;
    public authenticator authenticator;
    public GameObject dialogBox;
    public bool processRobot {get; set; }

    public TMPro.TextMeshPro titleText;
    public TMPro.TextMeshPro descriptionText;

    public string thing;

    // Start is called before the first frame update

    // Update is called once per frame
    void Update() {

        if (processRobot)
        {
            handleRobot();
            processRobot = false;
        }

        if (authenticator.loggedIn)
        {
            sceneController.showDialogAuthenticate = false;
            if (thing == "Cherrybot")
            {
                sceneController.showCherrybot = true;
            }
            else if (thing == "Leubot")
            {
                sceneController.showLeubot = true;
            }
            authenticator.loggedIn = false;
        }
    }

    public void handleRobot() {
        // set tile and text of authenticate dialogbox
        string masterPwd = authenticator.password;
        sceneController.showDialogAuthenticate = true;

        dialogBox.transform.Find("TitleText").GetComponent<TextMeshPro>().text = thing;
        dialogBox.transform.Find("DescriptionText").GetComponent<TextMeshPro>().text = $"This is the {thing}, which can do various tasks. To control the {thing} yourself, please enter the password below: {masterPwd}";
    }
}