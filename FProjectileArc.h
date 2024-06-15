#pragma once

#include "BaseDeclarations.h"
struct FProjectileArc
{
	char __padding[0x30L];
	FVector& StartLocationField() { return *GetNativePointerField<FVector*>(this, "FProjectileArc.StartLocation"); }
	FVector& StartDirectionField() { return *GetNativePointerField<FVector*>(this, "FProjectileArc.StartDirection"); }
	float& LaunchSpeedField() { return *GetNativePointerField<float*>(this, "FProjectileArc.LaunchSpeed"); }
	FRotator& WorldRotationField() { return *GetNativePointerField<FRotator*>(this, "FProjectileArc.WorldRotation"); }
	bool& bApplyRotationToGravityDirectionField() { return *GetNativePointerField<bool*>(this, "FProjectileArc.bApplyRotationToGravityDirection"); }
	float& OverrideGravityZField() { return *GetNativePointerField<float*>(this, "FProjectileArc.OverrideGravityZ"); }

	// Functions

	FVector * GetGravityVector(FVector * result, UObject * WorldContextObject) { return NativeCall<FVector *, FVector *, UObject *>(this, "FProjectileArc.GetGravityVector", result, WorldContextObject); }
	float GetGravityZ(UObject * WorldContextObject) { return NativeCall<float, UObject *>(this, "FProjectileArc.GetGravityZ", WorldContextObject); }
	FVector * GetStartDirection(FVector * result) { return NativeCall<FVector *, FVector *>(this, "FProjectileArc.GetStartDirection", result); }
};

