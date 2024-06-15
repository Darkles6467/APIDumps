#pragma once

#include "BaseDeclarations.h"
struct FRunInfo
{
	char __padding[0x60L];
	FString& NameField() { return *GetNativePointerField<FString*>(this, "FRunInfo.Name"); }

	// Functions

};

