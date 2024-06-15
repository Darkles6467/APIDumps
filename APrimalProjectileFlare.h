#pragma once

#include "BaseDeclarations.h"
#include "AShooterProjectile.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct APrimalProjectileFlare : AShooterProjectile
{
	char __padding[0x28L];
	float& TimeToActivateSecondParticleCompField() { return *GetNativePointerField<float*>(this, "APrimalProjectileFlare.TimeToActivateSecondParticleComp"); }
	float& RandomFallingMovementIntervalField() { return *GetNativePointerField<float*>(this, "APrimalProjectileFlare.RandomFallingMovementInterval"); }
	float& RandomFallingMovementStrengthField() { return *GetNativePointerField<float*>(this, "APrimalProjectileFlare.RandomFallingMovementStrength"); }
	float& LightColorIntensityField() { return *GetNativePointerField<float*>(this, "APrimalProjectileFlare.LightColorIntensity"); }

	// Functions

	void ActivateSecondParticles() { NativeCall<void>(this, "APrimalProjectileFlare.ActivateSecondParticles"); }
	void ApplyRandomMovement() { NativeCall<void>(this, "APrimalProjectileFlare.ApplyRandomMovement"); }
	void BeginPlay() { NativeCall<void>(this, "APrimalProjectileFlare.BeginPlay"); }
	void DeactivateProjectileEffects() { NativeCall<void>(this, "APrimalProjectileFlare.DeactivateProjectileEffects"); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalProjectileFlare.Tick", DeltaSeconds); }
};

