#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FScreenPS : FGlobalShader
{
	char __padding[0x8L];

	// Functions

	void SetParameters(FRHICommandList * RHICmdList, FRHISamplerState * SamplerStateRHI, FRHITexture * TextureRHI) { NativeCall<void, FRHICommandList *, FRHISamplerState *, FRHITexture *>(this, "FScreenPS.SetParameters", RHICmdList, SamplerStateRHI, TextureRHI); }
};

