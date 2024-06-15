#pragma once

#include "BaseDeclarations.h"
struct FLandscapeComponentDerivedData
{
	char __padding[0x10L];
	TArray<unsigned char>& CompressedLandscapeDataField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FLandscapeComponentDerivedData.CompressedLandscapeData"); }

	// Functions

	void GetUncompressedData(TArray<unsigned char> * OutUncompressedData) { NativeCall<void, TArray<unsigned char> *>(this, "FLandscapeComponentDerivedData.GetUncompressedData", OutUncompressedData); }
};

