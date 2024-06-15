#pragma once

#include "BaseDeclarations.h"
#include "FRHITexture2D.h"
#include "FRHITexture.h"
#include "FRHIResource.h"

struct FOpenGLBaseTexture2D : FRHITexture2D
{
	char __padding[0x8L];
	unsigned int& SampleCountField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLBaseTexture2D.SampleCount"); }
	unsigned int& SampleCountTileMemField() { return *GetNativePointerField<unsigned int*>(this, "FOpenGLBaseTexture2D.SampleCountTileMem"); }
};

