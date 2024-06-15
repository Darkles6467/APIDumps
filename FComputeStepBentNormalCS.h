#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FComputeStepBentNormalCS : FGlobalShader
{
	char __padding[0x20L];
	FRWShaderParameter& StepBentNormalField() { return *GetNativePointerField<FRWShaderParameter*>(this, "FComputeStepBentNormalCS.StepBentNormal"); }

	// Functions

	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FShaderCompilerEnvironment * OutEnvironment) { NativeCall<void, EShaderPlatform, FShaderCompilerEnvironment *>(nullptr, "FComputeStepBentNormalCS.ModifyCompilationEnvironment", Platform, OutEnvironment); }
	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FComputeStepBentNormalCS.Serialize", Ar); }
	void SetParameters(FRHICommandList * RHICmdList, FSceneView * View, int DepthLevel, FTemporaryIrradianceCacheResources * TemporaryIrradianceCacheResources) { NativeCall<void, FRHICommandList *, FSceneView *, int, FTemporaryIrradianceCacheResources *>(this, "FComputeStepBentNormalCS.SetParameters", RHICmdList, View, DepthLevel, TemporaryIrradianceCacheResources); }
};

