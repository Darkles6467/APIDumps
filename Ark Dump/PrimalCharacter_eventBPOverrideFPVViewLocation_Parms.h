#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventBPOverrideFPVViewLocation_Parms
{
	char __padding[0x10L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalCharacter_eventBPOverrideFPVViewLocation_Parms.ReturnValue"); }
};

