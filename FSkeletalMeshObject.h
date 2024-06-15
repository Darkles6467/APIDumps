#pragma once

#include "BaseDeclarations.h"
#include "FDeferredCleanupInterface.h"

struct FSkeletalMeshObject : FDeferredCleanupInterface
{
	char __padding[0x70L];
	int& MinDesiredLODLevelField() { return *GetNativePointerField<int*>(this, "FSkeletalMeshObject.MinDesiredLODLevel"); }
	float& MaxDistanceFactorField() { return *GetNativePointerField<float*>(this, "FSkeletalMeshObject.MaxDistanceFactor"); }
	int& WorkingMinDesiredLODLevelField() { return *GetNativePointerField<int*>(this, "FSkeletalMeshObject.WorkingMinDesiredLODLevel"); }
	float& WorkingMaxDistanceFactorField() { return *GetNativePointerField<float*>(this, "FSkeletalMeshObject.WorkingMaxDistanceFactor"); }
	bool& bHasBeenUpdatedAtLeastOnceField() { return *GetNativePointerField<bool*>(this, "FSkeletalMeshObject.bHasBeenUpdatedAtLeastOnce"); }
	FSkeletalMeshResource * SkeletalMeshResourceField() { return GetNativePointerField<FSkeletalMeshResource *>(this, "FSkeletalMeshObject.SkeletalMeshResource"); }
	TArray<FSkeletalMeshLODInfo>& SkeletalMeshLODInfoField() { return *GetNativePointerField<TArray<FSkeletalMeshLODInfo>*>(this, "FSkeletalMeshObject.SkeletalMeshLODInfo"); }
	FieldArray<__int16, 16> GPUSkinCacheKeysField() { return {this, "FSkeletalMeshObject.GPUSkinCacheKeys"}; }
	unsigned int& LastFrameNumberField() { return *GetNativePointerField<unsigned int*>(this, "FSkeletalMeshObject.LastFrameNumber"); }
	float& ProgressiveDrawingFractionField() { return *GetNativePointerField<float*>(this, "FSkeletalMeshObject.ProgressiveDrawingFraction"); }
	ECustomSortAlternateIndexMode& CustomSortAlternateIndexModeField() { return *GetNativePointerField<ECustomSortAlternateIndexMode*>(this, "FSkeletalMeshObject.CustomSortAlternateIndexMode"); }
	bool& bUsePerBoneMotionBlurField() { return *GetNativePointerField<bool*>(this, "FSkeletalMeshObject.bUsePerBoneMotionBlur"); }

	// Functions

	bool IsMaterialHidden(int InLODIndex, int MaterialIdx) { return NativeCall<bool, int, int>(this, "FSkeletalMeshObject.IsMaterialHidden", InLODIndex, MaterialIdx); }
	void UpdateMinDesiredLODLevel(FSceneView * View, const FBoxSphereBounds * Bounds, int FrameNumber) { NativeCall<void, FSceneView *, const FBoxSphereBounds *, int>(this, "FSkeletalMeshObject.UpdateMinDesiredLODLevel", View, Bounds, FrameNumber); }
};

