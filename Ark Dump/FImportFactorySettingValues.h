#pragma once

#include "BaseDeclarations.h"
struct FImportFactorySettingValues
{
	char __padding[0x20L];
	FString& SettingNameField() { return *GetNativePointerField<FString*>(this, "FImportFactorySettingValues.SettingName"); }
	FString& ValueField() { return *GetNativePointerField<FString*>(this, "FImportFactorySettingValues.Value"); }

	// Functions

};

