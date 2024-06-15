#pragma once

#include "BaseDeclarations.h"
#include "FRHITexture.h"

struct FRHITexture2DArray : FRHITexture
{
	char __padding[0x10L];
	unsigned int& SizeXField() { return *GetNativePointerField<unsigned int*>(this, "FRHITexture2DArray.SizeX"); }
	unsigned int& SizeYField() { return *GetNativePointerField<unsigned int*>(this, "FRHITexture2DArray.SizeY"); }
	unsigned int& SizeZField() { return *GetNativePointerField<unsigned int*>(this, "FRHITexture2DArray.SizeZ"); }
};

