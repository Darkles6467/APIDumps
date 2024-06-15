#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_Grappled_eventSimulateTautTetherForces_Parms
{
	char __padding[0x14L];
	FVector& WithCharVelocityField() { return *GetNativePointerField<FVector*>(this, "PrimalBuff_Grappled_eventSimulateTautTetherForces_Parms.WithCharVelocity"); }
	float& DeltaTimeField() { return *GetNativePointerField<float*>(this, "PrimalBuff_Grappled_eventSimulateTautTetherForces_Parms.DeltaTime"); }
	float& LastGravityZField() { return *GetNativePointerField<float*>(this, "PrimalBuff_Grappled_eventSimulateTautTetherForces_Parms.LastGravityZ"); }
};

