#pragma once

#include "BaseDeclarations.h"
struct FModuleStatus
{
	char __padding[0x28L];
	FString& NameField() { return *GetNativePointerField<FString*>(this, "FModuleStatus.Name"); }
	FString& FilePathField() { return *GetNativePointerField<FString*>(this, "FModuleStatus.FilePath"); }
	bool& bIsLoadedField() { return *GetNativePointerField<bool*>(this, "FModuleStatus.bIsLoaded"); }
	bool& bIsGameModuleField() { return *GetNativePointerField<bool*>(this, "FModuleStatus.bIsGameModule"); }
};

