#pragma once

#include "BaseDeclarations.h"
struct PrimalCharacter_eventBPOverrideReleaseItemSlot_Parms
{
	char __padding[0x4L];
	int& ItemSlotField() { return *GetNativePointerField<int*>(this, "PrimalCharacter_eventBPOverrideReleaseItemSlot_Parms.ItemSlot"); }
};

