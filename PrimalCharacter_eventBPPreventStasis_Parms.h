#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventBPPreventStasis_Parms
{
	char __padding[0x1L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalCharacter_eventBPPreventStasis_Parms.ReturnValue"); }
};

