#pragma once

#include "BaseDeclarations.h"
struct PrimalInventoryComponent_eventBPNotifyItemAdded_Parms
{
	char __padding[0x10L];
	bool& bEquipItemField() { return *GetNativePointerField<bool*>(this, "PrimalInventoryComponent_eventBPNotifyItemAdded_Parms.bEquipItem"); }
};

