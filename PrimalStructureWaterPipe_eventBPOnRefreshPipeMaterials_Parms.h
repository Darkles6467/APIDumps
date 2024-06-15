#pragma once

#include "BaseDeclarations.h"
struct PrimalStructureWaterPipe_eventBPOnRefreshPipeMaterials_Parms
{
	char __padding[0x10L];
	bool& bPipeHasWaterOrPowerField() { return *GetNativePointerField<bool*>(this, "PrimalStructureWaterPipe_eventBPOnRefreshPipeMaterials_Parms.bPipeHasWaterOrPower"); }
};

