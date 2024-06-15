#pragma once

#include "BaseDeclarations.h"
#include "UMovementComponent.h"
#include "UActorComponent.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UProjectileMovementComponent : UMovementComponent
{
	char __padding[0x78L];
	float& MinLifespanToUpdateField() { return *GetNativePointerField<float*>(this, "UProjectileMovementComponent.MinLifespanToUpdate"); }
	float& InitialSpeedField() { return *GetNativePointerField<float*>(this, "UProjectileMovementComponent.InitialSpeed"); }
	float& MaxSpeedField() { return *GetNativePointerField<float*>(this, "UProjectileMovementComponent.MaxSpeed"); }
	float& ProjectileDampingFactorField() { return *GetNativePointerField<float*>(this, "UProjectileMovementComponent.ProjectileDampingFactor"); }
	float& FallingProjectileDampingFactorField() { return *GetNativePointerField<float*>(this, "UProjectileMovementComponent.FallingProjectileDampingFactor"); }
	float& ProjectileGravityScaleField() { return *GetNativePointerField<float*>(this, "UProjectileMovementComponent.ProjectileGravityScale"); }
	float& BuoyancyField() { return *GetNativePointerField<float*>(this, "UProjectileMovementComponent.Buoyancy"); }
	FVector& PreviousVelocityField() { return *GetNativePointerField<FVector*>(this, "UProjectileMovementComponent.PreviousVelocity"); }
	float& BouncinessField() { return *GetNativePointerField<float*>(this, "UProjectileMovementComponent.Bounciness"); }
	float& FrictionField() { return *GetNativePointerField<float*>(this, "UProjectileMovementComponent.Friction"); }
	float& BounceVelocityStopSimulatingThresholdField() { return *GetNativePointerField<float*>(this, "UProjectileMovementComponent.BounceVelocityStopSimulatingThreshold"); }
	float& HomingAccelerationMagnitudeField() { return *GetNativePointerField<float*>(this, "UProjectileMovementComponent.HomingAccelerationMagnitude"); }
	FVector& HomingTargetComponentOffsetField() { return *GetNativePointerField<FVector*>(this, "UProjectileMovementComponent.HomingTargetComponentOffset"); }
	float& MaxSimulationTimeStepField() { return *GetNativePointerField<float*>(this, "UProjectileMovementComponent.MaxSimulationTimeStep"); }
	int& MaxSimulationIterationsField() { return *GetNativePointerField<int*>(this, "UProjectileMovementComponent.MaxSimulationIterations"); }

	// Functions

	FVector * CalculateVelocity(FVector * result, FVector OldVelocity, float DeltaTime, bool bGravityEnabled) { return NativeCall<FVector *, FVector *, FVector, float, bool>(this, "UProjectileMovementComponent.CalculateVelocity", result, OldVelocity, DeltaTime, bGravityEnabled); }
	bool CheckStillInWorld() { return NativeCall<bool>(this, "UProjectileMovementComponent.CheckStillInWorld"); }
	FVector * ComputeAcceleration(FVector * result, const FVector * InVelocity, float DeltaTime, bool bGravityEnabled) { return NativeCall<FVector *, FVector *, const FVector *, float, bool>(this, "UProjectileMovementComponent.ComputeAcceleration", result, InVelocity, DeltaTime, bGravityEnabled); }
	FVector * ComputeBounceResult(FVector * result, const FHitResult * Hit, float TimeSlice, const FVector * MoveDelta) { return NativeCall<FVector *, FVector *, const FHitResult *, float, const FVector *>(this, "UProjectileMovementComponent.ComputeBounceResult", result, Hit, TimeSlice, MoveDelta); }
	FVector * ComputeHomingAcceleration(FVector * result, const FVector * InVelocity, float DeltaTime, bool bGravityEnabled) { return NativeCall<FVector *, FVector *, const FVector *, float, bool>(this, "UProjectileMovementComponent.ComputeHomingAcceleration", result, InVelocity, DeltaTime, bGravityEnabled); }
	FVector * ComputeMoveDelta(FVector * result, const FVector * InVelocity, float DeltaTime, bool bGravityEnabled) { return NativeCall<FVector *, FVector *, const FVector *, float, bool>(this, "UProjectileMovementComponent.ComputeMoveDelta", result, InVelocity, DeltaTime, bGravityEnabled); }
	FVector * GetHomingTargetPosition(FVector * result) { return NativeCall<FVector *, FVector *>(this, "UProjectileMovementComponent.GetHomingTargetPosition", result); }
	float GetMaxSpeed() { return NativeCall<float>(this, "UProjectileMovementComponent.GetMaxSpeed"); }
	void HandleImpact(const FHitResult * Hit, float TimeSlice, const FVector * MoveDelta) { NativeCall<void, const FHitResult *, float, const FVector *>(this, "UProjectileMovementComponent.HandleImpact", Hit, TimeSlice, MoveDelta); }
	void InitializeComponent() { NativeCall<void>(this, "UProjectileMovementComponent.InitializeComponent"); }
	FVector * LimitVelocity(FVector * result, FVector NewVelocity) { return NativeCall<FVector *, FVector *, FVector>(this, "UProjectileMovementComponent.LimitVelocity", result, NewVelocity); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UProjectileMovementComponent.Serialize", Ar); }
	void SetVelocityInLocalSpace(FVector NewVelocity) { NativeCall<void, FVector>(this, "UProjectileMovementComponent.SetVelocityInLocalSpace", NewVelocity); }
	bool ShouldUseSubStepping() { return NativeCall<bool>(this, "UProjectileMovementComponent.ShouldUseSubStepping"); }
	void StopSimulating(const FHitResult * HitResult) { NativeCall<void, const FHitResult *>(this, "UProjectileMovementComponent.StopSimulating", HitResult); }
};

