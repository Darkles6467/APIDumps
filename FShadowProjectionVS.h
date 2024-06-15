#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FShadowProjectionVS : FGlobalShader
{
	char __padding[0x18L];
	FStencilingGeometryShaderParameters& StencilingGeometryParametersField() { return *GetNativePointerField<FStencilingGeometryShaderParameters*>(this, "FShadowProjectionVS.StencilingGeometryParameters"); }

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FShadowProjectionVS.Serialize", Ar); }
	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FShaderCompilerEnvironment * OutEnvironment) { NativeCall<void, EShaderPlatform, FShaderCompilerEnvironment *>(nullptr, "FShadowProjectionVS.ModifyCompilationEnvironment", Platform, OutEnvironment); }
	void SetParameters(FRHICommandList * RHICmdList, FSceneView * View, const FProjectedShadowInfo * ShadowInfo, int ShadowSplitIndex) { NativeCall<void, FRHICommandList *, FSceneView *, const FProjectedShadowInfo *, int>(this, "FShadowProjectionVS.SetParameters", RHICmdList, View, ShadowInfo, ShadowSplitIndex); }
};

