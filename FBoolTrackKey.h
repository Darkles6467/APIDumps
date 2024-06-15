#pragma once

#include "BaseDeclarations.h"
struct FBoolTrackKey
{
	char __padding[0x8L];
	float& TimeField() { return *GetNativePointerField<float*>(this, "FBoolTrackKey.Time"); }

	// Functions

};

