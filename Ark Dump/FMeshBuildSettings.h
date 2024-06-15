#pragma once

#include "BaseDeclarations.h"
struct FMeshBuildSettings
{
	char __padding[0x38L];
	bool& bUseMikkTSpaceField() { return *GetNativePointerField<bool*>(this, "FMeshBuildSettings.bUseMikkTSpace"); }
	bool& bRecomputeNormalsField() { return *GetNativePointerField<bool*>(this, "FMeshBuildSettings.bRecomputeNormals"); }
	bool& bRecomputeTangentsField() { return *GetNativePointerField<bool*>(this, "FMeshBuildSettings.bRecomputeTangents"); }
	bool& bRemoveDegeneratesField() { return *GetNativePointerField<bool*>(this, "FMeshBuildSettings.bRemoveDegenerates"); }
	bool& bUseFullPrecisionUVsField() { return *GetNativePointerField<bool*>(this, "FMeshBuildSettings.bUseFullPrecisionUVs"); }
	bool& bGenerateLightmapUVsField() { return *GetNativePointerField<bool*>(this, "FMeshBuildSettings.bGenerateLightmapUVs"); }
	int& MinLightmapResolutionField() { return *GetNativePointerField<int*>(this, "FMeshBuildSettings.MinLightmapResolution"); }
	int& SrcLightmapIndexField() { return *GetNativePointerField<int*>(this, "FMeshBuildSettings.SrcLightmapIndex"); }
	int& DstLightmapIndexField() { return *GetNativePointerField<int*>(this, "FMeshBuildSettings.DstLightmapIndex"); }
	float& BuildScale_DEPRECATEDField() { return *GetNativePointerField<float*>(this, "FMeshBuildSettings.BuildScale_DEPRECATED"); }
	FVector& BuildScale3DField() { return *GetNativePointerField<FVector*>(this, "FMeshBuildSettings.BuildScale3D"); }
	float& DistanceFieldResolutionScaleField() { return *GetNativePointerField<float*>(this, "FMeshBuildSettings.DistanceFieldResolutionScale"); }
	bool& bGenerateDistanceFieldAsIfTwoSidedField() { return *GetNativePointerField<bool*>(this, "FMeshBuildSettings.bGenerateDistanceFieldAsIfTwoSided"); }
	bool& bReallyGenerateDistanceFieldAsIfTwoSidedField() { return *GetNativePointerField<bool*>(this, "FMeshBuildSettings.bReallyGenerateDistanceFieldAsIfTwoSided"); }
	UStaticMesh * DistanceFieldReplacementMeshField() { return GetNativePointerField<UStaticMesh *>(this, "FMeshBuildSettings.DistanceFieldReplacementMesh"); }

	// Functions

};

