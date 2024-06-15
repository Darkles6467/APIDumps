#pragma once

#include "BaseDeclarations.h"
struct FArrayStoreData
{
	char __padding[0x18L];
	int& X1Field() { return *GetNativePointerField<int*>(this, "FArrayStoreData.X1"); }
	int& Y1Field() { return *GetNativePointerField<int*>(this, "FArrayStoreData.Y1"); }
	unsigned __int16 * DataField() { return GetNativePointerField<unsigned __int16 *>(this, "FArrayStoreData.Data"); }
	int& StrideField() { return *GetNativePointerField<int*>(this, "FArrayStoreData.Stride"); }
};

