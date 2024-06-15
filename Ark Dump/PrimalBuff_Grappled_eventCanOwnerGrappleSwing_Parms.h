#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_Grappled_eventCanOwnerGrappleSwing_Parms
{
	char __padding[0x1L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalBuff_Grappled_eventCanOwnerGrappleSwing_Parms.ReturnValue"); }
};

