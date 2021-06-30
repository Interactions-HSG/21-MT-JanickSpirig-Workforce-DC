using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

// this script should start the ObjectRecognition process running on another computer
public class TemperatureController : MonoBehaviour
{

    // control the temerature in the office very 15 minutes
    // if temperature too hot and outside is cooler and air quality outside is fine, then recommend to topen the window
    // if temperature too cold and outside air is more hot and air quality outside is fine, then recommend to open the window
    // if outside air quality is not good enough, then recommend to adjust mechanical ventilation
    
    void Start()
    {
      
        
    }

    void Update()
    {
        
    }
}
