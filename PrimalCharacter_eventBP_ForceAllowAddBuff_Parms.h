#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventBP_ForceAllowAddBuff_Parms
{
	char __padding[0x10L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalCharacter_eventBP_ForceAllowAddBuff_Parms.ReturnValue"); }
};

