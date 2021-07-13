using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Globalization; 
using System;
using TMPro;

public class LabLightQuestionHandler : MonoBehaviour
{


    public SceneController sceneController;
    // Start is called before the first frame update

    private bool questionAsked;
    private bool labByeMessageShown;
    private bool officeByeMessageShown;
    private bool firstExecutionLabByeMessage;
    private bool firstExecutionOfficeByeMessage;
    private bool firstExecutionLightConfirmMessage;
    private DateTime referencePoint;
    private double secondsAfterEntry;
    private double secondsUntilByeMessage;
    private double scecondsUntilLightConfirmMessage;
    
    public bool questionAnswered {get; set; }
    public string answer {get; set; }
    public GameObject questionDialogBox;

    void Start()
    {
        secondsAfterEntry = 2.0;
        secondsUntilByeMessage = 5.0;
        scecondsUntilLightConfirmMessage = 1.5;
        questionAsked = false;  
        officeByeMessageShown = false;
        labByeMessageShown = false;
        firstExecutionLabByeMessage = true;
        firstExecutionLightConfirmMessage = true;
    }

    // Update is called once per frame
    void Update()
    {
        if (sceneController.inLab && !questionAsked) {
            double difference = (DateTime.Now - sceneController.labEntryTime).TotalSeconds;
           
            if (difference > secondsAfterEntry) {
                sceneController.showLabLightQuestion = true;
                questionAsked = true;
            }
        }

        if (sceneController.inLab && sceneController.leubotInteractionDone && !labByeMessageShown) {
            
            if (firstExecutionLabByeMessage)  {
                referencePoint = DateTime.Now;
                firstExecutionLabByeMessage = false;
            }

            double difference = (DateTime.Now - referencePoint).TotalSeconds;

            if (difference > secondsUntilByeMessage) {
                sceneController.showLabByeMessage = true;
                labByeMessageShown = true;
            }
    
        }


        if (sceneController.inOffice && sceneController.humidityWarningDone && !officeByeMessageShown) {
            // display bye messag 
            if (firstExecutionOfficeByeMessage)  {
                referencePoint = DateTime.Now;
                firstExecutionOfficeByeMessage = false;
            }

            double difference = (DateTime.Now - referencePoint).TotalSeconds;

            if (difference > secondsUntilByeMessage) {
                sceneController.showOfficeByeMessage = true;
                officeByeMessageShown = true;
            }


        }

        if (sceneController.inLab && questionAnswered) {

            if (firstExecutionLightConfirmMessage) {
                referencePoint = DateTime.Now;
                firstExecutionLightConfirmMessage = false;
            }

            double difference = (DateTime.Now - referencePoint).TotalSeconds;

            if (difference > scecondsUntilLightConfirmMessage) {

                GameObject buttonParrent = questionDialogBox.transform.Find("ButtonParent").gameObject;

                buttonParrent.transform.Find("ButtonTwoA").gameObject.SetActive(false);
                buttonParrent.transform.Find("ButtonTwoB").gameObject.SetActive(false);
                buttonParrent.transform.Find("ButtonOne").gameObject.SetActive(true);

                string text = "";
                if (answer == "No") {
                    text = "Alright, no problem. You can also turned it on yourself. Just look up at the ceiling light and I will show you an option to do so!";
                }

                if (answer == "Yes") {
                    text = "Perfect, I turned it on for you.";
                }

                // update description text
                questionDialogBox.transform.Find("DescriptionText").GetComponent<TextMeshPro>().text = text;

                questionAnswered = false;
            }



        }
    }
}
