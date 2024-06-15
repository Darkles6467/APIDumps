#pragma once

#include "BaseDeclarations.h"
struct FCameraCacheEntry
{
	char __padding[0x3a0L];
	float& TimeStampField() { return *GetNativePointerField<float*>(this, "FCameraCacheEntry.TimeStamp"); }
	FMinimalViewInfo& POVField() { return *GetNativePointerField<FMinimalViewInfo*>(this, "FCameraCacheEntry.POV"); }

	// Functions

};

