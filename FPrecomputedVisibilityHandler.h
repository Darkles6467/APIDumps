#pragma once

#include "BaseDeclarations.h"
struct FPrecomputedVisibilityHandler
{
	char __padding[0x30L];
	FVector2D& PrecomputedVisibilityCellBucketOriginXYField() { return *GetNativePointerField<FVector2D*>(this, "FPrecomputedVisibilityHandler.PrecomputedVisibilityCellBucketOriginXY"); }
	float& PrecomputedVisibilityCellSizeXYField() { return *GetNativePointerField<float*>(this, "FPrecomputedVisibilityHandler.PrecomputedVisibilityCellSizeXY"); }
	float& PrecomputedVisibilityCellSizeZField() { return *GetNativePointerField<float*>(this, "FPrecomputedVisibilityHandler.PrecomputedVisibilityCellSizeZ"); }
	int& PrecomputedVisibilityCellBucketSizeXYField() { return *GetNativePointerField<int*>(this, "FPrecomputedVisibilityHandler.PrecomputedVisibilityCellBucketSizeXY"); }
	int& PrecomputedVisibilityNumCellBucketsField() { return *GetNativePointerField<int*>(this, "FPrecomputedVisibilityHandler.PrecomputedVisibilityNumCellBuckets"); }
	int& IdField() { return *GetNativePointerField<int*>(this, "FPrecomputedVisibilityHandler.Id"); }
	TArray<FPrecomputedVisibilityBucket>& PrecomputedVisibilityCellBucketsField() { return *GetNativePointerField<TArray<FPrecomputedVisibilityBucket>*>(this, "FPrecomputedVisibilityHandler.PrecomputedVisibilityCellBuckets"); }

	// Functions

	void UpdateScene(FSceneInterface * Scene) { NativeCall<void, FSceneInterface *>(this, "FPrecomputedVisibilityHandler.UpdateScene", Scene); }
};

