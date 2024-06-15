#pragma once

#include "BaseDeclarations.h"
struct FAnimSlotGroup
{
	char __padding[0x18L];
	FName& GroupNameField() { return *GetNativePointerField<FName*>(this, "FAnimSlotGroup.GroupName"); }
	TArray<FName>& SlotNamesField() { return *GetNativePointerField<TArray<FName>*>(this, "FAnimSlotGroup.SlotNames"); }

	// Functions

};

