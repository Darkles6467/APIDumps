#pragma once

#include "BaseDeclarations.h"
struct FMultiSizeIndexContainer
{
	char __padding[0x10L];
	char& DataTypeSizeField() { return *GetNativePointerField<char*>(this, "FMultiSizeIndexContainer.DataTypeSize"); }
	FRawStaticIndexBuffer16or32Interface * IndexBufferField() { return GetNativePointerField<FRawStaticIndexBuffer16or32Interface *>(this, "FMultiSizeIndexContainer.IndexBuffer"); }

	// Functions

	void GetIndexBuffer(TArray<unsigned int> * OutArray) { NativeCall<void, TArray<unsigned int> *>(this, "FMultiSizeIndexContainer.GetIndexBuffer", OutArray); }
	void Serialize(FArchive * Ar, bool bNeedsCPUAccess) { NativeCall<void, FArchive *, bool>(this, "FMultiSizeIndexContainer.Serialize", Ar, bNeedsCPUAccess); }
};

