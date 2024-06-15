#pragma once

#include "BaseDeclarations.h"
struct PrimalRaft_eventBP_OverrideSwimmingAcceleration_Parms
{
	char __padding[0x10L];
	FVector& ModifyAccelerationField() { return *GetNativePointerField<FVector*>(this, "PrimalRaft_eventBP_OverrideSwimmingAcceleration_Parms.ModifyAcceleration"); }
	float& DeltaTimeField() { return *GetNativePointerField<float*>(this, "PrimalRaft_eventBP_OverrideSwimmingAcceleration_Parms.DeltaTime"); }
};

