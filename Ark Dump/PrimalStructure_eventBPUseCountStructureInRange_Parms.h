#pragma once

#include "BaseDeclarations.h"
struct PrimalStructure_eventBPUseCountStructureInRange_Parms
{
	char __padding[0x1L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalStructure_eventBPUseCountStructureInRange_Parms.ReturnValue"); }
};

