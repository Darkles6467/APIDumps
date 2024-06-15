#pragma once

#include "BaseDeclarations.h"
#include "AEmitter.h"

struct APrimalEmitterSpawnable : AEmitter
{
	char __padding[0x60L];
	TSubobjectPtr<UAudioComponent>& SoundToPlayField() { return *GetNativePointerField<TSubobjectPtr<UAudioComponent>*>(this, "APrimalEmitterSpawnable.SoundToPlay"); }
	TSubclassOf<UCameraShake>& CameraShakeField() { return *GetNativePointerField<TSubclassOf<UCameraShake>*>(this, "APrimalEmitterSpawnable.CameraShake"); }
	float& CameraShakeInnerRadiusField() { return *GetNativePointerField<float*>(this, "APrimalEmitterSpawnable.CameraShakeInnerRadius"); }
	float& CameraShakeOuterRadiusField() { return *GetNativePointerField<float*>(this, "APrimalEmitterSpawnable.CameraShakeOuterRadius"); }
	float& CameraShakeFalloffField() { return *GetNativePointerField<float*>(this, "APrimalEmitterSpawnable.CameraShakeFalloff"); }
	float& CameraShakeScaleMultiplierField() { return *GetNativePointerField<float*>(this, "APrimalEmitterSpawnable.CameraShakeScaleMultiplier"); }
	FDecalData& DecalToSpawnField() { return *GetNativePointerField<FDecalData*>(this, "APrimalEmitterSpawnable.DecalToSpawn"); }
	float& ShallowEmitterDontSpawnOutOfViewCheckRadiusField() { return *GetNativePointerField<float*>(this, "APrimalEmitterSpawnable.ShallowEmitterDontSpawnOutOfViewCheckRadius"); }
	float& ShallowEmitterOverrideSecondsBeforeInactiveField() { return *GetNativePointerField<float*>(this, "APrimalEmitterSpawnable.ShallowEmitterOverrideSecondsBeforeInactive"); }
	float& ActivateSoundFadeInDurationField() { return *GetNativePointerField<float*>(this, "APrimalEmitterSpawnable.ActivateSoundFadeInDuration"); }
	float& DeactivateSoundFadeOutDurationField() { return *GetNativePointerField<float*>(this, "APrimalEmitterSpawnable.DeactivateSoundFadeOutDuration"); }
	float& ShallowEmitterSpawnableMaxDistanceField() { return *GetNativePointerField<float*>(this, "APrimalEmitterSpawnable.ShallowEmitterSpawnableMaxDistance"); }

	// Functions

	void Activate() { NativeCall<void>(this, "APrimalEmitterSpawnable.Activate"); }
	void BeginPlay() { NativeCall<void>(this, "APrimalEmitterSpawnable.BeginPlay"); }
	void Deactivate() { NativeCall<void>(this, "APrimalEmitterSpawnable.Deactivate"); }
	void Destroyed() { NativeCall<void>(this, "APrimalEmitterSpawnable.Destroyed"); }
	void EndPlay(const EEndPlayReason::Type EndPlayReason) { NativeCall<void, const EEndPlayReason::Type>(this, "APrimalEmitterSpawnable.EndPlay", EndPlayReason); }
	bool TemplateAllowActorSpawn(UWorld * World, const FVector * AtLocation, const FRotator * AtRotation, const FActorSpawnParameters * SpawnParameters) { return NativeCall<bool, UWorld *, const FVector *, const FRotator *, const FActorSpawnParameters *>(this, "APrimalEmitterSpawnable.TemplateAllowActorSpawn", World, AtLocation, AtRotation, SpawnParameters); }
	void Unstasis() { NativeCall<void>(this, "APrimalEmitterSpawnable.Unstasis"); }
	void UpdateAmbientSound() { NativeCall<void>(this, "APrimalEmitterSpawnable.UpdateAmbientSound"); }
};

