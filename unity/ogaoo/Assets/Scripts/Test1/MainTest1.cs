using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MainTest1 : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        Debug.Log("Test 1 Scene !");
        Debug.Log("Test Git");
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void LoadMain()
    {
        SceneManager.LoadScene(0);
    }

}
