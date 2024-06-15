#pragma once

#include "BaseDeclarations.h"
struct FMultiSizeIndexContainerData
{
	char __padding[0x18L];
	TArray<unsigned int>& IndicesField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "FMultiSizeIndexContainerData.Indices"); }
	unsigned int& DataTypeSizeField() { return *GetNativePointerField<unsigned int*>(this, "FMultiSizeIndexContainerData.DataTypeSize"); }
};

