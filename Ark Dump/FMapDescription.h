#pragma once

#include "BaseDeclarations.h"
struct FMapDescription
{
	char __padding[0x20L];
	FString& MapDescriptionField() { return *GetNativePointerField<FString*>(this, "FMapDescription.MapDescription"); }
	int& MinAscensionLevelRequiredField() { return *GetNativePointerField<int*>(this, "FMapDescription.MinAscensionLevelRequired"); }

	// Functions

	FMapDescription * operator=(const FMapDescription * __that) { return NativeCall<FMapDescription *, const FMapDescription *>(this, "FMapDescription.operator=", __that); }
};

