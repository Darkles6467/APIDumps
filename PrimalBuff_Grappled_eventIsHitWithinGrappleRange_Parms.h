#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_Grappled_eventIsHitWithinGrappleRange_Parms
{
	char __padding[0x90L];
	FHitResult& ForHitField() { return *GetNativePointerField<FHitResult*>(this, "PrimalBuff_Grappled_eventIsHitWithinGrappleRange_Parms.ForHit"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalBuff_Grappled_eventIsHitWithinGrappleRange_Parms.ReturnValue"); }
};

