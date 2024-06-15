#pragma once

#include "BaseDeclarations.h"
struct FCameraCutInfo
{
	char __padding[0x10L];
	FVector& LocationField() { return *GetNativePointerField<FVector*>(this, "FCameraCutInfo.Location"); }
	float& TimeStampField() { return *GetNativePointerField<float*>(this, "FCameraCutInfo.TimeStamp"); }

	// Functions

};

