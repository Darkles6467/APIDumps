#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_Grappled_eventBP_InterceptGrappleLogic_Parms
{
	char __padding[0x10L];
	FVector& CharVelocityField() { return *GetNativePointerField<FVector*>(this, "PrimalBuff_Grappled_eventBP_InterceptGrappleLogic_Parms.CharVelocity"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalBuff_Grappled_eventBP_InterceptGrappleLogic_Parms.ReturnValue"); }
};

