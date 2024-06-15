#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FSimpleElementColorChannelMaskPS : FGlobalShader
{
	char __padding[0x18L];

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FSimpleElementColorChannelMaskPS.Serialize", Ar); }
	void SetParameters(FRHICommandList * RHICmdList, const FTexture * TextureValue, const FMatrix * ColorWeightsValue, float GammaValue) { NativeCall<void, FRHICommandList *, const FTexture *, const FMatrix *, float>(this, "FSimpleElementColorChannelMaskPS.SetParameters", RHICmdList, TextureValue, ColorWeightsValue, GammaValue); }
};

