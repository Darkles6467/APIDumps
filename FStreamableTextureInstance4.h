#pragma once

#include "BaseDeclarations.h"
struct FStreamableTextureInstance4
{
	char __padding[0x50L];
	FVector4& BoundingSphereXField() { return *GetNativePointerField<FVector4*>(this, "FStreamableTextureInstance4.BoundingSphereX"); }
	FVector4& BoundingSphereYField() { return *GetNativePointerField<FVector4*>(this, "FStreamableTextureInstance4.BoundingSphereY"); }
	FVector4& BoundingSphereZField() { return *GetNativePointerField<FVector4*>(this, "FStreamableTextureInstance4.BoundingSphereZ"); }
	FVector4& BoundingSphereRadiusField() { return *GetNativePointerField<FVector4*>(this, "FStreamableTextureInstance4.BoundingSphereRadius"); }
	FVector4& TexelFactorField() { return *GetNativePointerField<FVector4*>(this, "FStreamableTextureInstance4.TexelFactor"); }
};

