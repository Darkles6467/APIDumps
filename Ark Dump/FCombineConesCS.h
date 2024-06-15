#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FCombineConesCS : FGlobalShader
{
	char __padding[0x38L];
	FAOParameters& AOParametersField() { return *GetNativePointerField<FAOParameters*>(this, "FCombineConesCS.AOParameters"); }
	FRWShaderParameter& IrradianceCacheBentNormalField() { return *GetNativePointerField<FRWShaderParameter*>(this, "FCombineConesCS.IrradianceCacheBentNormal"); }

	// Functions

	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FShaderCompilerEnvironment * OutEnvironment) { NativeCall<void, EShaderPlatform, FShaderCompilerEnvironment *>(nullptr, "FCombineConesCS.ModifyCompilationEnvironment", Platform, OutEnvironment); }
	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FCombineConesCS.Serialize", Ar); }
	void SetParameters(FRHICommandList * RHICmdList, FSceneView * View, int DepthLevel, const FDistanceFieldAOParameters * Parameters, FLightSceneProxy * DirectionalLight, const FMatrix * WorldToShadowMatrixValue, FLightTileIntersectionResources * TileIntersectionResources, FVPLResources * VPLResources) { NativeCall<void, FRHICommandList *, FSceneView *, int, const FDistanceFieldAOParameters *, FLightSceneProxy *, const FMatrix *, FLightTileIntersectionResources *, FVPLResources *>(this, "FCombineConesCS.SetParameters", RHICmdList, View, DepthLevel, Parameters, DirectionalLight, WorldToShadowMatrixValue, TileIntersectionResources, VPLResources); }
};

