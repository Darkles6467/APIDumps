#pragma once

#include "BaseDeclarations.h"
struct FMeshReductionSettings
{
	char __padding[0x20L];
	float& PercentTrianglesField() { return *GetNativePointerField<float*>(this, "FMeshReductionSettings.PercentTriangles"); }
	float& MaxDeviationField() { return *GetNativePointerField<float*>(this, "FMeshReductionSettings.MaxDeviation"); }
	float& WeldingThresholdField() { return *GetNativePointerField<float*>(this, "FMeshReductionSettings.WeldingThreshold"); }
	float& HardAngleThresholdField() { return *GetNativePointerField<float*>(this, "FMeshReductionSettings.HardAngleThreshold"); }
	TEnumAsByte<enum EMeshFeatureImportance::Type>& SilhouetteImportanceField() { return *GetNativePointerField<TEnumAsByte<enum EMeshFeatureImportance::Type>*>(this, "FMeshReductionSettings.SilhouetteImportance"); }
	TEnumAsByte<enum EMeshFeatureImportance::Type>& TextureImportanceField() { return *GetNativePointerField<TEnumAsByte<enum EMeshFeatureImportance::Type>*>(this, "FMeshReductionSettings.TextureImportance"); }
	TEnumAsByte<enum EMeshFeatureImportance::Type>& ShadingImportanceField() { return *GetNativePointerField<TEnumAsByte<enum EMeshFeatureImportance::Type>*>(this, "FMeshReductionSettings.ShadingImportance"); }
	bool& bRecalculateNormalsField() { return *GetNativePointerField<bool*>(this, "FMeshReductionSettings.bRecalculateNormals"); }
	int& BaseLODModelField() { return *GetNativePointerField<int*>(this, "FMeshReductionSettings.BaseLODModel"); }
	bool& bGenerateUniqueLightmapUVsField() { return *GetNativePointerField<bool*>(this, "FMeshReductionSettings.bGenerateUniqueLightmapUVs"); }
	bool& bKeepSymmetryField() { return *GetNativePointerField<bool*>(this, "FMeshReductionSettings.bKeepSymmetry"); }
	bool& bVisibilityAidedField() { return *GetNativePointerField<bool*>(this, "FMeshReductionSettings.bVisibilityAided"); }
	bool& bCullOccludedField() { return *GetNativePointerField<bool*>(this, "FMeshReductionSettings.bCullOccluded"); }
	TEnumAsByte<enum EMeshFeatureImportance::Type>& VisibilityAggressivenessField() { return *GetNativePointerField<TEnumAsByte<enum EMeshFeatureImportance::Type>*>(this, "FMeshReductionSettings.VisibilityAggressiveness"); }

	// Functions

};

