#pragma once

#include "BaseDeclarations.h"
struct FMountedDLCMapInfo
{
	char __padding[0x20L];
	FString& IdField() { return *GetNativePointerField<FString*>(this, "FMountedDLCMapInfo.Id"); }
	FString& MapField() { return *GetNativePointerField<FString*>(this, "FMountedDLCMapInfo.Map"); }

	// Functions

};

