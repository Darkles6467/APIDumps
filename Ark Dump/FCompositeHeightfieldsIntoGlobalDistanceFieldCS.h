#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FCompositeHeightfieldsIntoGlobalDistanceFieldCS : FGlobalShader
{
	char __padding[0x80L];
	FGlobalDistanceFieldParameters& GlobalDistanceFieldParametersField() { return *GetNativePointerField<FGlobalDistanceFieldParameters*>(this, "FCompositeHeightfieldsIntoGlobalDistanceFieldCS.GlobalDistanceFieldParameters"); }
	FRWShaderParameter& GlobalDistanceFieldTextureField() { return *GetNativePointerField<FRWShaderParameter*>(this, "FCompositeHeightfieldsIntoGlobalDistanceFieldCS.GlobalDistanceFieldTexture"); }
	FHeightfieldDescriptionParameters& HeightfieldDescriptionParametersField() { return *GetNativePointerField<FHeightfieldDescriptionParameters*>(this, "FCompositeHeightfieldsIntoGlobalDistanceFieldCS.HeightfieldDescriptionParameters"); }
	FGlobalHeightfieldParameters& HeightfieldTextureParametersField() { return *GetNativePointerField<FGlobalHeightfieldParameters*>(this, "FCompositeHeightfieldsIntoGlobalDistanceFieldCS.HeightfieldTextureParameters"); }

	// Functions

	static void ModifyCompilationEnvironment(EShaderPlatform Platform, FShaderCompilerEnvironment * OutEnvironment) { NativeCall<void, EShaderPlatform, FShaderCompilerEnvironment *>(nullptr, "FCompositeHeightfieldsIntoGlobalDistanceFieldCS.ModifyCompilationEnvironment", Platform, OutEnvironment); }
	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FCompositeHeightfieldsIntoGlobalDistanceFieldCS.Serialize", Ar); }
	void SetParameters(FRHICommandList * RHICmdList, const FScene * Scene, FSceneView * View, float MaxOcclusionDistance, const FGlobalDistanceFieldInfo * GlobalDistanceFieldInfo, int ClipmapIndexValue, const FVolumeUpdateRegion * UpdateRegion, UTexture2D * HeightfieldTextureValue, int NumHeightfieldsValue) { NativeCall<void, FRHICommandList *, const FScene *, FSceneView *, float, const FGlobalDistanceFieldInfo *, int, const FVolumeUpdateRegion *, UTexture2D *, int>(this, "FCompositeHeightfieldsIntoGlobalDistanceFieldCS.SetParameters", RHICmdList, Scene, View, MaxOcclusionDistance, GlobalDistanceFieldInfo, ClipmapIndexValue, UpdateRegion, HeightfieldTextureValue, NumHeightfieldsValue); }
	void UnsetParameters(FRHICommandList * RHICmdList, const FGlobalDistanceFieldInfo * GlobalDistanceFieldInfo, int ClipmapIndexValue) { NativeCall<void, FRHICommandList *, const FGlobalDistanceFieldInfo *, int>(this, "FCompositeHeightfieldsIntoGlobalDistanceFieldCS.UnsetParameters", RHICmdList, GlobalDistanceFieldInfo, ClipmapIndexValue); }
};

