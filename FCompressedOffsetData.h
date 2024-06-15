#pragma once

#include "BaseDeclarations.h"
struct FCompressedOffsetData
{
	char __padding[0x18L];
	TArray<int>& OffsetDataField() { return *GetNativePointerField<TArray<int>*>(this, "FCompressedOffsetData.OffsetData"); }
	int& StripSizeField() { return *GetNativePointerField<int*>(this, "FCompressedOffsetData.StripSize"); }

	// Functions

	int GetOffsetData(int StripIndex, int Offset) { return NativeCall<int, int, int>(this, "FCompressedOffsetData.GetOffsetData", StripIndex, Offset); }
	bool IsValid() { return NativeCall<bool>(this, "FCompressedOffsetData.IsValid"); }
};

