#pragma once

#include "BaseDeclarations.h"
struct FTimelineEventEntry
{
	char __padding[0x14L];
	float& TimeField() { return *GetNativePointerField<float*>(this, "FTimelineEventEntry.Time"); }

	// Functions

};

