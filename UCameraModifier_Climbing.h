#pragma once

#include "BaseDeclarations.h"
#include "UCameraModifier.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UCameraModifier_Climbing : UCameraModifier
{
	char __padding[0x8L];

	// Functions

	void Init(APlayerCameraManager * Camera) { NativeCall<void, APlayerCameraManager *>(this, "UCameraModifier_Climbing.Init", Camera); }
	bool ModifyCamera(APlayerCameraManager * Camera, float DeltaTime, FMinimalViewInfo * InOutPOV, bool IgnoredBasedOnModifiers) { return NativeCall<bool, APlayerCameraManager *, float, FMinimalViewInfo *, bool>(this, "UCameraModifier_Climbing.ModifyCamera", Camera, DeltaTime, InOutPOV, IgnoredBasedOnModifiers); }
	void UpdateAlpha(APlayerCameraManager * Camera, float DeltaTime) { NativeCall<void, APlayerCameraManager *, float>(this, "UCameraModifier_Climbing.UpdateAlpha", Camera, DeltaTime); }
	FVector * UpdateClimbingTargetLocation(FVector * result, FVector CurrentLocation, FRotator CurrentRotation, bool bFirstPerson, float DeltaTime) { return NativeCall<FVector *, FVector *, FVector, FRotator, bool, float>(this, "UCameraModifier_Climbing.UpdateClimbingTargetLocation", result, CurrentLocation, CurrentRotation, bFirstPerson, DeltaTime); }
	FRotator * UpdateClimbingTargetRotation(FRotator * result, FRotator CurrentRotation, bool bFirstPerson, float DeltaTime) { return NativeCall<FRotator *, FRotator *, FRotator, bool, float>(this, "UCameraModifier_Climbing.UpdateClimbingTargetRotation", result, CurrentRotation, bFirstPerson, DeltaTime); }
	static const wchar_t * StaticConfigName() { return NativeCall<const wchar_t *>(nullptr, "UCameraModifier_Climbing.StaticConfigName"); }
};

