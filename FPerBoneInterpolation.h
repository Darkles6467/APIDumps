#pragma once

#include "BaseDeclarations.h"
struct FPerBoneInterpolation
{
	char __padding[0x10L];
	FBoneReference& BoneReferenceField() { return *GetNativePointerField<FBoneReference*>(this, "FPerBoneInterpolation.BoneReference"); }
	float& InterpolationSpeedPerSecField() { return *GetNativePointerField<float*>(this, "FPerBoneInterpolation.InterpolationSpeedPerSec"); }

	// Functions

};

