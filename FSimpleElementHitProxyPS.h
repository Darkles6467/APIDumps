#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FSimpleElementHitProxyPS : FGlobalShader
{
	char __padding[0x8L];

	// Functions

	void SetParameters(FRHICommandList * RHICmdList, const FTexture * TextureValue) { NativeCall<void, FRHICommandList *, const FTexture *>(this, "FSimpleElementHitProxyPS.SetParameters", RHICmdList, TextureValue); }
};

