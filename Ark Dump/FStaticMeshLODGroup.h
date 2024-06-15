#pragma once

#include "BaseDeclarations.h"
struct FStaticMeshLODGroup
{
	char __padding[0x1a0L];
	int& DefaultNumLODsField() { return *GetNativePointerField<int*>(this, "FStaticMeshLODGroup.DefaultNumLODs"); }
	int& DefaultLightMapResolutionField() { return *GetNativePointerField<int*>(this, "FStaticMeshLODGroup.DefaultLightMapResolution"); }
	float& BasePercentTrianglesMultField() { return *GetNativePointerField<float*>(this, "FStaticMeshLODGroup.BasePercentTrianglesMult"); }
	FText& DisplayNameField() { return *GetNativePointerField<FText*>(this, "FStaticMeshLODGroup.DisplayName"); }
	FieldArray<FMeshReductionSettings, 10> DefaultSettingsField() { return {this, "FStaticMeshLODGroup.DefaultSettings"}; }
	FMeshReductionSettings& SettingsBiasField() { return *GetNativePointerField<FMeshReductionSettings*>(this, "FStaticMeshLODGroup.SettingsBias"); }
	int& DefaultLightMapIndexField() { return *GetNativePointerField<int*>(this, "FStaticMeshLODGroup.DefaultLightMapIndex"); }
};

