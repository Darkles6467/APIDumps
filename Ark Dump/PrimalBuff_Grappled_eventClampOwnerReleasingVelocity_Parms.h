#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_Grappled_eventClampOwnerReleasingVelocity_Parms
{
	char __padding[0xcL];
	FVector& WithReleasingVelocityField() { return *GetNativePointerField<FVector*>(this, "PrimalBuff_Grappled_eventClampOwnerReleasingVelocity_Parms.WithReleasingVelocity"); }
};

