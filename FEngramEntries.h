#pragma once

#include "BaseDeclarations.h"
struct FEngramEntries
{
	char __padding[0x10L];
	TArray<TSubclassOf<UPrimalEngramEntry>>& EngramEntriesField() { return *GetNativePointerField<TArray<TSubclassOf<UPrimalEngramEntry>>*>(this, "FEngramEntries.EngramEntries"); }

	// Functions

};

