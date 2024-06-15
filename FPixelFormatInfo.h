#pragma once

#include "BaseDeclarations.h"
struct FPixelFormatInfo
{
	char __padding[0x28L];
	const wchar_t * NameField() { return GetNativePointerField<const wchar_t *>(this, "FPixelFormatInfo.Name"); }
	int& BlockSizeXField() { return *GetNativePointerField<int*>(this, "FPixelFormatInfo.BlockSizeX"); }
	int& BlockSizeYField() { return *GetNativePointerField<int*>(this, "FPixelFormatInfo.BlockSizeY"); }
	int& BlockSizeZField() { return *GetNativePointerField<int*>(this, "FPixelFormatInfo.BlockSizeZ"); }
	int& BlockBytesField() { return *GetNativePointerField<int*>(this, "FPixelFormatInfo.BlockBytes"); }
	int& NumComponentsField() { return *GetNativePointerField<int*>(this, "FPixelFormatInfo.NumComponents"); }
	unsigned int& PlatformFormatField() { return *GetNativePointerField<unsigned int*>(this, "FPixelFormatInfo.PlatformFormat"); }
	bool& SupportedField() { return *GetNativePointerField<bool*>(this, "FPixelFormatInfo.Supported"); }
	EPixelFormat& UnrealFormatField() { return *GetNativePointerField<EPixelFormat*>(this, "FPixelFormatInfo.UnrealFormat"); }
};

