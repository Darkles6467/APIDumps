#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FSetupLightVPLsIndirectArgumentsCS : FGlobalShader
{
	char __padding[0x40L];
	FRWShaderParameter& DispatchParametersField() { return *GetNativePointerField<FRWShaderParameter*>(this, "FSetupLightVPLsIndirectArgumentsCS.DispatchParameters"); }
	FDistanceFieldCulledObjectBufferParameters& ObjectParametersField() { return *GetNativePointerField<FDistanceFieldCulledObjectBufferParameters*>(this, "FSetupLightVPLsIndirectArgumentsCS.ObjectParameters"); }

	// Functions

	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FShaderCompilerEnvironment * OutEnvironment) { NativeCall<void, EShaderPlatform, FShaderCompilerEnvironment *>(nullptr, "FSetupLightVPLsIndirectArgumentsCS.ModifyCompilationEnvironment", Platform, OutEnvironment); }
	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FSetupLightVPLsIndirectArgumentsCS.Serialize", Ar); }
	void SetParameters(FRHICommandList * RHICmdList, FSceneView * View) { NativeCall<void, FRHICommandList *, FSceneView *>(this, "FSetupLightVPLsIndirectArgumentsCS.SetParameters", RHICmdList, View); }
};

