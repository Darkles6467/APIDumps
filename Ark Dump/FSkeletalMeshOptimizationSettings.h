#pragma once

#include "BaseDeclarations.h"
struct FSkeletalMeshOptimizationSettings
{
	char __padding[0x40L];
	TEnumAsByte<enum SkeletalMeshOptimizationType>& ReductionMethodField() { return *GetNativePointerField<TEnumAsByte<enum SkeletalMeshOptimizationType>*>(this, "FSkeletalMeshOptimizationSettings.ReductionMethod"); }
	float& NumOfTrianglesPercentageField() { return *GetNativePointerField<float*>(this, "FSkeletalMeshOptimizationSettings.NumOfTrianglesPercentage"); }
	float& MaxDeviationPercentageField() { return *GetNativePointerField<float*>(this, "FSkeletalMeshOptimizationSettings.MaxDeviationPercentage"); }
	float& WeldingThresholdField() { return *GetNativePointerField<float*>(this, "FSkeletalMeshOptimizationSettings.WeldingThreshold"); }
	bool& bRecalcNormalsField() { return *GetNativePointerField<bool*>(this, "FSkeletalMeshOptimizationSettings.bRecalcNormals"); }
	float& NormalsThresholdField() { return *GetNativePointerField<float*>(this, "FSkeletalMeshOptimizationSettings.NormalsThreshold"); }
	TEnumAsByte<enum SkeletalMeshOptimizationImportance>& SilhouetteImportanceField() { return *GetNativePointerField<TEnumAsByte<enum SkeletalMeshOptimizationImportance>*>(this, "FSkeletalMeshOptimizationSettings.SilhouetteImportance"); }
	TEnumAsByte<enum SkeletalMeshOptimizationImportance>& TextureImportanceField() { return *GetNativePointerField<TEnumAsByte<enum SkeletalMeshOptimizationImportance>*>(this, "FSkeletalMeshOptimizationSettings.TextureImportance"); }
	TEnumAsByte<enum SkeletalMeshOptimizationImportance>& ShadingImportanceField() { return *GetNativePointerField<TEnumAsByte<enum SkeletalMeshOptimizationImportance>*>(this, "FSkeletalMeshOptimizationSettings.ShadingImportance"); }
	TEnumAsByte<enum SkeletalMeshOptimizationImportance>& SkinningImportanceField() { return *GetNativePointerField<TEnumAsByte<enum SkeletalMeshOptimizationImportance>*>(this, "FSkeletalMeshOptimizationSettings.SkinningImportance"); }
	float& BoneReductionRatioField() { return *GetNativePointerField<float*>(this, "FSkeletalMeshOptimizationSettings.BoneReductionRatio"); }
	int& MaxBonesPerVertexField() { return *GetNativePointerField<int*>(this, "FSkeletalMeshOptimizationSettings.MaxBonesPerVertex"); }
	TArray<FBoneReference>& BonesToRemoveField() { return *GetNativePointerField<TArray<FBoneReference>*>(this, "FSkeletalMeshOptimizationSettings.BonesToRemove"); }
	int& BaseLODModelField() { return *GetNativePointerField<int*>(this, "FSkeletalMeshOptimizationSettings.BaseLODModel"); }
	int& LODChainLastIndexField() { return *GetNativePointerField<int*>(this, "FSkeletalMeshOptimizationSettings.LODChainLastIndex"); }

	// Functions

	FSkeletalMeshOptimizationSettings * operator=(const FSkeletalMeshOptimizationSettings * __that) { return NativeCall<FSkeletalMeshOptimizationSettings *, const FSkeletalMeshOptimizationSettings *>(this, "FSkeletalMeshOptimizationSettings.operator=", __that); }
};

