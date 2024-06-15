#pragma once

#include "BaseDeclarations.h"
struct FGameIniData
{
	char __padding[0x20L];
	FString& PropertyNameField() { return *GetNativePointerField<FString*>(this, "FGameIniData.PropertyName"); }
	FString& PropertyValueField() { return *GetNativePointerField<FString*>(this, "FGameIniData.PropertyValue"); }

	// Functions

	FGameIniData * operator=(const FGameIniData * __that) { return NativeCall<FGameIniData *, const FGameIniData *>(this, "FGameIniData.operator=", __that); }
};

