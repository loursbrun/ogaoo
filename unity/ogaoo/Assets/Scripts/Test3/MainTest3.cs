using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MainTest3 : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        Debug.Log("3333333");
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void LoadMainCoco()
    {
        SceneManager.LoadScene(0);
    }

}
