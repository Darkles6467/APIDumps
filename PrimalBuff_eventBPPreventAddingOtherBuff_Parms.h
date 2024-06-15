#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventBPPreventAddingOtherBuff_Parms
{
	char __padding[0x10L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalBuff_eventBPPreventAddingOtherBuff_Parms.ReturnValue"); }

	// Functions

};

