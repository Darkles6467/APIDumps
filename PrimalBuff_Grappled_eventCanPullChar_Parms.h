#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_Grappled_eventCanPullChar_Parms
{
	char __padding[0x10L];
	bool& bForStartField() { return *GetNativePointerField<bool*>(this, "PrimalBuff_Grappled_eventCanPullChar_Parms.bForStart"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalBuff_Grappled_eventCanPullChar_Parms.ReturnValue"); }
};

