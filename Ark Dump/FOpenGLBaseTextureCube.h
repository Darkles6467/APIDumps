#pragma once

#include "BaseDeclarations.h"
#include "FRHITextureCube.h"
#include "FRHITexture.h"
#include "FRHIResource.h"

struct FOpenGLBaseTextureCube : FRHITextureCube
{
	char __padding[0x8L];
	unsigned int& ArraySizeField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLBaseTextureCube.ArraySize"); }
};

