#pragma once

#include "BaseDeclarations.h"
struct PrimalStructure_eventBPAllowSnappingWith_Parms
{
	char __padding[0x18L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalStructure_eventBPAllowSnappingWith_Parms.ReturnValue"); }
};

