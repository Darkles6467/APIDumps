#pragma once

#include "BaseDeclarations.h"
struct FStaticMeshOptimizationSettings
{
	char __padding[0x1cL];
	TEnumAsByte<enum EOptimizationType>& ReductionMethodField() { return *GetNativePointerField<TEnumAsByte<enum EOptimizationType>*>(this, "FStaticMeshOptimizationSettings.ReductionMethod"); }
	float& NumOfTrianglesPercentageField() { return *GetNativePointerField<float*>(this, "FStaticMeshOptimizationSettings.NumOfTrianglesPercentage"); }
	float& MaxDeviationPercentageField() { return *GetNativePointerField<float*>(this, "FStaticMeshOptimizationSettings.MaxDeviationPercentage"); }
	float& WeldingThresholdField() { return *GetNativePointerField<float*>(this, "FStaticMeshOptimizationSettings.WeldingThreshold"); }
	bool& bRecalcNormalsField() { return *GetNativePointerField<bool*>(this, "FStaticMeshOptimizationSettings.bRecalcNormals"); }
	float& NormalsThresholdField() { return *GetNativePointerField<float*>(this, "FStaticMeshOptimizationSettings.NormalsThreshold"); }
	char& SilhouetteImportanceField() { return *GetNativePointerField<char*>(this, "FStaticMeshOptimizationSettings.SilhouetteImportance"); }
	char& TextureImportanceField() { return *GetNativePointerField<char*>(this, "FStaticMeshOptimizationSettings.TextureImportance"); }
	char& ShadingImportanceField() { return *GetNativePointerField<char*>(this, "FStaticMeshOptimizationSettings.ShadingImportance"); }

	// Functions

};

