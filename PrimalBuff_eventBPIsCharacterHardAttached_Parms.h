#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventBPIsCharacterHardAttached_Parms
{
	char __padding[0x1L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalBuff_eventBPIsCharacterHardAttached_Parms.ReturnValue"); }
};

