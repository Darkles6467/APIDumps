#pragma once

#include "BaseDeclarations.h"
struct FStreamableResourceInstanceDeprecated
{
	char __padding[0x14L];
	FSphere& BoundingSphereField() { return *GetNativePointerField<FSphere*>(this, "FStreamableResourceInstanceDeprecated.BoundingSphere"); }
	float& TexelFactorField() { return *GetNativePointerField<float*>(this, "FStreamableResourceInstanceDeprecated.TexelFactor"); }
};

