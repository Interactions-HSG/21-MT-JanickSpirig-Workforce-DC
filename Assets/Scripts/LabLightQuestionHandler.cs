using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Globalization; 
using System;

public class LabLightQuestionHandler : MonoBehaviour
{


    public SceneController sceneController;
    // Start is called before the first frame update

    private bool questionAsked;
    private bool byeMessageShown;
    private bool firstExecution;
    private DateTime referencePoint;
    private double secondsAfterEntry;
    private double secondsUntilByeMessage;

    void Start()
    {
        secondsAfterEntry = 2.0;
        secondsUntilByeMessage = 5.0;
        questionAsked = false;  
        byeMessageShown = false;
        firstExecution = true;
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

        if (sceneController.inLab && sceneController.leubotInteractionDone && !byeMessageShown) {
            
            if (firstExecution) {
                referencePoint = DateTime.Now;
                firstExecution = false;
            }

            double difference = (DateTime.Now - referencePoint).TotalSeconds;

            if (difference > secondsUntilByeMessage) {
                sceneController.showLabByeMessage = true;
                byeMessageShown = true;
            }
        }


    }
}
