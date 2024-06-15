#pragma once

#include "BaseDeclarations.h"
struct FAnimSlotDesc
{
	char __padding[0xcL];
	FName& SlotNameField() { return *GetNativePointerField<FName*>(this, "FAnimSlotDesc.SlotName"); }
	int& NumChannelsField() { return *GetNativePointerField<int*>(this, "FAnimSlotDesc.NumChannels"); }

	// Functions

};

