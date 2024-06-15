#pragma once

#include "BaseDeclarations.h"
struct FPendingStoredData
{
	char __padding[0x18L];
	FStoredID& IDField() { return *GetNativePointerField<FStoredID*>(this, "FPendingStoredData.ID"); }
	TArray<unsigned char>& DataField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FPendingStoredData.Data"); }

	// Functions

};

