#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FComputeDistanceFieldNormalPS : FGlobalShader
{
	char __padding[0x90L];
	FDeferredPixelShaderParameters& DeferredParametersField() { return *GetNativePointerField<FDeferredPixelShaderParameters*>(this, "FComputeDistanceFieldNormalPS.DeferredParameters"); }
	FAOParameters& AOParametersField() { return *GetNativePointerField<FAOParameters*>(this, "FComputeDistanceFieldNormalPS.AOParameters"); }

	// Functions

	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FShaderCompilerEnvironment * OutEnvironment) { NativeCall<void, EShaderPlatform, FShaderCompilerEnvironment *>(nullptr, "FComputeDistanceFieldNormalPS.ModifyCompilationEnvironment", Platform, OutEnvironment); }
	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FComputeDistanceFieldNormalPS.Serialize", Ar); }
	void SetParameters(FRHICommandList * RHICmdList, FSceneView * View, const FDistanceFieldAOParameters * Parameters) { NativeCall<void, FRHICommandList *, FSceneView *, const FDistanceFieldAOParameters *>(this, "FComputeDistanceFieldNormalPS.SetParameters", RHICmdList, View, Parameters); }
};

