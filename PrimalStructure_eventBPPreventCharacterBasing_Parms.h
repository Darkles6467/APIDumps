#pragma once

#include "BaseDeclarations.h"
struct PrimalStructure_eventBPPreventCharacterBasing_Parms
{
	char __padding[0x18L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalStructure_eventBPPreventCharacterBasing_Parms.ReturnValue"); }
};

