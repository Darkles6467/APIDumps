#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_Grappled_eventModifyOverriddenCharVelocity_Parms
{
	char __padding[0x10L];
	FVector& CurrentCharVelocityField() { return *GetNativePointerField<FVector*>(this, "PrimalBuff_Grappled_eventModifyOverriddenCharVelocity_Parms.CurrentCharVelocity"); }
	float& DeltaTimeField() { return *GetNativePointerField<float*>(this, "PrimalBuff_Grappled_eventModifyOverriddenCharVelocity_Parms.DeltaTime"); }
};

