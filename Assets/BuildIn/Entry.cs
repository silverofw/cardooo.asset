using System.Reflection;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;
using UnityEngine.UI;

public class Entry : MonoBehaviour
{
    public Button LoadDll;
    public Button StartGame;

    // Start is called before the first frame update
    void Start()
    {
        Debug.Log("[ENTRY] Hello~");

        Addressables.CleanBundleCache();
        AssetBundle.UnloadAllAssetBundles(true);

        CheckForUpdate();

        LoadDll.onClick.AddListener(() => {
            Addressables.LoadAssetAsync<TextAsset>("Assets/HotFixRes/HotUpdate.dll.bytes").Completed += (handle) => {
                Debug.Log("[ENTRY] DoadDll~");
                Assembly hotUpdateAss = Assembly.Load(handle.Result.bytes);
                Addressables.LoadSceneAsync("Assets/HotFixRes/Scene/0020_StartGame.unity");
            };
        });

        StartGame.onClick.AddListener(() => {
            Addressables.LoadSceneAsync("Assets/HotFixRes/Scene/0020_StartGame.unity");
        });
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
