#pragma once

#include "BaseDeclarations.h"
struct FIndexArrayView
{
	char __padding[0x10L];
	const void * UntypedIndexDataField() { return GetNativePointerField<const void *>(this, "FIndexArrayView.UntypedIndexData"); }
	int& NumIndicesField() { return *GetNativePointerField<int*>(this, "FIndexArrayView.NumIndices"); }
	bool& b32BitField() { return *GetNativePointerField<bool*>(this, "FIndexArrayView.b32Bit"); }

	// Functions

	unsigned int operator[](int i) { return NativeCall<unsigned int, int>(this, "FIndexArrayView.operator[]", i); }
};

