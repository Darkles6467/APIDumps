#pragma once

#include "BaseDeclarations.h"
struct FStoredDataV2
{
	char __padding[0x18L];
	FStoredID& IDField() { return *GetNativePointerField<FStoredID*>(this, "FStoredDataV2.ID"); }
	unsigned __int64& OffsetField() { return *GetNativePointerField<unsigned __int64*>(this, "FStoredDataV2.Offset"); }
	int& SizeField() { return *GetNativePointerField<int*>(this, "FStoredDataV2.Size"); }
};

