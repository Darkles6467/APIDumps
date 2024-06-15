#pragma once

#include "BaseDeclarations.h"
struct PrimalStructureWaterPipe_eventBPOnWaterStateChange_Parms
{
	char __padding[0x1L];
	bool& bPipeHasWaterOrPowerField() { return *GetNativePointerField<bool*>(this, "PrimalStructureWaterPipe_eventBPOnWaterStateChange_Parms.bPipeHasWaterOrPower"); }
};

