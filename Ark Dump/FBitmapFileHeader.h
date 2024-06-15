#pragma once

#include "BaseDeclarations.h"
struct FBitmapFileHeader
{
	char __padding[0xeL];
	unsigned __int16& bfTypeField() { return *GetNativePointerField<unsigned __int16*>(this, "FBitmapFileHeader.bfType"); }
	unsigned int& bfSizeField() { return *GetNativePointerField<unsigned int*>(this, "FBitmapFileHeader.bfSize"); }
	unsigned __int16& bfReserved1Field() { return *GetNativePointerField<unsigned __int16*>(this, "FBitmapFileHeader.bfReserved1"); }
	unsigned __int16& bfReserved2Field() { return *GetNativePointerField<unsigned __int16*>(this, "FBitmapFileHeader.bfReserved2"); }
	unsigned int& bfOffBitsField() { return *GetNativePointerField<unsigned int*>(this, "FBitmapFileHeader.bfOffBits"); }
};

