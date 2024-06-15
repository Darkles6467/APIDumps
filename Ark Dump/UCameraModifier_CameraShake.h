#pragma once

#include "BaseDeclarations.h"
#include "UCameraModifier.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "UCameraShake.h"

struct UCameraModifier_CameraShake : UCameraModifier
{
	char __padding[0x18L];
	TArray<FCameraShakeInstance>& ActiveShakesField() { return *GetNativePointerField<TArray<FCameraShakeInstance>*>(this, "UCameraModifier_CameraShake.ActiveShakes"); }
	float& SplitScreenShakeScaleField() { return *GetNativePointerField<float*>(this, "UCameraModifier_CameraShake.SplitScreenShakeScale"); }

	// Functions

	void AddCameraShake(TSubclassOf<UCameraShake> NewShake, float Scale, ECameraAnimPlaySpace::Type PlaySpace, FRotator UserPlaySpaceRot, float Speed) { NativeCall<void, TSubclassOf<UCameraShake>, float, ECameraAnimPlaySpace::Type, FRotator, float>(this, "UCameraModifier_CameraShake.AddCameraShake", NewShake, Scale, PlaySpace, UserPlaySpaceRot, Speed); }
	float GetShakeScale(const FCameraShakeInstance * ShakeInst) { return NativeCall<float, const FCameraShakeInstance *>(this, "UCameraModifier_CameraShake.GetShakeScale", ShakeInst); }
	FCameraShakeInstance * InitializeShake(FCameraShakeInstance * result, TSubclassOf<UCameraShake> NewShake, float Scale, ECameraAnimPlaySpace::Type PlaySpace, FRotator UserPlaySpaceRot, float Speed) { return NativeCall<FCameraShakeInstance *, FCameraShakeInstance *, TSubclassOf<UCameraShake>, float, ECameraAnimPlaySpace::Type, FRotator, float>(this, "UCameraModifier_CameraShake.InitializeShake", result, NewShake, Scale, PlaySpace, UserPlaySpaceRot, Speed); }
	bool ModifyCamera(APlayerCameraManager * Camera, float DeltaTime, FMinimalViewInfo * InOutPOV, bool IgnoredBasedOnModifiers) { return NativeCall<bool, APlayerCameraManager *, float, FMinimalViewInfo *, bool>(this, "UCameraModifier_CameraShake.ModifyCamera", Camera, DeltaTime, InOutPOV, IgnoredBasedOnModifiers); }
	void ReinitShake(FCameraShakeInstance * ShakeInst, float NewScale, float Speed) { NativeCall<void, FCameraShakeInstance *, float, float>(this, "UCameraModifier_CameraShake.ReinitShake", ShakeInst, NewScale, Speed); }
	void RemoveAllCameraShakes() { NativeCall<void>(this, "UCameraModifier_CameraShake.RemoveAllCameraShakes"); }
	void RemoveCameraShake(TSubclassOf<UCameraShake> Shake) { NativeCall<void, TSubclassOf<UCameraShake>>(this, "UCameraModifier_CameraShake.RemoveCameraShake", Shake); }
	void UpdateCameraShake(float DeltaTime, FCameraShakeInstance * Shake, FMinimalViewInfo * InOutPOV) { NativeCall<void, float, FCameraShakeInstance *, FMinimalViewInfo *>(this, "UCameraModifier_CameraShake.UpdateCameraShake", DeltaTime, Shake, InOutPOV); }
};

