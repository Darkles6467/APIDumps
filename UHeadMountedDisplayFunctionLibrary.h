#pragma once

#include "BaseDeclarations.h"
#include "UBlueprintFunctionLibrary.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UHeadMountedDisplayFunctionLibrary : UBlueprintFunctionLibrary
{

	// Functions

	static void EnableLowPersistenceMode(bool bEnable) { NativeCall<void, bool>(nullptr, "UHeadMountedDisplayFunctionLibrary.EnableLowPersistenceMode", bEnable); }
	static void GetOrientationAndPosition(FRotator * DeviceRotation, FVector * DevicePosition) { NativeCall<void, FRotator *, FVector *>(nullptr, "UHeadMountedDisplayFunctionLibrary.GetOrientationAndPosition", DeviceRotation, DevicePosition); }
	static void GetPositionalTrackingCameraParameters(FVector * CameraOrigin, FRotator * CameraRotation, float * HFOV, float * VFOV, float * CameraDistance, float * NearPlane, float * FarPlane) { NativeCall<void, FVector *, FRotator *, float *, float *, float *, float *, float *>(nullptr, "UHeadMountedDisplayFunctionLibrary.GetPositionalTrackingCameraParameters", CameraOrigin, CameraRotation, HFOV, VFOV, CameraDistance, NearPlane, FarPlane); }
	static float GetScreenPercentage() { return NativeCall<float>(nullptr, "UHeadMountedDisplayFunctionLibrary.GetScreenPercentage"); }
	static bool HasValidTrackingPosition() { return NativeCall<bool>(nullptr, "UHeadMountedDisplayFunctionLibrary.HasValidTrackingPosition"); }
	static bool IsHeadMountedDisplayEnabled() { return NativeCall<bool>(nullptr, "UHeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayEnabled"); }
	static bool IsInLowPersistenceMode() { return NativeCall<bool>(nullptr, "UHeadMountedDisplayFunctionLibrary.IsInLowPersistenceMode"); }
	static void ResetOrientationAndPosition(float Yaw) { NativeCall<void, float>(nullptr, "UHeadMountedDisplayFunctionLibrary.ResetOrientationAndPosition", Yaw); }
};

