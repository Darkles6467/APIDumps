#pragma once

#include "BaseDeclarations.h"
#include "UBlueprintFunctionLibrary.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UOculusFunctionLibrary : UBlueprintFunctionLibrary
{

	// Functions

	static void EnablePlayerCameraManagerFollowHmd(bool bFollowHmdOrientation, bool bFollowHmdPosition) { NativeCall<void, bool, bool>(nullptr, "UOculusFunctionLibrary.EnablePlayerCameraManagerFollowHmd", bFollowHmdOrientation, bFollowHmdPosition); }
	static void EnablePlayerControllerFollowHmd(bool bEnable) { NativeCall<void, bool>(nullptr, "UOculusFunctionLibrary.EnablePlayerControllerFollowHmd", bEnable); }
	static void GetBaseRotationAndBaseOffsetInMeters(FRotator * OutRotation, FVector * OutBaseOffsetInMeters) { NativeCall<void, FRotator *, FVector *>(nullptr, "UOculusFunctionLibrary.GetBaseRotationAndBaseOffsetInMeters", OutRotation, OutBaseOffsetInMeters); }
	static void GetBaseRotationAndPositionOffset(FRotator * OutRot, FVector * OutPosOffset) { NativeCall<void, FRotator *, FVector *>(nullptr, "UOculusFunctionLibrary.GetBaseRotationAndPositionOffset", OutRot, OutPosOffset); }
	static void GetPlayerCameraManagerFollowHmd(bool * bFollowHmdOrientation, bool * bFollowHmdPosition) { NativeCall<void, bool *, bool *>(nullptr, "UOculusFunctionLibrary.GetPlayerCameraManagerFollowHmd", bFollowHmdOrientation, bFollowHmdPosition); }
	static void GetPose(FRotator * DeviceRotation, FVector * DevicePosition, FVector * NeckPosition, bool bUseOrienationForPlayerCamera, bool bUsePositionForPlayerCamera, const FVector PositionScale) { NativeCall<void, FRotator *, FVector *, FVector *, bool, bool, const FVector>(nullptr, "UOculusFunctionLibrary.GetPose", DeviceRotation, DevicePosition, NeckPosition, bUseOrienationForPlayerCamera, bUsePositionForPlayerCamera, PositionScale); }
	static void GetRawSensorData(FVector * Accelerometer, FVector * Gyro, FVector * Magnetometer, float * Temperature, float * TimeInSeconds) { NativeCall<void, FVector *, FVector *, FVector *, float *, float *>(nullptr, "UOculusFunctionLibrary.GetRawSensorData", Accelerometer, Gyro, Magnetometer, Temperature, TimeInSeconds); }
	static bool GetUserProfile(FHmdUserProfile * Profile) { return NativeCall<bool, FHmdUserProfile *>(nullptr, "UOculusFunctionLibrary.GetUserProfile", Profile); }
	static bool IsPlayerControllerFollowHmdEnabled() { return NativeCall<bool>(nullptr, "UOculusFunctionLibrary.IsPlayerControllerFollowHmdEnabled"); }
	static void SetPositionScale3D(FVector PosScale3D) { NativeCall<void, FVector>(nullptr, "UOculusFunctionLibrary.SetPositionScale3D", PosScale3D); }
};

