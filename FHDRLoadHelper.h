#pragma once

#include "BaseDeclarations.h"
struct FHDRLoadHelper
{
	char __padding[0x10L];
	const char * RGBDataStartField() { return GetNativePointerField<const char *>(this, "FHDRLoadHelper.RGBDataStart"); }
	unsigned int& WidthField() { return *GetNativePointerField<unsigned int*>(this, "FHDRLoadHelper.Width"); }
	unsigned int& HeightField() { return *GetNativePointerField<unsigned int*>(this, "FHDRLoadHelper.Height"); }

	// Functions

	void DecompressWholeImage(unsigned int * OutRGBEData) { NativeCall<void, unsigned int *>(this, "FHDRLoadHelper.DecompressWholeImage", OutRGBEData); }
	void ExtractDDSInRGBE(TArray<unsigned char> * OutDDSFile) { NativeCall<void, TArray<unsigned char> *>(this, "FHDRLoadHelper.ExtractDDSInRGBE", OutDDSFile); }
	bool IsValid() { return NativeCall<bool>(this, "FHDRLoadHelper.IsValid"); }
	static void OldDecompressScanline(char * Out, const char ** In, unsigned int Len) { NativeCall<void, char *, const char **, unsigned int>(nullptr, "FHDRLoadHelper.OldDecompressScanline", Out, In, Len); }
};

