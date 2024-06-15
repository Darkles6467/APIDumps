#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FSetupCopyIndirectArgumentsCS : FGlobalShader
{
	char __padding[0x20L];
	FRWShaderParameter& DispatchParametersField() { return *GetNativePointerField<FRWShaderParameter*>(this, "FSetupCopyIndirectArgumentsCS.DispatchParameters"); }
	FRWShaderParameter& ScatterDrawParametersField() { return *GetNativePointerField<FRWShaderParameter*>(this, "FSetupCopyIndirectArgumentsCS.ScatterDrawParameters"); }

	// Functions

	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FShaderCompilerEnvironment * OutEnvironment) { NativeCall<void, EShaderPlatform, FShaderCompilerEnvironment *>(nullptr, "FSetupCopyIndirectArgumentsCS.ModifyCompilationEnvironment", Platform, OutEnvironment); }
	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FSetupCopyIndirectArgumentsCS.Serialize", Ar); }
	void SetParameters(FRHICommandList * RHICmdList, FSceneView * View, int DepthLevel) { NativeCall<void, FRHICommandList *, FSceneView *, int>(this, "FSetupCopyIndirectArgumentsCS.SetParameters", RHICmdList, View, DepthLevel); }
	static bool ShouldCache(EShaderPlatform Platform) { return NativeCall<bool, EShaderPlatform>(nullptr, "FSetupCopyIndirectArgumentsCS.ShouldCache", Platform); }
	void UnsetParameters(FRHICommandList * RHICmdList) { NativeCall<void, FRHICommandList *>(this, "FSetupCopyIndirectArgumentsCS.UnsetParameters", RHICmdList); }
};

