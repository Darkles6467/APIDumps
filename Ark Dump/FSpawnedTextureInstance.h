#pragma once

#include "BaseDeclarations.h"
struct FSpawnedTextureInstance
{
	char __padding[0x10L];
	float& TexelFactorField() { return *GetNativePointerField<float*>(this, "FSpawnedTextureInstance.TexelFactor"); }
	float& InvOriginalRadiusField() { return *GetNativePointerField<float*>(this, "FSpawnedTextureInstance.InvOriginalRadius"); }
};

