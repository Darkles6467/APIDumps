#pragma once

#include "BaseDeclarations.h"
struct PrimalInventoryComponent_eventBPPreventEquipItem_Parms
{
	char __padding[0x10L];
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalInventoryComponent_eventBPPreventEquipItem_Parms.ReturnValue"); }
};

