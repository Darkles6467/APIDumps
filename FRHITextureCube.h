#pragma once

#include "BaseDeclarations.h"
#include "FRHITexture.h"

struct FRHITextureCube : FRHITexture
{
	char __padding[0x8L];
	unsigned int& SizeField() { return *GetNativePointerField<unsigned int*>(this, "FRHITextureCube.Size"); }
};

