#pragma once

#include "BaseDeclarations.h"
struct FEngramsSetSoftReferenceMapping
{
	char __padding[0x10L];
	TArray<FString>& EngramSetToUnlockField() { return *GetNativePointerField<TArray<FString>*>(this, "FEngramsSetSoftReferenceMapping.EngramSetToUnlock"); }

	// Functions

};

