# Expert Digital Companion for Workforce Assistance

With this repository you can deploy and run an expert Digital Companion that assists the workforce in the shopfloor (room 61-102) and office (61-402) at HSG-ICS.
To work properly the Digital Companion depends on [its backend](https://github.com/Interactions-HSG/21-MT-JanickSpirig-DC-Holo). Thus, after having deployed this repository successfully on Microsoft Hololens 2, head over to the backend repository to set it up as well.

## Geeting Started

### 1 Software prerequisits
1. Make sure you have Windows 10 and Visual Studio installed according to [this guide](https://docs.microsoft.com/en-us/windows/mixed-reality/develop/install-the-tools#installation-checklist). The Hololens emulator is not necessairily needed.
2. Download the [Unity version](https://store.unity.com/#plans-individual) that suits your needs best (most likely this is going to be the student version).
3. [Download and install](https://public-cdn.cloud.unity3d.com/hub/prod/UnityHubSetup.dmg?_gl=1*m6afp9*_ga*MTUxNTA1NjAyNC4xNjI4Nzc5NDU0*_ga_1S78EFL1W5*MTYyODc3OTQ1NC4xLjEuMTYyODc3OTU5My41MA..&_ga=2.123804106.1133258571.1628779454-1515056024.1628779454) Unity hub.

### 2 Device Portal Credentials
[Configure](https://docs.microsoft.com/en-us/windows/mixed-reality/develop/platform-capabilities-and-apis/using-the-windows-device-portal) the Hololens Device Portal as explained. Save and remember [your user credentials](https://docs.microsoft.com/en-us/windows/mixed-reality/develop/platform-capabilities-and-apis/using-the-windows-device-portal#creating-a-username-and-password).

### 3 Clone this repository

### 4 Build & Deploy Unity Project
1. [Open](https://docs.unity3d.com/Manual/GettingStartedOpeningProjects.html) the Unity project, i.e. this repository.
2. [Switch](https://docs.microsoft.com/en-us/windows/mixed-reality/develop/unity/tutorials/mr-learning-base-02?tabs=openxr#switching-the-build-platform) the build plattform in Unity
3. [Build](https://docs.microsoft.com/en-us/windows/mixed-reality/develop/unity/tutorials/mr-learning-base-02?tabs=openxr#1-build-the-unity-project) the Unity Project (only execute the first step)
4. [Deploy](https://docs.microsoft.com/en-us/windows/mixed-reality/develop/platform-capabilities-and-apis/using-visual-studio?tabs=hl2#deploying-a-hololens-app-over-wi-fi) the UWP solution (over WIFI)

