#pragma once

#include "BaseDeclarations.h"
struct FAvailableMission
{
	char __padding[0x18L];
	FVector& DispatcherLocationField() { return *GetNativePointerField<FVector*>(this, "FAvailableMission.DispatcherLocation"); }

	// Functions

};

