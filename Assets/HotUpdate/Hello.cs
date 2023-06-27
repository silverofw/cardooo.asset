using System.Collections;
using UnityEngine;

public class Hello
{
    public static string name = "MARY";
    public static void Run()
    {
        Debug.Log("Hello, HybridCLR Cardooo version 0.2");
        var newC = new NewClass();
        newC.newFunc();
    }
}

public class NewClass {
    public string name = "MARY";
    public void newFunc()
    {
        Debug.Log($"[newFunc] {name}");
    }
}
