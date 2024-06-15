#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_Grappled_eventShouldTetherBreak_Parms
{
	char __padding[0x178L];
	FGrappleTether& ForTetherField() { return *GetNativePointerField<FGrappleTether*>(this, "PrimalBuff_Grappled_eventShouldTetherBreak_Parms.ForTether"); }
	float& OverrideBreakPastDistField() { return *GetNativePointerField<float*>(this, "PrimalBuff_Grappled_eventShouldTetherBreak_Parms.OverrideBreakPastDist"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalBuff_Grappled_eventShouldTetherBreak_Parms.ReturnValue"); }

	// Functions

};

