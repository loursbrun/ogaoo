using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MainTest2 : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        Debug.Log("Test 2 Scene !");
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
