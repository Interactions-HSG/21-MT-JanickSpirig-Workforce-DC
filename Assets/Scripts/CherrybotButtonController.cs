using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.UI;
using System.Globalization;
using System;
using TMPro;

public class CherrybotButtonController : MonoBehaviour
{
    public CherrybotHandler cherrybotHandler;
    public bool updateButtons;

    public GameObject moveButton;

    public GameObject statusText;

    private DateTime lastInteraction;
    private double timeout;
    private int currentStep;
    private int targetPosition;
    private string resetIcon;
    private string moveIcon;
    private string gripperIcon;
    private int gripperOpenValue;
    private int gripperCloseValue;
    private List<List<string>> positions = new List<List<string>>();
    private ButtonConfigHelper helper;

    void Start() {
    
        helper = moveButton.GetComponent<ButtonConfigHelper>();
        Debug.Log(helper);
        resetIcon = "IconRefresh";
        moveIcon = "IconHide";
        gripperIcon = "IconShow";

        updateButtons = true;
        lastInteraction = DateTime.Now;
        timeout = 0.0;

        statusText.SetActive(false);

        currentStep = 0;

        gripperOpenValue = 850;
        gripperCloseValue = 620;
        
        // first target position (above tennis ball)        
        positions.Add(new List<string> {"111.2", "529.8", "334.2", "-176.7", "-5.1", "89.7"});
        // second target position (tennis ball inside gripper)
        positions.Add(new List<string> {"112", "541.2", "235.7", "-176", "-0.7", "90.4"});
        // third target position (safety stop)
        positions.Add(new List<string> {"190", "529.8", "334.2", "-176.7", "-5.1", "89.7"});
        // initial position to prevent any colission of the robot
        positions.Add(new List<string> {"500", "-2.2034161e-14", "280", "2.4067882e-7", "-89.99999", "180.0"});
        // fourth target position (over case)
        positions.Add(new List<string> {"17.7", "-474.8", "423.8", "177.7", "-38.4", "-87.5"});
        // fifth target position (initial position)
        positions.Add(new List<string> {"227", "-2.2034161e-14", "293.5", "2.4067882e-7", "-89.99999", "180.0"});

        // setInitialIcons();
    }

    void Update() {
        // define which button to display based on current position and update the buttons after x seconds

        // update buttons after three seconds since last click from user

        double difference = (DateTime.Now - lastInteraction).TotalSeconds;
        
        if (updateButtons) {
            if (difference > timeout) { 
                
                moveButton.SetActive(true);
                statusText.SetActive(false);

                switch (currentStep) {
                    // move robot into position just above the tennis ball
                    case 0:
                        helper.MainLabelText = "Move Cherrybot";
                        helper.SetQuadIconByName(moveIcon);
                        timeout = 14.0;
                        break;

                    // open gripper
                    case 1:
                        helper.MainLabelText = "Open Gripper";
                        helper.SetQuadIconByName(gripperIcon);
                        moveButton.SetActive(true);
                        timeout = 1.5;
                        break;

                    // move robot into position to grab tennis ball
                    case 2:
                        helper.MainLabelText = "Move Cherrybot";
                        helper.SetQuadIconByName(moveIcon);
                        moveButton.SetActive(true);
                        timeout = 3.0;
                        break;

                    // close gripper to grab tennis ball
                    case 3:
                        helper.MainLabelText = "Close Gripper";
                        helper.SetQuadIconByName(gripperIcon);
                        moveButton.SetActive(true);
                        timeout = 1.5;
                        break;

                    // move robot into safety stop
                    case 4:
                        helper.MainLabelText = "Move Cherrybot";
                        helper.SetQuadIconByName(moveIcon);
                        moveButton.SetActive(true);
                        timeout = 3.0;
                        break;

                    // move robot into temporary position to prevent any colission
                    case 5:
                        helper.MainLabelText = "Move Cherrybot";
                        helper.SetQuadIconByName(moveIcon);
                        moveButton.SetActive(true);
                        timeout = 9.0;
                        break;

                    // move robot into position to release the tennis ball
                    case 6:
                        helper.MainLabelText = "Move Cherrybot";
                        helper.SetQuadIconByName(moveIcon);
                        moveButton.SetActive(true);
                        timeout = 9.0;
                        break;
                    
                    // release the tennis ball
                    case 7:
                        helper.MainLabelText = "Open Gripper";
                        helper.SetQuadIconByName(gripperIcon);
                        moveButton.SetActive(true);
                        timeout = 1.5;
                        break;

                    // reset robot --> move it back into initial position
                    case 8:
                        statusText.SetActive(true);
                        moveButton.SetActive(false);
                        statusText.GetComponent<TextMeshPro>().text = "Very well done!";
                        // helper.SetQuadIconByName(resetIcon);
                        // helper.MainLabelText = "Reset Robot";
                        break;
                }
                updateButtons = false;
            } else {
                moveButton.SetActive(false);
                statusText.SetActive(true);
                statusText.GetComponent<TextMeshPro>().text = "Executing...";
            
                // moveButton.GetComponent<Interactable>().enabled = false;
                // helper.MainLabelText = "Executing...";
            }
        }
    }

    private void setInitialIcons ()
    {
        helper.MainLabelText = "Move Cherrybot";
        helper.SetQuadIconByName(moveIcon);
    }

    public void takeAction() { 

        string label = helper.MainLabelText;
        
        if (label.Contains("Move") || label.Contains("Reset")) { moveRobot();}
        else if (label.Contains("Gripper")) {moveGripper();}
    }

    public void moveRobot() {

        cherrybotHandler.changePosition(positions[targetPosition]);

        if (currentStep < 8) { currentStep  = currentStep + 1; }
        if (targetPosition < positions.Count) { targetPosition += 1; }

        lastInteraction = DateTime.Now;
        updateButtons = true;
    }

    public bool openOrClose() {

        bool result = false;

        switch (currentStep) {
            // open gripper
            case 1 : result = true;
            break;
            // close gripper
            case 3 : result = false;
            break;
            // open gripper
            case 7 : result = true;
            break;
        }
        return result;
    }

    public void moveGripper() {

        // true -> open, false -> close
        bool open = openOrClose();

        if (open) {
            // open the gripper
            cherrybotHandler.changeGripper("850");
        } else {
            cherrybotHandler.changeGripper("620");
        }

        if (currentStep < 8) { currentStep  = currentStep + 1; }
        lastInteraction = DateTime.Now;
        updateButtons = true;
    }
}
