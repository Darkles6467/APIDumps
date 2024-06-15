#pragma once

#include "BaseDeclarations.h"
struct FIconDirEntry
{
	char __padding[0x10L];
	char& bWidthField() { return *GetNativePointerField<char*>(this, "FIconDirEntry.bWidth"); }
	char& bHeightField() { return *GetNativePointerField<char*>(this, "FIconDirEntry.bHeight"); }
	char& bColorCountField() { return *GetNativePointerField<char*>(this, "FIconDirEntry.bColorCount"); }
	char& bReservedField() { return *GetNativePointerField<char*>(this, "FIconDirEntry.bReserved"); }
	unsigned __int16& wPlanesField() { return *GetNativePointerField<unsigned __int16*>(this, "FIconDirEntry.wPlanes"); }
	unsigned __int16& wBitCountField() { return *GetNativePointerField<unsigned __int16*>(this, "FIconDirEntry.wBitCount"); }
	unsigned int& dwBytesInResField() { return *GetNativePointerField<unsigned int*>(this, "FIconDirEntry.dwBytesInRes"); }
	unsigned int& dwImageOffsetField() { return *GetNativePointerField<unsigned int*>(this, "FIconDirEntry.dwImageOffset"); }
};

