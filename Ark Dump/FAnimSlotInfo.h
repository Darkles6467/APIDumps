#pragma once

#include "BaseDeclarations.h"
struct FAnimSlotInfo
{
	char __padding[0x18L];
	FName& SlotNameField() { return *GetNativePointerField<FName*>(this, "FAnimSlotInfo.SlotName"); }
	TArray<float>& ChannelWeightsField() { return *GetNativePointerField<TArray<float>*>(this, "FAnimSlotInfo.ChannelWeights"); }

	// Functions

};

