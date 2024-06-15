#pragma once

#include "BaseDeclarations.h"
struct FBatchedPoint
{
	char __padding[0x28L];
	FVector& PositionField() { return *GetNativePointerField<FVector*>(this, "FBatchedPoint.Position"); }
	FLinearColor& ColorField() { return *GetNativePointerField<FLinearColor*>(this, "FBatchedPoint.Color"); }
	float& PointSizeField() { return *GetNativePointerField<float*>(this, "FBatchedPoint.PointSize"); }
	float& RemainingLifeTimeField() { return *GetNativePointerField<float*>(this, "FBatchedPoint.RemainingLifeTime"); }
	char& DepthPriorityField() { return *GetNativePointerField<char*>(this, "FBatchedPoint.DepthPriority"); }

	// Functions

};

