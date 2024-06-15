#pragma once

#include "BaseDeclarations.h"
struct FEventTrackKey
{
	char __padding[0xcL];
	float& TimeField() { return *GetNativePointerField<float*>(this, "FEventTrackKey.Time"); }
	FName& EventNameField() { return *GetNativePointerField<FName*>(this, "FEventTrackKey.EventName"); }

	// Functions

};

