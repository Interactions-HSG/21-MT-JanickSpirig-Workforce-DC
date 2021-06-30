using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.UI;

public class CherrybotButtonController : MonoBehaviour
{
    public CherrybotHandler cherrybotHandler;
    public bool stateMove;
    public bool stateGripper;

    public GameObject moveButton;
    public GameObject gripperButton;

    private string resetIcon;
    private string moveIcon;

    void Start() {
        // TO DO: Get current state of light to set toggle accordingly.
        stateGripper = false;
        stateMove = false;

        resetIcon = "IconRefresh";
        moveIcon = "IconAdjust";

        setInitialIcons();
    }

    private void setInitialIcons ()
    {
        moveButton.GetComponent<ButtonConfigHelper>().SetQuadIconByName(moveIcon);
        gripperButton.GetComponent<ButtonConfigHelper>().SetQuadIconByName(moveIcon);
    }

    public void moveRobot() {
        if (!stateMove) {
            cherrybotHandler.changePosition("300", "0", "400", "180", "0", "0", "50");
            stateMove = true;

            moveButton.GetComponent<ButtonConfigHelper>().SetQuadIconByName(resetIcon);
        } else {
            cherrybotHandler.resetPosition();
            stateMove = false;

            moveButton.GetComponent<ButtonConfigHelper>().SetQuadIconByName(moveIcon);

        }
    }

    public void moveGripper() {
        if (!stateGripper) {
            // open the gripper
            cherrybotHandler.changeGripper("200");
            stateGripper = true;

            gripperButton.GetComponent<ButtonConfigHelper>().SetQuadIconByName(resetIcon);
        } else {
            cherrybotHandler.changeGripper("0");
            stateGripper = false;

            gripperButton.GetComponent<ButtonConfigHelper>().SetQuadIconByName(moveIcon);
        }
    }
}
