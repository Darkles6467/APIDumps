#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FBlendLandscapeLayers : FGlobalShader
{
	char __padding[0x48L];

	// Functions

	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FShaderCompilerEnvironment * OutEnvironment) { NativeCall<void, EShaderPlatform, FShaderCompilerEnvironment *>(nullptr, "FBlendLandscapeLayers.ModifyCompilationEnvironment", Platform, OutEnvironment); }
	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FBlendLandscapeLayers.Serialize", Ar); }
	void SetParameters(FRHICommandList * RHICmdList, FSceneView * View) { NativeCall<void, FRHICommandList *, FSceneView *>(this, "FBlendLandscapeLayers.SetParameters", RHICmdList, View); }
};

