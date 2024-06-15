#pragma once

#include "BaseDeclarations.h"
struct FSlotAnimationTrack
{
	char __padding[0x18L];
	FName& SlotNameField() { return *GetNativePointerField<FName*>(this, "FSlotAnimationTrack.SlotName"); }
	FAnimTrack& AnimTrackField() { return *GetNativePointerField<FAnimTrack*>(this, "FSlotAnimationTrack.AnimTrack"); }

	// Functions

};

