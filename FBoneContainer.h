#pragma once

#include "BaseDeclarations.h"
struct FBoneContainer
{
	char __padding[0x78L];
	TArray<unsigned short>& BoneIndicesArrayField() { return *GetNativePointerField<TArray<unsigned short>*>(this, "FBoneContainer.BoneIndicesArray"); }
	TWeakObjectPtr<USkeleton>& AssetSkeletonField() { return *GetNativePointerField<TWeakObjectPtr<USkeleton>*>(this, "FBoneContainer.AssetSkeleton"); }
	const FReferenceSkeleton * RefSkeletonField() { return GetNativePointerField<const FReferenceSkeleton *>(this, "FBoneContainer.RefSkeleton"); }
	TArray<int>& SkeletonToPoseBoneIndexArrayField() { return *GetNativePointerField<TArray<int>*>(this, "FBoneContainer.SkeletonToPoseBoneIndexArray"); }
	TArray<int>& PoseToSkeletonBoneIndexArrayField() { return *GetNativePointerField<TArray<int>*>(this, "FBoneContainer.PoseToSkeletonBoneIndexArray"); }
	bool& bDisableRetargetingField() { return *GetNativePointerField<bool*>(this, "FBoneContainer.bDisableRetargeting"); }
	bool& bUseRAWDataField() { return *GetNativePointerField<bool*>(this, "FBoneContainer.bUseRAWData"); }

	// Functions

	bool BoneIsChildOf(const int * BoneIndex, const int * ParentBoneIndex) { return NativeCall<bool, const int *, const int *>(this, "FBoneContainer.BoneIsChildOf", BoneIndex, ParentBoneIndex); }
	int GetDepthBetweenBones(const int * BoneIndex, const int * ParentBoneIndex) { return NativeCall<int, const int *, const int *>(this, "FBoneContainer.GetDepthBetweenBones", BoneIndex, ParentBoneIndex); }
	int GetParentBoneIndex(const int * BoneIndex) { return NativeCall<int, const int *>(this, "FBoneContainer.GetParentBoneIndex", BoneIndex); }
	int GetPoseBoneIndexForBoneName(const FName * BoneName) { return NativeCall<int, const FName *>(this, "FBoneContainer.GetPoseBoneIndexForBoneName", BoneName); }
	void Initialize() { NativeCall<void>(this, "FBoneContainer.Initialize"); }
	void InitializeTo(const TArray<unsigned short> * InRequiredBoneIndexArray, UObject * InAsset) { NativeCall<void, const TArray<unsigned short> *, UObject *>(this, "FBoneContainer.InitializeTo", InRequiredBoneIndexArray, InAsset); }
	void RemapFromSkeleton(const USkeleton * SourceSkeleton) { NativeCall<void, const USkeleton *>(this, "FBoneContainer.RemapFromSkeleton", SourceSkeleton); }
	bool IsValid() { return NativeCall<bool>(this, "FBoneContainer.IsValid"); }
};

