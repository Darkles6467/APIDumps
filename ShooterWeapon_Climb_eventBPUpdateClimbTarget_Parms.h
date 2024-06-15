#pragma once

#include "BaseDeclarations.h"
struct ShooterWeapon_Climb_eventBPUpdateClimbTarget_Parms
{
	char __padding[0x40L];
	float& DeltaSecondsField() { return *GetNativePointerField<float*>(this, "ShooterWeapon_Climb_eventBPUpdateClimbTarget_Parms.DeltaSeconds"); }
	bool& bClimbingField() { return *GetNativePointerField<bool*>(this, "ShooterWeapon_Climb_eventBPUpdateClimbTarget_Parms.bClimbing"); }
	FVector& AnchorPositionField() { return *GetNativePointerField<FVector*>(this, "ShooterWeapon_Climb_eventBPUpdateClimbTarget_Parms.AnchorPosition"); }
	FVector& AnchorNormalField() { return *GetNativePointerField<FVector*>(this, "ShooterWeapon_Climb_eventBPUpdateClimbTarget_Parms.AnchorNormal"); }
	bool& bCanClimbField() { return *GetNativePointerField<bool*>(this, "ShooterWeapon_Climb_eventBPUpdateClimbTarget_Parms.bCanClimb"); }
	bool& bCanLandField() { return *GetNativePointerField<bool*>(this, "ShooterWeapon_Climb_eventBPUpdateClimbTarget_Parms.bCanLand"); }
	FVector& ClimbLocationField() { return *GetNativePointerField<FVector*>(this, "ShooterWeapon_Climb_eventBPUpdateClimbTarget_Parms.ClimbLocation"); }
	FVector& ClimbNormalField() { return *GetNativePointerField<FVector*>(this, "ShooterWeapon_Climb_eventBPUpdateClimbTarget_Parms.ClimbNormal"); }
	bool& bHudVisibleField() { return *GetNativePointerField<bool*>(this, "ShooterWeapon_Climb_eventBPUpdateClimbTarget_Parms.bHudVisible"); }
};

