#pragma once

#include "BaseDeclarations.h"
#include "FImageWrapperBase.h"
#include "IImageWrapper.h"

struct FBmpImageWrapper : FImageWrapperBase
{
	char __padding[0x8L];
	bool& bHasHeaderField() { return *GetNativePointerField<bool*>(this, "FBmpImageWrapper.bHasHeader"); }
	bool& bHalfHeightField() { return *GetNativePointerField<bool*>(this, "FBmpImageWrapper.bHalfHeight"); }

	// Functions

	bool LoadBMPHeader() { return NativeCall<bool>(this, "FBmpImageWrapper.LoadBMPHeader"); }
	bool SetCompressed(const void * InCompressedData, int InCompressedSize) { return NativeCall<bool, const void *, int>(this, "FBmpImageWrapper.SetCompressed", InCompressedData, InCompressedSize); }
	void Uncompress(const ERGBFormat::Type InFormat, int InBitDepth) { NativeCall<void, const ERGBFormat::Type, int>(this, "FBmpImageWrapper.Uncompress", InFormat, InBitDepth); }
	void UncompressBMPData(const ERGBFormat::Type InFormat, const int InBitDepth) { NativeCall<void, const ERGBFormat::Type, const int>(this, "FBmpImageWrapper.UncompressBMPData", InFormat, InBitDepth); }
};

