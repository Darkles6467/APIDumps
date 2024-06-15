#pragma once

#include "BaseDeclarations.h"
#include "AEmitter.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct AEmitterCameraLensEffectBase : AEmitter
{
	char __padding[0x38L];
	UParticleSystem * PS_CameraEffectField() { return GetNativePointerField<UParticleSystem *>(this, "AEmitterCameraLensEffectBase.PS_CameraEffect"); }
	UParticleSystem * PS_CameraEffectNonExtremeContentField() { return GetNativePointerField<UParticleSystem *>(this, "AEmitterCameraLensEffectBase.PS_CameraEffectNonExtremeContent"); }
	float& BaseFOVField() { return *GetNativePointerField<float*>(this, "AEmitterCameraLensEffectBase.BaseFOV"); }
	float& DistFromCameraField() { return *GetNativePointerField<float*>(this, "AEmitterCameraLensEffectBase.DistFromCamera"); }

	// Functions

	void ActivateLensEffect() { NativeCall<void>(this, "AEmitterCameraLensEffectBase.ActivateLensEffect"); }
	void Destroyed() { NativeCall<void>(this, "AEmitterCameraLensEffectBase.Destroyed"); }
	void PostInitializeComponents() { NativeCall<void>(this, "AEmitterCameraLensEffectBase.PostInitializeComponents"); }
	void RegisterCamera(APlayerCameraManager * C) { NativeCall<void, APlayerCameraManager *>(this, "AEmitterCameraLensEffectBase.RegisterCamera", C); }
	void UpdateLocation(const FVector * CamLoc, const FRotator * CamRot, float CamFOVDeg) { NativeCall<void, const FVector *, const FRotator *, float>(this, "AEmitterCameraLensEffectBase.UpdateLocation", CamLoc, CamRot, CamFOVDeg); }
};

