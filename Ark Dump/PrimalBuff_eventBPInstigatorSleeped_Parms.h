#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventBPInstigatorSleeped_Parms
{
	char __padding[0x1L];
	bool& bIsSleepedField() { return *GetNativePointerField<bool*>(this, "PrimalBuff_eventBPInstigatorSleeped_Parms.bIsSleeped"); }
};

