#pragma once

#include "BaseDeclarations.h"
struct FABRIKChainLink
{
	char __padding[0x28L];
	FVector& PositionField() { return *GetNativePointerField<FVector*>(this, "FABRIKChainLink.Position"); }
	float& LengthField() { return *GetNativePointerField<float*>(this, "FABRIKChainLink.Length"); }
	int& BoneIndexField() { return *GetNativePointerField<int*>(this, "FABRIKChainLink.BoneIndex"); }
	int& TransformIndexField() { return *GetNativePointerField<int*>(this, "FABRIKChainLink.TransformIndex"); }
	TArray<int>& ChildZeroLengthTransformIndicesField() { return *GetNativePointerField<TArray<int>*>(this, "FABRIKChainLink.ChildZeroLengthTransformIndices"); }

	// Functions

};

