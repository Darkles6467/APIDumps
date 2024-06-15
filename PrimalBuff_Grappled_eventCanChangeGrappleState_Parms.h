#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_Grappled_eventCanChangeGrappleState_Parms
{
	char __padding[0x2L];
	char& DesiredGrappleStateField() { return *GetNativePointerField<char*>(this, "PrimalBuff_Grappled_eventCanChangeGrappleState_Parms.DesiredGrappleState"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalBuff_Grappled_eventCanChangeGrappleState_Parms.ReturnValue"); }
};

