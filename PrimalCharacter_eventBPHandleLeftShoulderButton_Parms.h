#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventBPHandleLeftShoulderButton_Parms
{
	char __padding[0x1L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalCharacter_eventBPHandleLeftShoulderButton_Parms.ReturnValue"); }
};

