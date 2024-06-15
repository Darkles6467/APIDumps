#pragma once

#include "BaseDeclarations.h"
struct FStoredDataV1
{
	char __padding[0x10L];
	FStoredID& IDField() { return *GetNativePointerField<FStoredID*>(this, "FStoredDataV1.ID"); }
	int& OffsetField() { return *GetNativePointerField<int*>(this, "FStoredDataV1.Offset"); }
	int& SizeField() { return *GetNativePointerField<int*>(this, "FStoredDataV1.Size"); }
};

