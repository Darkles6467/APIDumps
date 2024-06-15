#pragma once

#include "BaseDeclarations.h"
struct FDirectoryPath
{
	char __padding[0x10L];
	FString& PathField() { return *GetNativePointerField<FString*>(this, "FDirectoryPath.Path"); }

	// Functions

};

