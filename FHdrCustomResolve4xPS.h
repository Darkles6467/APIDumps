#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FHdrCustomResolve4xPS : FGlobalShader
{
	char __padding[0x8L];

	// Functions

	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FShaderCompilerEnvironment * OutEnvironment) { NativeCall<void, EShaderPlatform, FShaderCompilerEnvironment *>(nullptr, "FHdrCustomResolve4xPS.ModifyCompilationEnvironment", Platform, OutEnvironment); }
	void SetParameters(FRHICommandList * RHICmdList, FRHITexture * Texture2DMS) { NativeCall<void, FRHICommandList *, FRHITexture *>(this, "FHdrCustomResolve4xPS.SetParameters", RHICmdList, Texture2DMS); }
};

