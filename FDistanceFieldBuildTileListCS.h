#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FDistanceFieldBuildTileListCS : FGlobalShader
{
	char __padding[0xe8L];
	FDeferredPixelShaderParameters& DeferredParametersField() { return *GetNativePointerField<FDeferredPixelShaderParameters*>(this, "FDistanceFieldBuildTileListCS.DeferredParameters"); }
	FDistanceFieldCulledObjectBufferParameters& ObjectParametersField() { return *GetNativePointerField<FDistanceFieldCulledObjectBufferParameters*>(this, "FDistanceFieldBuildTileListCS.ObjectParameters"); }
	FAOParameters& AOParametersField() { return *GetNativePointerField<FAOParameters*>(this, "FDistanceFieldBuildTileListCS.AOParameters"); }
	FRWShaderParameter& TileHeadDataField() { return *GetNativePointerField<FRWShaderParameter*>(this, "FDistanceFieldBuildTileListCS.TileHeadData"); }
	FRWShaderParameter& TileArrayDataField() { return *GetNativePointerField<FRWShaderParameter*>(this, "FDistanceFieldBuildTileListCS.TileArrayData"); }
	FRWShaderParameter& TileArrayNextAllocationField() { return *GetNativePointerField<FRWShaderParameter*>(this, "FDistanceFieldBuildTileListCS.TileArrayNextAllocation"); }

	// Functions

	unsigned int GetTypeSize() { return NativeCall<unsigned int>(this, "FDistanceFieldBuildTileListCS.GetTypeSize"); }
	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FShaderCompilerEnvironment * OutEnvironment) { NativeCall<void, EShaderPlatform, FShaderCompilerEnvironment *>(nullptr, "FDistanceFieldBuildTileListCS.ModifyCompilationEnvironment", Platform, OutEnvironment); }
	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FDistanceFieldBuildTileListCS.Serialize", Ar); }
	void SetParameters(FRHICommandList * RHICmdList, FSceneView * View, FScene * Scene, FVector2D NumGroupsValue, const FDistanceFieldAOParameters * Parameters) { NativeCall<void, FRHICommandList *, FSceneView *, FScene *, FVector2D, const FDistanceFieldAOParameters *>(this, "FDistanceFieldBuildTileListCS.SetParameters", RHICmdList, View, Scene, NumGroupsValue, Parameters); }
};

