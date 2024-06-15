#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FClearTilesCS : FGlobalShader
{
	char __padding[0x10L];
	FRWShaderParameter& ShadowTileHeadDataUnpackedField() { return *GetNativePointerField<FRWShaderParameter*>(this, "FClearTilesCS.ShadowTileHeadDataUnpacked"); }

	// Functions

	void SetParameters(FRHICommandList * RHICmdList, FSceneView * View, FVector2D NumGroupsValue, FLightTileIntersectionResources * TileIntersectionResources) { NativeCall<void, FRHICommandList *, FSceneView *, FVector2D, FLightTileIntersectionResources *>(this, "FClearTilesCS.SetParameters", RHICmdList, View, NumGroupsValue, TileIntersectionResources); }
	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FShaderCompilerEnvironment * OutEnvironment) { NativeCall<void, EShaderPlatform, FShaderCompilerEnvironment *>(nullptr, "FClearTilesCS.ModifyCompilationEnvironment", Platform, OutEnvironment); }
};

