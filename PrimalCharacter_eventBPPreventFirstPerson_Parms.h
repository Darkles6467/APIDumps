#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventBPPreventFirstPerson_Parms
{
	char __padding[0x1L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalCharacter_eventBPPreventFirstPerson_Parms.ReturnValue"); }
};

