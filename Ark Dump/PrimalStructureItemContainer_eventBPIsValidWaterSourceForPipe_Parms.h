#pragma once

#include "BaseDeclarations.h"
struct PrimalStructureItemContainer_eventBPIsValidWaterSourceForPipe_Parms
{
	char __padding[0x10L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalStructureItemContainer_eventBPIsValidWaterSourceForPipe_Parms.ReturnValue"); }
};

