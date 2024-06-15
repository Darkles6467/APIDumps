#pragma once

#include "BaseDeclarations.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UPawnNoiseEmitterComponent : UActorComponent
{
	char __padding[0x20L];
	FVector& LastRemoteNoisePositionField() { return *GetNativePointerField<FVector*>(this, "UPawnNoiseEmitterComponent.LastRemoteNoisePosition"); }
	float& NoiseLifetimeField() { return *GetNativePointerField<float*>(this, "UPawnNoiseEmitterComponent.NoiseLifetime"); }
	float& LastRemoteNoiseVolumeField() { return *GetNativePointerField<float*>(this, "UPawnNoiseEmitterComponent.LastRemoteNoiseVolume"); }
	float& LastRemoteNoiseTimeField() { return *GetNativePointerField<float*>(this, "UPawnNoiseEmitterComponent.LastRemoteNoiseTime"); }
	float& LastLocalNoiseVolumeField() { return *GetNativePointerField<float*>(this, "UPawnNoiseEmitterComponent.LastLocalNoiseVolume"); }
	float& LastLocalNoiseTimeField() { return *GetNativePointerField<float*>(this, "UPawnNoiseEmitterComponent.LastLocalNoiseTime"); }

	// Functions

	float GetLastNoiseTime(bool bSourceWithinNoiseEmitter) { return NativeCall<float, bool>(this, "UPawnNoiseEmitterComponent.GetLastNoiseTime", bSourceWithinNoiseEmitter); }
	float GetLastNoiseVolume(bool bSourceWithinNoiseEmitter) { return NativeCall<float, bool>(this, "UPawnNoiseEmitterComponent.GetLastNoiseVolume", bSourceWithinNoiseEmitter); }
	void MakeNoise(AActor * NoiseMaker, float Loudness, const FVector * NoiseLocation) { NativeCall<void, AActor *, float, const FVector *>(this, "UPawnNoiseEmitterComponent.MakeNoise", NoiseMaker, Loudness, NoiseLocation); }
};

