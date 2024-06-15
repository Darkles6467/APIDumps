#pragma once

#include "BaseDeclarations.h"
struct FSlateTextureData
{
	char __padding[0x20L];
	TArray<unsigned char>& BytesField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FSlateTextureData.Bytes"); }
	unsigned int& WidthField() { return *GetNativePointerField<unsigned int*>(this, "FSlateTextureData.Width"); }
	unsigned int& HeightField() { return *GetNativePointerField<unsigned int*>(this, "FSlateTextureData.Height"); }
	unsigned int& StrideBytesField() { return *GetNativePointerField<unsigned int*>(this, "FSlateTextureData.StrideBytes"); }

	// Functions

	void Empty() { NativeCall<void>(this, "FSlateTextureData.Empty"); }
};

