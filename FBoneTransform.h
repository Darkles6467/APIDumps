#pragma once

#include "BaseDeclarations.h"
struct FBoneTransform
{
	char __padding[0x40L];
	int& BoneIndexField() { return *GetNativePointerField<int*>(this, "FBoneTransform.BoneIndex"); }
	FTransform& TransformField() { return *GetNativePointerField<FTransform*>(this, "FBoneTransform.Transform"); }

	// Functions

};

