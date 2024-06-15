#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FSimpleElementVS : FGlobalShader
{
	char __padding[0x10L];

	// Functions

	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FShaderCompilerEnvironment * OutEnvironment) { NativeCall<void, EShaderPlatform, FShaderCompilerEnvironment *>(nullptr, "FSimpleElementVS.ModifyCompilationEnvironment", Platform, OutEnvironment); }
	void SetParameters(FRHICommandList * RHICmdList, const FMatrix * TransformValue, bool bSwitchVerticalAxis) { NativeCall<void, FRHICommandList *, const FMatrix *, bool>(this, "FSimpleElementVS.SetParameters", RHICmdList, TransformValue, bSwitchVerticalAxis); }
	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FSimpleElementVS.Serialize", Ar); }
};

