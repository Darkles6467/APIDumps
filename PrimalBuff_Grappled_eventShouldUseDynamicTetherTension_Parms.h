#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_Grappled_eventShouldUseDynamicTetherTension_Parms
{
	char __padding[0x170L];
	FGrappleTether& ForTetherField() { return *GetNativePointerField<FGrappleTether*>(this, "PrimalBuff_Grappled_eventShouldUseDynamicTetherTension_Parms.ForTether"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalBuff_Grappled_eventShouldUseDynamicTetherTension_Parms.ReturnValue"); }
};

