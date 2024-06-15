#pragma once

#include "BaseDeclarations.h"
struct FClassNameReplacement
{
	char __padding[0x20L];
	FString& FromClassNameField() { return *GetNativePointerField<FString*>(this, "FClassNameReplacement.FromClassName"); }
	FString& ToClassNameField() { return *GetNativePointerField<FString*>(this, "FClassNameReplacement.ToClassName"); }

	// Functions

};

