#pragma once

#include "BaseDeclarations.h"
#include "UPrimitiveComponent.h"
#include "USceneComponent.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UBeamWeaponComponent : UPrimitiveComponent
{
	char __padding[0xc0L];
	UParticleSystem * ChargeupParticleSystemTemplateField() { return GetNativePointerField<UParticleSystem *>(this, "UBeamWeaponComponent.ChargeupParticleSystemTemplate"); }
	UParticleSystem * BurstWhenFiredSystemTemplateField() { return GetNativePointerField<UParticleSystem *>(this, "UBeamWeaponComponent.BurstWhenFiredSystemTemplate"); }
	UParticleSystem * ImpactSystemTemplateField() { return GetNativePointerField<UParticleSystem *>(this, "UBeamWeaponComponent.ImpactSystemTemplate"); }
	float& DurationField() { return *GetNativePointerField<float*>(this, "UBeamWeaponComponent.Duration"); }
	float& DamageRadiusField() { return *GetNativePointerField<float*>(this, "UBeamWeaponComponent.DamageRadius"); }
	float& DamageDelayField() { return *GetNativePointerField<float*>(this, "UBeamWeaponComponent.DamageDelay"); }
	float& BaseDamageField() { return *GetNativePointerField<float*>(this, "UBeamWeaponComponent.BaseDamage"); }
	float& LengthField() { return *GetNativePointerField<float*>(this, "UBeamWeaponComponent.Length"); }
	bool& IsPenetratingField() { return *GetNativePointerField<bool*>(this, "UBeamWeaponComponent.IsPenetrating"); }
	float& TargetTrackingSpeedField() { return *GetNativePointerField<float*>(this, "UBeamWeaponComponent.TargetTrackingSpeed"); }
	bool& UseOwnerForwardField() { return *GetNativePointerField<bool*>(this, "UBeamWeaponComponent.UseOwnerForward"); }
	float& OffsetField() { return *GetNativePointerField<float*>(this, "UBeamWeaponComponent.Offset"); }
	float& ChargeupTimeField() { return *GetNativePointerField<float*>(this, "UBeamWeaponComponent.ChargeupTime"); }
	bool& WhenChargingWaitForCallToFireField() { return *GetNativePointerField<bool*>(this, "UBeamWeaponComponent.WhenChargingWaitForCallToFire"); }
	bool& DeactivateChargeupOnFiringField() { return *GetNativePointerField<bool*>(this, "UBeamWeaponComponent.DeactivateChargeupOnFiring"); }
	long double& ChargeStartTimeField() { return *GetNativePointerField<long double*>(this, "UBeamWeaponComponent.ChargeStartTime"); }
	long double& StartTimeField() { return *GetNativePointerField<long double*>(this, "UBeamWeaponComponent.StartTime"); }
	long double& LastStoppedFiringTimeField() { return *GetNativePointerField<long double*>(this, "UBeamWeaponComponent.LastStoppedFiringTime"); }
	FVector& BeamEndLocationField() { return *GetNativePointerField<FVector*>(this, "UBeamWeaponComponent.BeamEndLocation"); }
	FVector& BeamStartLocationField() { return *GetNativePointerField<FVector*>(this, "UBeamWeaponComponent.BeamStartLocation"); }
	float& ContinuousTimeHittingTargetField() { return *GetNativePointerField<float*>(this, "UBeamWeaponComponent.ContinuousTimeHittingTarget"); }
	bool& HitTargetLastCheckField() { return *GetNativePointerField<bool*>(this, "UBeamWeaponComponent.HitTargetLastCheck"); }
	bool& IsFiringField() { return *GetNativePointerField<bool*>(this, "UBeamWeaponComponent.IsFiring"); }
	bool& IsChargingUpField() { return *GetNativePointerField<bool*>(this, "UBeamWeaponComponent.IsChargingUp"); }

	// Functions

	void DoDamageToActor(AActor * Actor, float DeltaSeconds) { NativeCall<void, AActor *, float>(this, "UBeamWeaponComponent.DoDamageToActor", Actor, DeltaSeconds); }
	void FireActualBeam() { NativeCall<void>(this, "UBeamWeaponComponent.FireActualBeam"); }
	FVector * GetBeamEndLocation(FVector * result) { return NativeCall<FVector *, FVector *>(this, "UBeamWeaponComponent.GetBeamEndLocation", result); }
	bool GetIsCharging() { return NativeCall<bool>(this, "UBeamWeaponComponent.GetIsCharging"); }
	bool GetIsFiring() { return NativeCall<bool>(this, "UBeamWeaponComponent.GetIsFiring"); }
	long double GetLastStoppedFiringTime() { return NativeCall<long double>(this, "UBeamWeaponComponent.GetLastStoppedFiringTime"); }
	void SetTarget(AActor * Target) { NativeCall<void, AActor *>(this, "UBeamWeaponComponent.SetTarget", Target); }
	void StartCharging_Implementation() { NativeCall<void>(this, "UBeamWeaponComponent.StartCharging_Implementation"); }
	void StartFiring_Implementation() { NativeCall<void>(this, "UBeamWeaponComponent.StartFiring_Implementation"); }
	void StopFiring_Implementation() { NativeCall<void>(this, "UBeamWeaponComponent.StopFiring_Implementation"); }
	void UpdateAim(float DeltaSeconds) { NativeCall<void, float>(this, "UBeamWeaponComponent.UpdateAim", DeltaSeconds); }
	void UpdateBeamEndAndDoDamage(float DeltaSeconds) { NativeCall<void, float>(this, "UBeamWeaponComponent.UpdateBeamEndAndDoDamage", DeltaSeconds); }
	void StartCharging() { NativeCall<void>(this, "UBeamWeaponComponent.StartCharging"); }
	void StartFiring() { NativeCall<void>(this, "UBeamWeaponComponent.StartFiring"); }
	void StopFiring() { NativeCall<void>(this, "UBeamWeaponComponent.StopFiring"); }
	void UpdateBeamVisuals() { NativeCall<void>(this, "UBeamWeaponComponent.UpdateBeamVisuals"); }
};

