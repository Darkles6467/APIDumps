#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventBPOverrideUseItemSlot_Parms
{
	char __padding[0x4L];
	int& ItemSlotField() { return *GetNativePointerField<int*>(this, "PrimalCharacter_eventBPOverrideUseItemSlot_Parms.ItemSlot"); }
};

