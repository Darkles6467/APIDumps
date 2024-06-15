#pragma once

#include "BaseDeclarations.h"
struct FFilePath
{
	char __padding[0x10L];
	FString& FilePathField() { return *GetNativePointerField<FString*>(this, "FFilePath.FilePath"); }

	// Functions

};

