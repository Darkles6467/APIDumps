#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FShadowProjectionNoTransformVS : FGlobalShader
{

	// Functions

	void SetParameters(FRHICommandList * RHICmdList, FSceneView * View) { NativeCall<void, FRHICommandList *, FSceneView *>(this, "FShadowProjectionNoTransformVS.SetParameters", RHICmdList, View); }
	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FShaderCompilerEnvironment * OutEnvironment) { NativeCall<void, EShaderPlatform, FShaderCompilerEnvironment *>(nullptr, "FShadowProjectionNoTransformVS.ModifyCompilationEnvironment", Platform, OutEnvironment); }
};

