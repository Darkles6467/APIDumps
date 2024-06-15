#pragma once

#include "BaseDeclarations.h"
struct FPerBoneBlendWeights
{
	char __padding[0x10L];
	TArray<FPerBoneBlendWeight>& BoneBlendWeightsField() { return *GetNativePointerField<TArray<FPerBoneBlendWeight>*>(this, "FPerBoneBlendWeights.BoneBlendWeights"); }

	// Functions

};

