#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_Grappled_eventCanUpdateTetherLength_Parms
{
	char __padding[0x170L];
	FGrappleTether& ForTetherField() { return *GetNativePointerField<FGrappleTether*>(this, "PrimalBuff_Grappled_eventCanUpdateTetherLength_Parms.ForTether"); }
	float& WithLengthField() { return *GetNativePointerField<float*>(this, "PrimalBuff_Grappled_eventCanUpdateTetherLength_Parms.WithLength"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalBuff_Grappled_eventCanUpdateTetherLength_Parms.ReturnValue"); }

	// Functions

};

