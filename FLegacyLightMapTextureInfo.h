#pragma once

#include "BaseDeclarations.h"
struct FLegacyLightMapTextureInfo
{
	char __padding[0x28L];
	ULightMapTexture2D * TextureField() { return GetNativePointerField<ULightMapTexture2D *>(this, "FLegacyLightMapTextureInfo.Texture"); }
	FLinearColor& ScaleField() { return *GetNativePointerField<FLinearColor*>(this, "FLegacyLightMapTextureInfo.Scale"); }
	FLinearColor& BiasField() { return *GetNativePointerField<FLinearColor*>(this, "FLegacyLightMapTextureInfo.Bias"); }
};

