#pragma once

#include "BaseDeclarations.h"
struct FDDSLoadHelper
{
	char __padding[0x8L];
	const FDDSFileHeader * DDSHeaderField() { return GetNativePointerField<const FDDSFileHeader *>(this, "FDDSLoadHelper.DDSHeader"); }

	// Functions

	EPixelFormat ComputePixelFormat() { return NativeCall<EPixelFormat>(this, "FDDSLoadHelper.ComputePixelFormat"); }
	const char * GetDDSDataPointer(ECubeFace Face) { return NativeCall<const char *, ECubeFace>(this, "FDDSLoadHelper.GetDDSDataPointer", Face); }
	bool IsValid2DTexture() { return NativeCall<bool>(this, "FDDSLoadHelper.IsValid2DTexture"); }
};

