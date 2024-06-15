#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_Grappled_eventOnGrappleTetherRemoved_Parms
{
	char __padding[0x168L];
	FGrappleTether& RemovedTetherField() { return *GetNativePointerField<FGrappleTether*>(this, "PrimalBuff_Grappled_eventOnGrappleTetherRemoved_Parms.RemovedTether"); }
};

