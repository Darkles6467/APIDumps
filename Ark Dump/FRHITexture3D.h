#pragma once

#include "BaseDeclarations.h"
#include "FRHITexture.h"

struct FRHITexture3D : FRHITexture
{
	char __padding[0x10L];
	unsigned int& SizeXField() { return *GetNativePointerField<unsigned int*>(this, "FRHITexture3D.SizeX"); }
	unsigned int& SizeYField() { return *GetNativePointerField<unsigned int*>(this, "FRHITexture3D.SizeY"); }
	unsigned int& SizeZField() { return *GetNativePointerField<unsigned int*>(this, "FRHITexture3D.SizeZ"); }
};

