#pragma once

#include "BaseDeclarations.h"
struct FAxisKeyDetails
{
	char __padding[0x18L];
	TArray<FInputAxisKeyMapping>& KeyMappingsField() { return *GetNativePointerField<TArray<FInputAxisKeyMapping>*>(this, "FAxisKeyDetails.KeyMappings"); }
};

