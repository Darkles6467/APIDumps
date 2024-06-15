#pragma once

#include "BaseDeclarations.h"
struct PrimalItem_eventBPCanUse_Parms
{
	char __padding[0x2L];
	bool& bIgnoreCooldownField() { return *GetNativePointerField<bool*>(this, "PrimalItem_eventBPCanUse_Parms.bIgnoreCooldown"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalItem_eventBPCanUse_Parms.ReturnValue"); }
};

