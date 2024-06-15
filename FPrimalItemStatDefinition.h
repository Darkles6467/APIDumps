#pragma once

#include "BaseDeclarations.h"
struct FPrimalItemStatDefinition
{
	char __padding[0x18L];
	FString& ItemStatNameField() { return *GetNativePointerField<FString*>(this, "FPrimalItemStatDefinition.ItemStatName"); }

	// Functions

	FPrimalItemStatDefinition * operator=(const FPrimalItemStatDefinition * __that) { return NativeCall<FPrimalItemStatDefinition *, const FPrimalItemStatDefinition *>(this, "FPrimalItemStatDefinition.operator=", __that); }
};

