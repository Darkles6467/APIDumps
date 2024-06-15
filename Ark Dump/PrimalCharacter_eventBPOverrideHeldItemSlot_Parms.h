#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventBPOverrideHeldItemSlot_Parms
{
	char __padding[0x4L];
	int& ItemSlotField() { return *GetNativePointerField<int*>(this, "PrimalCharacter_eventBPOverrideHeldItemSlot_Parms.ItemSlot"); }
};

