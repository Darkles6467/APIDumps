#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_Grappled_eventSimulateTetherFriction_Parms
{
	char __padding[0x10L];
	FVector& WithCharVelocityField() { return *GetNativePointerField<FVector*>(this, "PrimalBuff_Grappled_eventSimulateTetherFriction_Parms.WithCharVelocity"); }
	float& DeltaTimeField() { return *GetNativePointerField<float*>(this, "PrimalBuff_Grappled_eventSimulateTetherFriction_Parms.DeltaTime"); }
};

