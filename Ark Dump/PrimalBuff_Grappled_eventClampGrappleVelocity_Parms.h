#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_Grappled_eventClampGrappleVelocity_Parms
{
	char __padding[0xcL];
	FVector& ClampVelocityField() { return *GetNativePointerField<FVector*>(this, "PrimalBuff_Grappled_eventClampGrappleVelocity_Parms.ClampVelocity"); }
};

