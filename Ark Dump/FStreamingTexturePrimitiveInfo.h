#pragma once

#include "BaseDeclarations.h"
struct FStreamingTexturePrimitiveInfo
{
	char __padding[0x1cL];
	FSphere& BoundsField() { return *GetNativePointerField<FSphere*>(this, "FStreamingTexturePrimitiveInfo.Bounds"); }
	float& TexelFactorField() { return *GetNativePointerField<float*>(this, "FStreamingTexturePrimitiveInfo.TexelFactor"); }
};

