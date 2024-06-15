#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_Grappled_eventCheckForAutoBreakTether_Parms
{
	char __padding[0x170L];
	FGrappleTether& CheckTetherField() { return *GetNativePointerField<FGrappleTether*>(this, "PrimalBuff_Grappled_eventCheckForAutoBreakTether_Parms.CheckTether"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalBuff_Grappled_eventCheckForAutoBreakTether_Parms.ReturnValue"); }
};

