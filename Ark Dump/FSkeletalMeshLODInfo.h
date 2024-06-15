#pragma once

#include "BaseDeclarations.h"
struct FSkeletalMeshLODInfo
{
	char __padding[0x98L];
	float& ScreenSizeField() { return *GetNativePointerField<float*>(this, "FSkeletalMeshLODInfo.ScreenSize"); }
	float& LODHysteresisField() { return *GetNativePointerField<float*>(this, "FSkeletalMeshLODInfo.LODHysteresis"); }
	TArray<int>& LODMaterialMapField() { return *GetNativePointerField<TArray<int>*>(this, "FSkeletalMeshLODInfo.LODMaterialMap"); }
	TArray<bool>& bEnableShadowCasting_DEPRECATEDField() { return *GetNativePointerField<TArray<bool>*>(this, "FSkeletalMeshLODInfo.bEnableShadowCasting_DEPRECATED"); }
	TArray<TEnumAsByte<enum ETriangleSortOption>>& TriangleSorting_DEPRECATEDField() { return *GetNativePointerField<TArray<TEnumAsByte<enum ETriangleSortOption>>*>(this, "FSkeletalMeshLODInfo.TriangleSorting_DEPRECATED"); }
	TArray<FTriangleSortSettings>& TriangleSortSettingsField() { return *GetNativePointerField<TArray<FTriangleSortSettings>*>(this, "FSkeletalMeshLODInfo.TriangleSortSettings"); }
	FSkeletalMeshOptimizationSettings& ReductionSettingsField() { return *GetNativePointerField<FSkeletalMeshOptimizationSettings*>(this, "FSkeletalMeshLODInfo.ReductionSettings"); }
	int& StaggeredUpdateFrequencyField() { return *GetNativePointerField<int*>(this, "FSkeletalMeshLODInfo.StaggeredUpdateFrequency"); }

	// Functions

	FSkeletalMeshLODInfo * operator=(const FSkeletalMeshLODInfo * __that) { return NativeCall<FSkeletalMeshLODInfo *, const FSkeletalMeshLODInfo *>(this, "FSkeletalMeshLODInfo.operator=", __that); }
};

