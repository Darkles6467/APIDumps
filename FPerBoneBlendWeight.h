#pragma once

#include "BaseDeclarations.h"
struct FPerBoneBlendWeight
{
	char __padding[0x8L];
	int& SourceIndexField() { return *GetNativePointerField<int*>(this, "FPerBoneBlendWeight.SourceIndex"); }
	float& BlendWeightField() { return *GetNativePointerField<float*>(this, "FPerBoneBlendWeight.BlendWeight"); }

	// Functions

};

