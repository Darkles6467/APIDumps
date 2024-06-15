#pragma once

#include "BaseDeclarations.h"
struct FBitmapInfoHeader
{
	char __padding[0x28L];
	unsigned int& biSizeField() { return *GetNativePointerField<unsigned int*>(this, "FBitmapInfoHeader.biSize"); }
	unsigned int& biWidthField() { return *GetNativePointerField<unsigned int*>(this, "FBitmapInfoHeader.biWidth"); }
	unsigned int& biHeightField() { return *GetNativePointerField<unsigned int*>(this, "FBitmapInfoHeader.biHeight"); }
	unsigned __int16& biPlanesField() { return *GetNativePointerField<unsigned __int16*>(this, "FBitmapInfoHeader.biPlanes"); }
	unsigned __int16& biBitCountField() { return *GetNativePointerField<unsigned __int16*>(this, "FBitmapInfoHeader.biBitCount"); }
	unsigned int& biCompressionField() { return *GetNativePointerField<unsigned int*>(this, "FBitmapInfoHeader.biCompression"); }
	unsigned int& biSizeImageField() { return *GetNativePointerField<unsigned int*>(this, "FBitmapInfoHeader.biSizeImage"); }
	unsigned int& biXPelsPerMeterField() { return *GetNativePointerField<unsigned int*>(this, "FBitmapInfoHeader.biXPelsPerMeter"); }
	unsigned int& biYPelsPerMeterField() { return *GetNativePointerField<unsigned int*>(this, "FBitmapInfoHeader.biYPelsPerMeter"); }
	unsigned int& biClrUsedField() { return *GetNativePointerField<unsigned int*>(this, "FBitmapInfoHeader.biClrUsed"); }
	unsigned int& biClrImportantField() { return *GetNativePointerField<unsigned int*>(this, "FBitmapInfoHeader.biClrImportant"); }
};

