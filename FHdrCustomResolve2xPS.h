#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FHdrCustomResolve2xPS : FGlobalShader
{
	char __padding[0x8L];

	// Functions

	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FShaderCompilerEnvironment * OutEnvironment) { NativeCall<void, EShaderPlatform, FShaderCompilerEnvironment *>(nullptr, "FHdrCustomResolve2xPS.ModifyCompilationEnvironment", Platform, OutEnvironment); }
};

