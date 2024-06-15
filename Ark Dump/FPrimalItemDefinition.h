#pragma once

#include "BaseDeclarations.h"
struct FPrimalItemDefinition
{
	char __padding[0x18L];
	FString& ItemTypeNameField() { return *GetNativePointerField<FString*>(this, "FPrimalItemDefinition.ItemTypeName"); }

	// Functions

};

