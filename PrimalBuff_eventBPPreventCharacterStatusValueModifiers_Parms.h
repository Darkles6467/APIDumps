#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventBPPreventCharacterStatusValueModifiers_Parms
{
	char __padding[0x10L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalBuff_eventBPPreventCharacterStatusValueModifiers_Parms.ReturnValue"); }
};

