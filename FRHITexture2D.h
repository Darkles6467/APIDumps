#pragma once

#include "BaseDeclarations.h"
#include "FRHITexture.h"

struct FRHITexture2D : FRHITexture
{
	char __padding[0x8L];
	unsigned int& SizeXField() { return *GetNativePointerField<unsigned int*>(this, "FRHITexture2D.SizeX"); }
	unsigned int& SizeYField() { return *GetNativePointerField<unsigned int*>(this, "FRHITexture2D.SizeY"); }

	// Functions

	unsigned int GetSizeY() { return NativeCall<unsigned int>(this, "FRHITexture2D.GetSizeY"); }
};

