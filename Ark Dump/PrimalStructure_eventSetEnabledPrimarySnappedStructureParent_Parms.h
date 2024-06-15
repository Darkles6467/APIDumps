#pragma once

#include "BaseDeclarations.h"
struct PrimalStructure_eventSetEnabledPrimarySnappedStructureParent_Parms
{
	char __padding[0x1L];
	bool& bEnabledField() { return *GetNativePointerField<bool*>(this, "PrimalStructure_eventSetEnabledPrimarySnappedStructureParent_Parms.bEnabled"); }
};

