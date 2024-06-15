#pragma once

#include "BaseDeclarations.h"
#include "FImageWrapperBase.h"
#include "IImageWrapper.h"

struct FJpegImageWrapper : FImageWrapperBase
{
	char __padding[0x8L];
	int& NumComponentsField() { return *GetNativePointerField<int*>(this, "FJpegImageWrapper.NumComponents"); }

	// Functions

	void Compress(int Quality) { NativeCall<void, int>(this, "FJpegImageWrapper.Compress", Quality); }
	bool SetCompressed(const void * InCompressedData, int InCompressedSize) { return NativeCall<bool, const void *, int>(this, "FJpegImageWrapper.SetCompressed", InCompressedData, InCompressedSize); }
	bool SetRaw(const void * InRawData, int InRawSize, const int InWidth, const int InHeight, const ERGBFormat::Type InFormat, const int InBitDepth) { return NativeCall<bool, const void *, int, const int, const int, const ERGBFormat::Type, const int>(this, "FJpegImageWrapper.SetRaw", InRawData, InRawSize, InWidth, InHeight, InFormat, InBitDepth); }
	void Uncompress(const ERGBFormat::Type InFormat, int InBitDepth) { NativeCall<void, const ERGBFormat::Type, int>(this, "FJpegImageWrapper.Uncompress", InFormat, InBitDepth); }
};

