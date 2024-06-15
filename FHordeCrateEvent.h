#pragma once

#include "BaseDeclarations.h"
struct FHordeCrateEvent
{
	char __padding[0x20L];
	long double& EventStartTimeField() { return *GetNativePointerField<long double*>(this, "FHordeCrateEvent.EventStartTime"); }
	bool& bHasBeenInitiatedField() { return *GetNativePointerField<bool*>(this, "FHordeCrateEvent.bHasBeenInitiated"); }
	char& EventTypeField() { return *GetNativePointerField<char*>(this, "FHordeCrateEvent.EventType"); }

	// Functions

	FHordeCrateEvent * operator=(const FHordeCrateEvent * __that) { return NativeCall<FHordeCrateEvent *, const FHordeCrateEvent *>(this, "FHordeCrateEvent.operator=", __that); }
};

