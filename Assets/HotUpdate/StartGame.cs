using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.AddressableAssets;

public class StartGame : MonoBehaviour
{
    public Image image;
    // Start is called before the first frame update
    public void Start()
    {
        Debug.Log("[StartGame]");
        Addressables.LoadAssetAsync<Sprite>("Assets/HotFixRes/226461660.png").Completed += (handle) => {
            Debug.Log($"[LOAD] SPRITE");
            image.sprite = handle.Result;
        };
        Hello.Run();
    }
}
