#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_Grappled_eventApplyTetherMoveVelocity_Parms
{
	char __padding[0x10L];
	FVector& CurrentVelocityField() { return *GetNativePointerField<FVector*>(this, "PrimalBuff_Grappled_eventApplyTetherMoveVelocity_Parms.CurrentVelocity"); }
	float& DeltaTimeField() { return *GetNativePointerField<float*>(this, "PrimalBuff_Grappled_eventApplyTetherMoveVelocity_Parms.DeltaTime"); }
};

