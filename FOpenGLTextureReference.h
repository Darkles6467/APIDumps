#pragma once

#include "BaseDeclarations.h"
#include "FRHITextureReference.h"
#include "FRHITexture.h"
#include "FRHIResource.h"

struct FOpenGLTextureReference : FRHITextureReference
{
	char __padding[0x8L];
	FOpenGLTextureBase * TexturePtrField() { return GetNativePointerField<FOpenGLTextureBase *>(this, "FOpenGLTextureReference.TexturePtr"); }

	// Functions

};

