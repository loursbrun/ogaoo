using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class Rotation : MonoBehaviour {

     float speed = 1.0f; //how fast the object should rotate
   
   Vector3 centerPos, targetPos, refPos;

   

    void Update()
   {
      
      if(Input.GetMouseButtonDown(0))
      {
         centerPos = Input.mousePosition;
      }
      
      if(Input.GetMouseButton(0))
      {
         targetPos = Input.mousePosition;
      }
      centerPos = Vector3.SmoothDamp(centerPos,targetPos,ref refPos, 0.5f);
      Vector3 targetRotate = new Vector3(0, -(targetPos.x - centerPos.x), targetPos.z - centerPos.z);
      transform.Rotate(targetRotate * Time.deltaTime * speed,Space.World);
    }
   
}