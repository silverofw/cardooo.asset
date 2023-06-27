using HybridCLR;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.Networking;
using UnityEngine.ResourceManagement.AsyncOperations;
using UnityEngine.UI;

public class LoadDll : MonoBehaviour
{
    public Image image;
    void Start()
    {
        Addressables.CleanBundleCache();
        AssetBundle.UnloadAllAssetBundles(true);

        CheckForUpdate();

        Addressables.LoadAssetAsync<Sprite>("Assets/HotFixResources/226461660.png").Completed += (handle) => {
            Debug.Log($"[LOAD] SPRITE");

            image.sprite = handle.Result;
        };

        // Editor下无需加载，直接查找获得HotUpdate程序集
        //Assembly hotUpdateAss = System.AppDomain.CurrentDomain.GetAssemblies().First(a => a.GetName().Name == "HotUpdate");        
        Addressables.LoadAssetAsync<TextAsset>("Assets/HotFixResources/HotUpdate.dll.bytes").Completed += (handle) => {
            Assembly hotUpdateAss = Assembly.Load(handle.Result.bytes);

            Type type = hotUpdateAss.GetType("Hello");
            type.GetMethod("Run").Invoke(null, null);
        };
    }

    public void CheckForUpdate()
    {
        Addressables.CheckForCatalogUpdates().Completed += (_updates) =>
        {
            if (_updates.Status == AsyncOperationStatus.Failed)
            {
                Debug.LogWarning("Fetch failed!");
            }

            if (_updates.Result.Count > 0)
            {
                Debug.Log("Available Update:");
                foreach (var update in _updates.Result)
                {
                    Debug.Log(update);
                }
                // proceed with downloading new content
            }
            else
            {
                Debug.Log("No Available Update");
                // proceed with loading from cache
            }
        };
    }
}
