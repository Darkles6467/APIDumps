#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FParticleTileVS : FGlobalShader
{
	char __padding[0x8L];

	// Functions

	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FShaderCompilerEnvironment * OutEnvironment) { NativeCall<void, EShaderPlatform, FShaderCompilerEnvironment *>(nullptr, "FParticleTileVS.ModifyCompilationEnvironment", Platform, OutEnvironment); }
	void SetParameters(FRHICommandList * RHICmdList, FRHIShaderResourceView * TileOffsetsRef) { NativeCall<void, FRHICommandList *, FRHIShaderResourceView *>(this, "FParticleTileVS.SetParameters", RHICmdList, TileOffsetsRef); }
};

