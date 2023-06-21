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

public class LoadDll : MonoBehaviour
{

    void Start()
    {
        Addressables.CleanBundleCache();
        AssetBundle.UnloadAllAssetBundles(true);

        // Editor下无需加载，直接查找获得HotUpdate程序集
        //Assembly hotUpdateAss = System.AppDomain.CurrentDomain.GetAssemblies().First(a => a.GetName().Name == "HotUpdate");        
        Addressables.LoadAssetAsync<TextAsset>("Assets/HotFixResources/HotUpdate.dll.bytes").Completed += (handle) => {
            Assembly hotUpdateAss = Assembly.Load(handle.Result.bytes);

            Type type = hotUpdateAss.GetType("Hello");
            type.GetMethod("Run").Invoke(null, null);
        };
    }
}
