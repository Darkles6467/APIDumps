#pragma once

#include "BaseDeclarations.h"
#include "FImageWrapperBase.h"
#include "IImageWrapper.h"

struct FIcoImageWrapper : FImageWrapperBase
{
	char __padding[0x20L];
	unsigned int& ImageOffsetField() { return *GetNativePointerField<unsigned int*>(this, "FIcoImageWrapper.ImageOffset"); }
	unsigned int& ImageSizeField() { return *GetNativePointerField<unsigned int*>(this, "FIcoImageWrapper.ImageSize"); }
	bool& bIsPngField() { return *GetNativePointerField<bool*>(this, "FIcoImageWrapper.bIsPng"); }

	// Functions

	bool GetRaw(const ERGBFormat::Type InFormat, int InBitDepth, const TArray<unsigned char> ** OutRawData) { return NativeCall<bool, const ERGBFormat::Type, int, const TArray<unsigned char> **>(this, "FIcoImageWrapper.GetRaw", InFormat, InBitDepth, OutRawData); }
	bool LoadICOHeader() { return NativeCall<bool>(this, "FIcoImageWrapper.LoadICOHeader"); }
	bool SetCompressed(const void * InCompressedData, int InCompressedSize) { return NativeCall<bool, const void *, int>(this, "FIcoImageWrapper.SetCompressed", InCompressedData, InCompressedSize); }
	void Uncompress(const ERGBFormat::Type InFormat, int InBitDepth) { NativeCall<void, const ERGBFormat::Type, int>(this, "FIcoImageWrapper.Uncompress", InFormat, InBitDepth); }
};

