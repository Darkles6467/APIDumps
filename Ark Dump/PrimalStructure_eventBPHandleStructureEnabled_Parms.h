#pragma once

#include "BaseDeclarations.h"
struct PrimalStructure_eventBPHandleStructureEnabled_Parms
{
	char __padding[0x1L];
	bool& bEnabledField() { return *GetNativePointerField<bool*>(this, "PrimalStructure_eventBPHandleStructureEnabled_Parms.bEnabled"); }
};

