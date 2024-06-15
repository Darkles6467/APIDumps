#pragma once

#include "BaseDeclarations.h"
struct FImage
{
	char __padding[0x28L];
	TArray<unsigned char>& RawDataField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "FImage.RawData"); }
	int& SizeXField() { return *GetNativePointerField<int*>(this, "FImage.SizeX"); }
	int& SizeYField() { return *GetNativePointerField<int*>(this, "FImage.SizeY"); }
	int& NumSlicesField() { return *GetNativePointerField<int*>(this, "FImage.NumSlices"); }
	ERawImageFormat::Type& FormatField() { return *GetNativePointerField<ERawImageFormat::Type*>(this, "FImage.Format"); }
	bool& bSRGBField() { return *GetNativePointerField<bool*>(this, "FImage.bSRGB"); }

	// Functions

};

