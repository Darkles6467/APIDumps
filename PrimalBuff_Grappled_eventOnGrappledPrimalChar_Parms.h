#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_Grappled_eventOnGrappledPrimalChar_Parms
{
	char __padding[0x170L];
	FGrappleTether& WithMasterTetherField() { return *GetNativePointerField<FGrappleTether*>(this, "PrimalBuff_Grappled_eventOnGrappledPrimalChar_Parms.WithMasterTether"); }
};

