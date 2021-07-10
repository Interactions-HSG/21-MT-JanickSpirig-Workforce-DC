using Unity;
using UnityEngine;
using System;
using TMPro;

#if ENABLE_WINMD_SUPPORT
using System;
using Windows.Devices.Bluetooth.Advertisement;

#endif

public class BluetoothReceiver : MonoBehaviour
{
    public StatusDisplay statusDisplay;

    public TextMeshPro description;

    /*
    void Awake()
    {
        description.text = "Awake";
#if ENABLE_WINMD_SUPPORT
        StartWatcher();
        description.text = "Supported";
#else
        description.text = "Not supported!";
        // statusDisplay.Display("UWP APIs are not supported on this platform!");
#endif
    }
    */

#if ENABLE_WINMD_SUPPORT


    private string RetrieveStringFromUtf8IBuffer(Windows.Storage.Streams.IBuffer theBuffer)
    {
        using (var dataReader = Windows.Storage.Streams.DataReader.FromBuffer(theBuffer))
        {
            dataReader.UnicodeEncoding = Windows.Storage.Streams.UnicodeEncoding.Utf8;
            return dataReader.ReadString(theBuffer.Length);
        }
    }

    private void StartWatcher()
    {
        void OnAdvertisementReceived(object sender, BluetoothLEAdvertisementReceivedEventArgs eventArgs)
        {
            Debug.Log("We have received an add!");
            description.text = "Advertisement received!";
            string m = RetrieveStringFromUtf8IBuffer(eventArgs.Advertisement.DataSections[0].Data);
            description.text = m;
        }

        try {
            BluetoothLEAdvertisementWatcher watcher = new BluetoothLEAdvertisementWatcher();
            // watcher.AdvertisementFilter.Advertisement.ManufacturerData.Add(GetManufacturerData());
            watcher.Received += OnAdvertisementReceived;
            watcher.Start();
            Debug.Log("watcher has been started!");
            description.text = "Watcher started!";
        } catch (Exception e){
            Debug.Log("we got an exception.");
            description.text = $"Watcher could not start! Error: {e.Message}";
        }
    }

    private BluetoothLEManufacturerData GetManufacturerData()
    {
        var manufacturerData = new BluetoothLEManufacturerData();
        manufacturerData.CompanyId = 1234;

        return manufacturerData;
    }
#endif

}
