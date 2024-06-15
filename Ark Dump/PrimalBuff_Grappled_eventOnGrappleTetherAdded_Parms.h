#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_Grappled_eventOnGrappleTetherAdded_Parms
{
	char __padding[0x168L];
	FGrappleTether& AddedTetherField() { return *GetNativePointerField<FGrappleTether*>(this, "PrimalBuff_Grappled_eventOnGrappleTetherAdded_Parms.AddedTether"); }
};

