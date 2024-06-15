#pragma once

#include "BaseDeclarations.h"
struct FBoneReference
{
	char __padding[0xcL];
	FName& BoneNameField() { return *GetNativePointerField<FName*>(this, "FBoneReference.BoneName"); }
	int& BoneIndexField() { return *GetNativePointerField<int*>(this, "FBoneReference.BoneIndex"); }

	// Functions

	bool Initialize(const FBoneContainer * RequiredBones) { return NativeCall<bool, const FBoneContainer *>(this, "FBoneReference.Initialize", RequiredBones); }
	bool Initialize(const USkeleton * Skeleton) { return NativeCall<bool, const USkeleton *>(this, "FBoneReference.Initialize", Skeleton); }
	bool IsValid(const FBoneContainer * RequiredBones) { return NativeCall<bool, const FBoneContainer *>(this, "FBoneReference.IsValid", RequiredBones); }
};

