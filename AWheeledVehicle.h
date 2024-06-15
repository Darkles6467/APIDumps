#pragma once

#include "BaseDeclarations.h"
#include "APawn.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct AWheeledVehicle : APawn
{
	char __padding[0x10L];

	// Functions

	void DisplayDebug(UCanvas * Canvas, const FDebugDisplayInfo * DebugDisplay, float * YL, float * YPos) { NativeCall<void, UCanvas *, const FDebugDisplayInfo *, float *, float *>(this, "AWheeledVehicle.DisplayDebug", Canvas, DebugDisplay, YL, YPos); }
};

