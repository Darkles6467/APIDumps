#pragma once

#include "BaseDeclarations.h"
#include "FGlobalShader.h"
#include "FShader.h"
#include "FDeferredCleanupInterface.h"

struct FCalculateHeightfieldOcclusionCS : FGlobalShader
{
	char __padding[0x70L];
	FAOParameters& AOParametersField() { return *GetNativePointerField<FAOParameters*>(this, "FCalculateHeightfieldOcclusionCS.AOParameters"); }
	FHeightfieldDescriptionParameters& HeightfieldDescriptionParametersField() { return *GetNativePointerField<FHeightfieldDescriptionParameters*>(this, "FCalculateHeightfieldOcclusionCS.HeightfieldDescriptionParameters"); }
	FHeightfieldTextureParameters& HeightfieldTextureParametersField() { return *GetNativePointerField<FHeightfieldTextureParameters*>(this, "FCalculateHeightfieldOcclusionCS.HeightfieldTextureParameters"); }
	FRWShaderParameter& OccluderRadiusField() { return *GetNativePointerField<FRWShaderParameter*>(this, "FCalculateHeightfieldOcclusionCS.OccluderRadius"); }
	FRWShaderParameter& RecordConeVisibilityField() { return *GetNativePointerField<FRWShaderParameter*>(this, "FCalculateHeightfieldOcclusionCS.RecordConeVisibility"); }

	// Functions

	bool Serialize(FArchive * Ar) { return NativeCall<bool, FArchive *>(this, "FCalculateHeightfieldOcclusionCS.Serialize", Ar); }
	void SetParameters(FRHICommandList * RHICmdList, FSceneView * View, int DepthLevel, UTexture2D * HeightfieldTextureValue, int NumHeightfieldsValue, const FTemporaryIrradianceCacheResources * TemporaryIrradianceCacheResources, const FDistanceFieldAOParameters * Parameters) { NativeCall<void, FRHICommandList *, FSceneView *, int, UTexture2D *, int, const FTemporaryIrradianceCacheResources *, const FDistanceFieldAOParameters *>(this, "FCalculateHeightfieldOcclusionCS.SetParameters", RHICmdList, View, DepthLevel, HeightfieldTextureValue, NumHeightfieldsValue, TemporaryIrradianceCacheResources, Parameters); }
};

