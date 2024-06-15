#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_Grappled_eventGetTetherBreakLimit_OwnerPastCurrentLengthForTime_Parms
{
	char __padding[0x170L];
	FGrappleTether& ForTetherField() { return *GetNativePointerField<FGrappleTether*>(this, "PrimalBuff_Grappled_eventGetTetherBreakLimit_OwnerPastCurrentLengthForTime_Parms.ForTether"); }
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "PrimalBuff_Grappled_eventGetTetherBreakLimit_OwnerPastCurrentLengthForTime_Parms.ReturnValue"); }
};

