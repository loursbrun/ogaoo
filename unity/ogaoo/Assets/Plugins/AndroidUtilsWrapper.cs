using UnityEngine;
using System.Collections;

public class AndroidUtilsWrapper : MonoBehaviour {

	#if UNITY_ANDROID

	private const string READ_STORAGE_PERMISSION = "android.permission.READ_EXTERNAL_STORAGE";
	private const string WRITE_STORAGE_PERMISSION = "android.permission.WRITE_EXTERNAL_STORAGE";

	private const string RECORD_AUDIO_PERMISSION = "android.permission.RECORD_AUDIO";

	void Start()
	{
		StoragePermissionRequest();
	}

	bool CheckPermissions()
	{
		if (Application.platform != RuntimePlatform.Android)
		{
			return true;
		}
		
		return (AndroidPermissionsManager.IsPermissionGranted(READ_STORAGE_PERMISSION) && AndroidPermissionsManager.IsPermissionGranted(WRITE_STORAGE_PERMISSION) && AndroidPermissionsManager.IsPermissionGranted(RECORD_AUDIO_PERMISSION));
	}


	void StoragePermissionRequest()
	{
		if (CheckPermissions ())
			return;

		AndroidPermissionsManager.RequestPermission(new []{READ_STORAGE_PERMISSION, WRITE_STORAGE_PERMISSION, RECORD_AUDIO_PERMISSION}, new AndroidPermissionCallback(
			grantedPermission =>
			{
			// permission granted.
		},
		deniedPermission =>
		{
			// The permission was denied.
		}));
	}
	#endif
}
