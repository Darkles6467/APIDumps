#pragma once

#include "BaseDeclarations.h"
#include "FImageWrapperBase.h"
#include "IImageWrapper.h"

struct FExrImageWrapper : FImageWrapperBase
{

	// Functions

	void Compress(int Quality) { NativeCall<void, int>(this, "FExrImageWrapper.Compress", Quality); }
	bool SetCompressed(const void * InCompressedData, int InCompressedSize) { return NativeCall<bool, const void *, int>(this, "FExrImageWrapper.SetCompressed", InCompressedData, InCompressedSize); }
	void Uncompress(const ERGBFormat::Type InFormat, int InBitDepth) { NativeCall<void, const ERGBFormat::Type, int>(this, "FExrImageWrapper.Uncompress", InFormat, InBitDepth); }
};

