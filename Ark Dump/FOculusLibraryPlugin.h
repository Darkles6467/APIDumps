#pragma once

#include "BaseDeclarations.h"
#include "IModuleInterface.h"

struct IOculusLibraryPlugin : IModuleInterface
{
};

struct FOculusLibraryPlugin : IOculusLibraryPlugin
{

	// Functions

	void EnablePlayerCameraManagerFollowHmd(bool bFollowHmdOrientation, bool bFollowHmdPosition) { NativeCall<void, bool, bool>(this, "FOculusLibraryPlugin.EnablePlayerCameraManagerFollowHmd", bFollowHmdOrientation, bFollowHmdPosition); }
	void EnablePlayerControllerFollowHmd(bool bEnable) { NativeCall<void, bool>(this, "FOculusLibraryPlugin.EnablePlayerControllerFollowHmd", bEnable); }
	void GetBaseRotationAndBaseOffsetInMeters(FRotator * OutRotation, FVector * OutBaseOffsetInMeters) { NativeCall<void, FRotator *, FVector *>(this, "FOculusLibraryPlugin.GetBaseRotationAndBaseOffsetInMeters", OutRotation, OutBaseOffsetInMeters); }
	void GetBaseRotationAndPositionOffset(FRotator * OutRot, FVector * OutPosOffset) { NativeCall<void, FRotator *, FVector *>(this, "FOculusLibraryPlugin.GetBaseRotationAndPositionOffset", OutRot, OutPosOffset); }
	void GetPlayerCameraManagerFollowHmd(bool * bFollowHmdOrientation, bool * bFollowHmdPosition) { NativeCall<void, bool *, bool *>(this, "FOculusLibraryPlugin.GetPlayerCameraManagerFollowHmd", bFollowHmdOrientation, bFollowHmdPosition); }
	void GetPose(FRotator * DeviceRotation, FVector * DevicePosition, FVector * NeckPosition, bool bUseOrienationForPlayerCamera, bool bUsePositionForPlayerCamera, const FVector PositionScale) { NativeCall<void, FRotator *, FVector *, FVector *, bool, bool, const FVector>(this, "FOculusLibraryPlugin.GetPose", DeviceRotation, DevicePosition, NeckPosition, bUseOrienationForPlayerCamera, bUsePositionForPlayerCamera, PositionScale); }
	void GetRawSensorData(FVector * Accelerometer, FVector * Gyro, FVector * Magnetometer, float * Temperature, float * TimeInSeconds) { NativeCall<void, FVector *, FVector *, FVector *, float *, float *>(this, "FOculusLibraryPlugin.GetRawSensorData", Accelerometer, Gyro, Magnetometer, Temperature, TimeInSeconds); }
	bool GetUserProfile(FHmdUserProfile * Profile) { return NativeCall<bool, FHmdUserProfile *>(this, "FOculusLibraryPlugin.GetUserProfile", Profile); }
	bool IsPlayerControllerFollowHmdEnabled() { return NativeCall<bool>(this, "FOculusLibraryPlugin.IsPlayerControllerFollowHmdEnabled"); }
};

