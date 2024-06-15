#pragma once

#include "BaseDeclarations.h"
struct FWalkableSlopeOverride
{
	char __padding[0x8L];
	TEnumAsByte<enum EWalkableSlopeBehavior>& WalkableSlopeBehaviorField() { return *GetNativePointerField<TEnumAsByte<enum EWalkableSlopeBehavior>*>(this, "FWalkableSlopeOverride.WalkableSlopeBehavior"); }
	float& WalkableSlopeAngleField() { return *GetNativePointerField<float*>(this, "FWalkableSlopeOverride.WalkableSlopeAngle"); }

	// Functions

	float ModifyWalkableFloorZ(float InWalkableFloorZ) { return NativeCall<float, float>(this, "FWalkableSlopeOverride.ModifyWalkableFloorZ", InWalkableFloorZ); }
};

