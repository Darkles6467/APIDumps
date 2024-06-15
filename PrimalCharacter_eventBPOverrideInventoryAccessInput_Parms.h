#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventBPOverrideInventoryAccessInput_Parms
{
	char __padding[0x1L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalCharacter_eventBPOverrideInventoryAccessInput_Parms.ReturnValue"); }
};

