#pragma once

#include "BaseDeclarations.h"
struct FDDSFileHeader
{
	char __padding[0x7cL];
	unsigned int& dwSizeField() { return *GetNativePointerField<unsigned int*>(this, "FDDSFileHeader.dwSize"); }
	unsigned int& dwFlagsField() { return *GetNativePointerField<unsigned int*>(this, "FDDSFileHeader.dwFlags"); }
	unsigned int& dwHeightField() { return *GetNativePointerField<unsigned int*>(this, "FDDSFileHeader.dwHeight"); }
	unsigned int& dwWidthField() { return *GetNativePointerField<unsigned int*>(this, "FDDSFileHeader.dwWidth"); }
	unsigned int& dwLinearSizeField() { return *GetNativePointerField<unsigned int*>(this, "FDDSFileHeader.dwLinearSize"); }
	unsigned int& dwDepthField() { return *GetNativePointerField<unsigned int*>(this, "FDDSFileHeader.dwDepth"); }
	unsigned int& dwMipMapCountField() { return *GetNativePointerField<unsigned int*>(this, "FDDSFileHeader.dwMipMapCount"); }
	FieldArray<unsigned int, 11> dwReserved1Field() { return {this, "FDDSFileHeader.dwReserved1"}; }
	FDDSPixelFormatHeader& ddpfField() { return *GetNativePointerField<FDDSPixelFormatHeader*>(this, "FDDSFileHeader.ddpf"); }
	unsigned int& dwCapsField() { return *GetNativePointerField<unsigned int*>(this, "FDDSFileHeader.dwCaps"); }
	unsigned int& dwCaps2Field() { return *GetNativePointerField<unsigned int*>(this, "FDDSFileHeader.dwCaps2"); }
	unsigned int& dwCaps3Field() { return *GetNativePointerField<unsigned int*>(this, "FDDSFileHeader.dwCaps3"); }
	unsigned int& dwCaps4Field() { return *GetNativePointerField<unsigned int*>(this, "FDDSFileHeader.dwCaps4"); }
	unsigned int& dwReserved2Field() { return *GetNativePointerField<unsigned int*>(this, "FDDSFileHeader.dwReserved2"); }
};

