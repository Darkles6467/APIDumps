#pragma once

#include "BaseDeclarations.h"
#include "AShooterProjectile.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct APrimalProjectileGrapplingHook : AShooterProjectile
{
	char __padding[0x40L];
	FVector& GrapHookEndPointOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalProjectileGrapplingHook.GrapHookEndPointOffset"); }
	float& MaximumRopeDistanceField() { return *GetNativePointerField<float*>(this, "APrimalProjectileGrapplingHook.MaximumRopeDistance"); }
	float& PullingStrengthField() { return *GetNativePointerField<float*>(this, "APrimalProjectileGrapplingHook.PullingStrength"); }
	float& ReleaseRopeSpeedField() { return *GetNativePointerField<float*>(this, "APrimalProjectileGrapplingHook.ReleaseRopeSpeed"); }
	float& MaxPullMassOverrideField() { return *GetNativePointerField<float*>(this, "APrimalProjectileGrapplingHook.MaxPullMassOverride"); }
	float& DetachGrapHookLifespanField() { return *GetNativePointerField<float*>(this, "APrimalProjectileGrapplingHook.DetachGrapHookLifespan"); }
	FVector& GrapHookDefaultOffsetField() { return *GetNativePointerField<FVector*>(this, "APrimalProjectileGrapplingHook.GrapHookDefaultOffset"); }
	float& GrapHookCableWidthOverrideField() { return *GetNativePointerField<float*>(this, "APrimalProjectileGrapplingHook.GrapHookCableWidthOverride"); }
	bool& bAllowPullSleepingField() { return *GetNativePointerField<bool*>(this, "APrimalProjectileGrapplingHook.bAllowPullSleeping"); }
	bool& bAllowPullFleeingField() { return *GetNativePointerField<bool*>(this, "APrimalProjectileGrapplingHook.bAllowPullFleeing"); }

	// Functions

	void AttachRootComponentTo(USceneComponent * InParent, FName InSocketName, EAttachLocation::Type AttachLocationType, bool bWeldSimulatedBodies) { NativeCall<void, USceneComponent *, FName, EAttachLocation::Type, bool>(this, "APrimalProjectileGrapplingHook.AttachRootComponentTo", InParent, InSocketName, AttachLocationType, bWeldSimulatedBodies); }
	void BeginPlay() { NativeCall<void>(this, "APrimalProjectileGrapplingHook.BeginPlay"); }
	FVector * GetGrapHookEndPoint(FVector * result) { return NativeCall<FVector *, FVector *>(this, "APrimalProjectileGrapplingHook.GetGrapHookEndPoint", result); }
	void Tick(float DeltaSeconds) { NativeCall<void, float>(this, "APrimalProjectileGrapplingHook.Tick", DeltaSeconds); }
};

