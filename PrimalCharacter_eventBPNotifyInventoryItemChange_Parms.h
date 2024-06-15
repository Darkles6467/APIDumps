#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventBPNotifyInventoryItemChange_Parms
{
	char __padding[0x18L];
	bool& bIsItemAddField() { return *GetNativePointerField<bool*>(this, "PrimalCharacter_eventBPNotifyInventoryItemChange_Parms.bIsItemAdd"); }
	bool& bEquipItemField() { return *GetNativePointerField<bool*>(this, "PrimalCharacter_eventBPNotifyInventoryItemChange_Parms.bEquipItem"); }
};

