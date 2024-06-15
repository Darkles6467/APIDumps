#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FHeightFogVS : FGlobalShader
{
	char __padding[0x8L];

	// Functions

	void SetParameters(FRHICommandList * RHICmdList, const FViewInfo * View) { NativeCall<void, FRHICommandList *, const FViewInfo *>(this, "FHeightFogVS.SetParameters", RHICmdList, View); }
};

