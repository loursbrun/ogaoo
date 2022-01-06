using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class main : MonoBehaviour {


    // Start is called before the first frame update
    void Start()
    {
        Debug.Log("Hello Ogaoo !");
    }

    // Update is called once per frame
    void Update()
    {
        
    }


    public void LoadTest1()
    {
        SceneManager.LoadScene(1);
    }

    public void LoadTest2()
    {
        SceneManager.LoadScene(2);
    }



}
