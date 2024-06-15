#pragma once

#include "BaseDeclarations.h"
struct FAITouchEvent
{
	char __padding[0x20L];
	FVector& LocationField() { return *GetNativePointerField<FVector*>(this, "FAITouchEvent.Location"); }

	// Functions

};

