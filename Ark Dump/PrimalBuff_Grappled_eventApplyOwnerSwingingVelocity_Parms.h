#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_Grappled_eventApplyOwnerSwingingVelocity_Parms
{
	char __padding[0x10L];
	FVector& CurrentVelocityField() { return *GetNativePointerField<FVector*>(this, "PrimalBuff_Grappled_eventApplyOwnerSwingingVelocity_Parms.CurrentVelocity"); }
	float& DeltaTimeField() { return *GetNativePointerField<float*>(this, "PrimalBuff_Grappled_eventApplyOwnerSwingingVelocity_Parms.DeltaTime"); }
};

