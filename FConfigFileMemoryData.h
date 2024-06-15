#pragma once

#include "BaseDeclarations.h"
struct FConfigFileMemoryData
{
	char __padding[0x20L];
	FString& ConfigFilenameField() { return *GetNativePointerField<FString*>(this, "FConfigFileMemoryData.ConfigFilename"); }
	unsigned __int64& CurrentSizeField() { return *GetNativePointerField<unsigned __int64*>(this, "FConfigFileMemoryData.CurrentSize"); }
	unsigned __int64& MaxSizeField() { return *GetNativePointerField<unsigned __int64*>(this, "FConfigFileMemoryData.MaxSize"); }
};

