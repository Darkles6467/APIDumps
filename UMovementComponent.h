#pragma once

#include "BaseDeclarations.h"
#include "UActorComponent.h"

struct UMovementComponent : UActorComponent
{
	char __padding[0x40L];
	EMoveComponentFlags& MoveComponentFlagsField() { return *GetNativePointerField<EMoveComponentFlags*>(this, "UMovementComponent.MoveComponentFlags"); }
	FVector& VelocityField() { return *GetNativePointerField<FVector*>(this, "UMovementComponent.Velocity"); }
	FVector& PlaneConstraintNormalField() { return *GetNativePointerField<FVector*>(this, "UMovementComponent.PlaneConstraintNormal"); }
	FVector& PlaneConstraintOriginField() { return *GetNativePointerField<FVector*>(this, "UMovementComponent.PlaneConstraintOrigin"); }
	int& TickingModulusField() { return *GetNativePointerField<int*>(this, "UMovementComponent.TickingModulus"); }
	int& LowQualityTickingModulusField() { return *GetNativePointerField<int*>(this, "UMovementComponent.LowQualityTickingModulus"); }

	// Functions

	bool SkipUpdate(float DeltaTime) { return NativeCall<bool, float>(this, "UMovementComponent.SkipUpdate", DeltaTime); }
	void StopMovementImmediately() { NativeCall<void>(this, "UMovementComponent.StopMovementImmediately"); }
	bool ShouldForceDedicatedTickEveryFrame() { return NativeCall<bool>(this, "UMovementComponent.ShouldForceDedicatedTickEveryFrame"); }
	FVector * ComputeSlideVector(FVector * result, const FVector * Delta, const float Time, const FVector * Normal, const FHitResult * Hit) { return NativeCall<FVector *, FVector *, const FVector *, const float, const FVector *, const FHitResult *>(this, "UMovementComponent.ComputeSlideVector", result, Delta, Time, Normal, Hit); }
	FVector * ConstrainDirectionToPlane(FVector * result, FVector Direction) { return NativeCall<FVector *, FVector *, FVector>(this, "UMovementComponent.ConstrainDirectionToPlane", result, Direction); }
	FVector * ConstrainLocationToPlane(FVector * result, FVector Location) { return NativeCall<FVector *, FVector *, FVector>(this, "UMovementComponent.ConstrainLocationToPlane", result, Location); }
	float GetGravityZ() { return NativeCall<float>(this, "UMovementComponent.GetGravityZ"); }
	float GetModifiedMaxSpeed() { return NativeCall<float>(this, "UMovementComponent.GetModifiedMaxSpeed"); }
	FVector * GetPenetrationAdjustment(FVector * result, const FHitResult * Hit) { return NativeCall<FVector *, FVector *, const FHitResult *>(this, "UMovementComponent.GetPenetrationAdjustment", result, Hit); }
	const FVector * GetPlaneConstraintNormal() { return NativeCall<const FVector *>(this, "UMovementComponent.GetPlaneConstraintNormal"); }
	const FVector * GetPlaneConstraintOrigin() { return NativeCall<const FVector *>(this, "UMovementComponent.GetPlaneConstraintOrigin"); }
	void InitCollisionParams(FCollisionQueryParams * OutParams, FCollisionResponseParams * OutResponseParam) { NativeCall<void, FCollisionQueryParams *, FCollisionResponseParams *>(this, "UMovementComponent.InitCollisionParams", OutParams, OutResponseParam); }
	void InitializeComponent() { NativeCall<void>(this, "UMovementComponent.InitializeComponent"); }
	bool IsExceedingMaxSpeed(float MaxSpeed) { return NativeCall<bool, float>(this, "UMovementComponent.IsExceedingMaxSpeed", MaxSpeed); }
	bool IsInWater() { return NativeCall<bool>(this, "UMovementComponent.IsInWater"); }
	float K2_GetMaxSpeedModifier() { return NativeCall<float>(this, "UMovementComponent.K2_GetMaxSpeedModifier"); }
	float K2_GetModifiedMaxSpeed() { return NativeCall<float>(this, "UMovementComponent.K2_GetModifiedMaxSpeed"); }
	bool K2_MoveUpdatedComponent(FVector Delta, FRotator NewRotation, FHitResult * OutHit, bool bSweep) { return NativeCall<bool, FVector, FRotator, FHitResult *, bool>(this, "UMovementComponent.K2_MoveUpdatedComponent", Delta, NewRotation, OutHit, bSweep); }
	bool MoveUpdatedComponentImpl(const FVector * Delta, const FQuat * NewRotation, bool bSweep, FHitResult * OutHit) { return NativeCall<bool, const FVector *, const FQuat *, bool, FHitResult *>(this, "UMovementComponent.MoveUpdatedComponentImpl", Delta, NewRotation, bSweep, OutHit); }
	void OnRegister() { NativeCall<void>(this, "UMovementComponent.OnRegister"); }
	bool OverlapTest(const FVector * Location, const FQuat * RotationQuat, const ECollisionChannel CollisionChannel, const FCollisionShape * CollisionShape, AActor * IgnoreActor) { return NativeCall<bool, const FVector *, const FQuat *, const ECollisionChannel, const FCollisionShape *, AActor *>(this, "UMovementComponent.OverlapTest", Location, RotationQuat, CollisionChannel, CollisionShape, IgnoreActor); }
	bool ResolvePenetrationImpl(const FVector * ProposedAdjustment, const FHitResult * Hit, const FQuat * NewRotationQuat) { return NativeCall<bool, const FVector *, const FHitResult *, const FQuat *>(this, "UMovementComponent.ResolvePenetrationImpl", ProposedAdjustment, Hit, NewRotationQuat); }
	bool SafeMoveUpdatedComponent(const FVector * Delta, const FQuat * NewRotation, bool bSweep, FHitResult * OutHit) { return NativeCall<bool, const FVector *, const FQuat *, bool, FHitResult *>(this, "UMovementComponent.SafeMoveUpdatedComponent", Delta, NewRotation, bSweep, OutHit); }
	void SetPlaneConstraintFromVectors(FVector Forward, FVector Up) { NativeCall<void, FVector, FVector>(this, "UMovementComponent.SetPlaneConstraintFromVectors", Forward, Up); }
	void SetPlaneConstraintNormal(FVector PlaneNormal) { NativeCall<void, FVector>(this, "UMovementComponent.SetPlaneConstraintNormal", PlaneNormal); }
	void SetPlaneConstraintOrigin(FVector PlaneOrigin) { NativeCall<void, FVector>(this, "UMovementComponent.SetPlaneConstraintOrigin", PlaneOrigin); }
	void SetUpdatedComponent(UPrimitiveComponent * NewUpdatedComponent) { NativeCall<void, UPrimitiveComponent *>(this, "UMovementComponent.SetUpdatedComponent", NewUpdatedComponent); }
	bool ShouldSkipUpdate(float DeltaTime) { return NativeCall<bool, float>(this, "UMovementComponent.ShouldSkipUpdate", DeltaTime); }
	float SlideAlongSurface(const FVector * Delta, float Time, const FVector * Normal, FHitResult * Hit, bool bHandleImpact) { return NativeCall<float, const FVector *, float, const FVector *, FHitResult *, bool>(this, "UMovementComponent.SlideAlongSurface", Delta, Time, Normal, Hit, bHandleImpact); }
	void SnapUpdatedComponentToPlane() { NativeCall<void>(this, "UMovementComponent.SnapUpdatedComponentToPlane"); }
	void TwoWallAdjust(FVector * OutDelta, const FHitResult * Hit, const FVector * OldHitNormal) { NativeCall<void, FVector *, const FHitResult *, const FVector *>(this, "UMovementComponent.TwoWallAdjust", OutDelta, Hit, OldHitNormal); }
	void UpdateComponentVelocity() { NativeCall<void>(this, "UMovementComponent.UpdateComponentVelocity"); }
	void UpdateTickRegistration() { NativeCall<void>(this, "UMovementComponent.UpdateTickRegistration"); }
};

