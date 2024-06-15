#pragma once

#include "BaseDeclarations.h"
struct FPrimitiveOcclusionHistory
{
	char __padding[0x40L];
	FPrimitiveComponentId& PrimitiveIdField() { return *GetNativePointerField<FPrimitiveComponentId*>(this, "FPrimitiveOcclusionHistory.PrimitiveId"); }
	unsigned int& HZBTestIndexField() { return *GetNativePointerField<unsigned int*>(this, "FPrimitiveOcclusionHistory.HZBTestIndex"); }
	unsigned int& HZBTestFrameNumberField() { return *GetNativePointerField<unsigned int*>(this, "FPrimitiveOcclusionHistory.HZBTestFrameNumber"); }
	float& LastVisibleTimeField() { return *GetNativePointerField<float*>(this, "FPrimitiveOcclusionHistory.LastVisibleTime"); }
	float& LastConsideredTimeField() { return *GetNativePointerField<float*>(this, "FPrimitiveOcclusionHistory.LastConsideredTime"); }
	float& LastPixelsPercentageField() { return *GetNativePointerField<float*>(this, "FPrimitiveOcclusionHistory.LastPixelsPercentage"); }
	bool& bGroupedQueryField() { return *GetNativePointerField<bool*>(this, "FPrimitiveOcclusionHistory.bGroupedQuery"); }
	int& NumBufferedFramesField() { return *GetNativePointerField<int*>(this, "FPrimitiveOcclusionHistory.NumBufferedFrames"); }
	int& CustomIndexField() { return *GetNativePointerField<int*>(this, "FPrimitiveOcclusionHistory.CustomIndex"); }

	// Functions

};

