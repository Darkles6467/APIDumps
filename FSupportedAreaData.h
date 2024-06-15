#pragma once

#include "BaseDeclarations.h"
struct FSupportedAreaData
{
	char __padding[0x20L];
	FString& AreaClassNameField() { return *GetNativePointerField<FString*>(this, "FSupportedAreaData.AreaClassName"); }
	int& AreaIDField() { return *GetNativePointerField<int*>(this, "FSupportedAreaData.AreaID"); }

	// Functions

};

