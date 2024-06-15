#pragma once

#include "BaseDeclarations.h"
struct PrimalStructure_eventBPOnStructurePickup_Parms
{
	char __padding[0x20L];
	bool& bIsQuickPickupField() { return *GetNativePointerField<bool*>(this, "PrimalStructure_eventBPOnStructurePickup_Parms.bIsQuickPickup"); }
};

