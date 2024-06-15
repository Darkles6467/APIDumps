#pragma once

#include "BaseDeclarations.h"
struct PrimalStructure_eventBPNetRefreshStructureColors_Parms
{
	char __padding[0x1L];
	bool& bUseColorsField() { return *GetNativePointerField<bool*>(this, "PrimalStructure_eventBPNetRefreshStructureColors_Parms.bUseColors"); }
};

