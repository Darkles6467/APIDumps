#pragma once

#include "BaseDeclarations.h"
struct FStreamableTextureInstance
{
	char __padding[0x14L];
	FSphere& BoundingSphereField() { return *GetNativePointerField<FSphere*>(this, "FStreamableTextureInstance.BoundingSphere"); }
	float& TexelFactorField() { return *GetNativePointerField<float*>(this, "FStreamableTextureInstance.TexelFactor"); }

	// Functions

};

struct FDynamicTextureInstance : FStreamableTextureInstance
{
	char __padding[0x14L];
	bool& bAttachedField() { return *GetNativePointerField<bool*>(this, "FDynamicTextureInstance.bAttached"); }
	float& OriginalRadiusField() { return *GetNativePointerField<float*>(this, "FDynamicTextureInstance.OriginalRadius"); }

	// Functions

};

