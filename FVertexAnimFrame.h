#pragma once

#include "BaseDeclarations.h"
struct FVertexAnimFrame
{
	char __padding[0x18L];
	float& TimeField() { return *GetNativePointerField<float*>(this, "FVertexAnimFrame.Time"); }
	TArray<FVector>& DeltasField() { return *GetNativePointerField<TArray<FVector>*>(this, "FVertexAnimFrame.Deltas"); }
};

