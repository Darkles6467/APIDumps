#pragma once

#include "BaseDeclarations.h"
struct FIniFilename
{
	char __padding[0x18L];
	FString& FilenameField() { return *GetNativePointerField<FString*>(this, "FIniFilename.Filename"); }
	bool& bRequiredField() { return *GetNativePointerField<bool*>(this, "FIniFilename.bRequired"); }
};

