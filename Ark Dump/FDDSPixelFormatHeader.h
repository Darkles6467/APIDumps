#pragma once

#include "BaseDeclarations.h"
struct FDDSPixelFormatHeader
{
	char __padding[0x20L];
	unsigned int& dwSizeField() { return *GetNativePointerField<unsigned int*>(this, "FDDSPixelFormatHeader.dwSize"); }
	unsigned int& dwFlagsField() { return *GetNativePointerField<unsigned int*>(this, "FDDSPixelFormatHeader.dwFlags"); }
	unsigned int& dwFourCCField() { return *GetNativePointerField<unsigned int*>(this, "FDDSPixelFormatHeader.dwFourCC"); }
	unsigned int& dwRGBBitCountField() { return *GetNativePointerField<unsigned int*>(this, "FDDSPixelFormatHeader.dwRGBBitCount"); }
	unsigned int& dwRBitMaskField() { return *GetNativePointerField<unsigned int*>(this, "FDDSPixelFormatHeader.dwRBitMask"); }
	unsigned int& dwGBitMaskField() { return *GetNativePointerField<unsigned int*>(this, "FDDSPixelFormatHeader.dwGBitMask"); }
	unsigned int& dwBBitMaskField() { return *GetNativePointerField<unsigned int*>(this, "FDDSPixelFormatHeader.dwBBitMask"); }
	unsigned int& dwABitMaskField() { return *GetNativePointerField<unsigned int*>(this, "FDDSPixelFormatHeader.dwABitMask"); }
};

