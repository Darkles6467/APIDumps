#pragma once

#include "BaseDeclarations.h"
struct FNavAvoidanceData
{
	char __padding[0x38L];
	FVector& CenterField() { return *GetNativePointerField<FVector*>(this, "FNavAvoidanceData.Center"); }
	FVector& VelocityField() { return *GetNativePointerField<FVector*>(this, "FNavAvoidanceData.Velocity"); }
	float& RemainingTimeToLiveField() { return *GetNativePointerField<float*>(this, "FNavAvoidanceData.RemainingTimeToLive"); }
	float& RadiusField() { return *GetNativePointerField<float*>(this, "FNavAvoidanceData.Radius"); }
	float& HeightField() { return *GetNativePointerField<float*>(this, "FNavAvoidanceData.Height"); }
	float& WeightField() { return *GetNativePointerField<float*>(this, "FNavAvoidanceData.Weight"); }
	float& OverrideWeightTimeField() { return *GetNativePointerField<float*>(this, "FNavAvoidanceData.OverrideWeightTime"); }
	int& GroupMaskField() { return *GetNativePointerField<int*>(this, "FNavAvoidanceData.GroupMask"); }
	int& GroupsToAvoidField() { return *GetNativePointerField<int*>(this, "FNavAvoidanceData.GroupsToAvoid"); }
	int& GroupsToIgnoreField() { return *GetNativePointerField<int*>(this, "FNavAvoidanceData.GroupsToIgnore"); }

	// Functions

};

