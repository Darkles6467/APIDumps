#pragma once

#include "BaseDeclarations.h"
#include "UTexture.h"

struct UTextureRenderTarget : UTexture
{
	char __padding[0x8L];
	float& TargetGammaField() { return *GetNativePointerField<float*>(this, "UTextureRenderTarget.TargetGamma"); }

	// Functions

	unsigned int GetMaterialType() { return NativeCall<unsigned int>(this, "UTextureRenderTarget.GetMaterialType"); }
	FTextureRenderTargetResource * GetRenderTargetResource() { return NativeCall<FTextureRenderTargetResource *>(this, "UTextureRenderTarget.GetRenderTargetResource"); }
	UPrimalHarvestingComponent * GameThread_GetRenderTargetResource() { return NativeCall<UPrimalHarvestingComponent *>(this, "UTextureRenderTarget.GameThread_GetRenderTargetResource"); }
};

