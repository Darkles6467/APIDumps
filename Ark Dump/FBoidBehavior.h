#pragma once

#include "BaseDeclarations.h"
struct FBoidBehavior
{
	char __padding[0x40L];
	TArray<FAvoidanceArea>& AvoidanceAreasField() { return *GetNativePointerField<TArray<FAvoidanceArea>*>(this, "FBoidBehavior.AvoidanceAreas"); }
	float& DesiredSeparationField() { return *GetNativePointerField<float*>(this, "FBoidBehavior.DesiredSeparation"); }
	float& NeighborDistField() { return *GetNativePointerField<float*>(this, "FBoidBehavior.NeighborDist"); }
	float& SeparationMultiplierField() { return *GetNativePointerField<float*>(this, "FBoidBehavior.SeparationMultiplier"); }
	float& AlignmentMultiplierField() { return *GetNativePointerField<float*>(this, "FBoidBehavior.AlignmentMultiplier"); }
	float& CohesionMultiplierField() { return *GetNativePointerField<float*>(this, "FBoidBehavior.CohesionMultiplier"); }
	float& AvoidanceMultiplierField() { return *GetNativePointerField<float*>(this, "FBoidBehavior.AvoidanceMultiplier"); }
	float& TargetingMultiplierField() { return *GetNativePointerField<float*>(this, "FBoidBehavior.TargetingMultiplier"); }
	float& MaxDistanceToLeadersField() { return *GetNativePointerField<float*>(this, "FBoidBehavior.MaxDistanceToLeaders"); }
	float& MaxSpeedMultiplierField() { return *GetNativePointerField<float*>(this, "FBoidBehavior.MaxSpeedMultiplier"); }
	float& MaxForceMultiplierField() { return *GetNativePointerField<float*>(this, "FBoidBehavior.MaxForceMultiplier"); }
	bool& bUseBoundsCullingField() { return *GetNativePointerField<bool*>(this, "FBoidBehavior.bUseBoundsCulling"); }
	float& BoundsCullingMultiplierField() { return *GetNativePointerField<float*>(this, "FBoidBehavior.BoundsCullingMultiplier"); }

	// Functions

	FBoidBehavior * operator=(const FBoidBehavior * __that) { return NativeCall<FBoidBehavior *, const FBoidBehavior *>(this, "FBoidBehavior.operator=", __that); }
};

