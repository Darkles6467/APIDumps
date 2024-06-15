#pragma once

#include "BaseDeclarations.h"
struct FConvexNavAreaData
{
	char __padding[0x18L];
	TArray<FVector>& PointsField() { return *GetNativePointerField<TArray<FVector>*>(this, "FConvexNavAreaData.Points"); }
	float& MinZField() { return *GetNativePointerField<float*>(this, "FConvexNavAreaData.MinZ"); }
	float& MaxZField() { return *GetNativePointerField<float*>(this, "FConvexNavAreaData.MaxZ"); }
};

