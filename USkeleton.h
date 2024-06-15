#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct USkeleton : UObject
{
	char __padding[0x288L];
	TArray<FBoneNode>& BoneTreeField() { return *GetNativePointerField<TArray<FBoneNode>*>(this, "USkeleton.BoneTree"); }
	TArray<FTransform>& RefLocalPoses_DEPRECATEDField() { return *GetNativePointerField<TArray<FTransform>*>(this, "USkeleton.RefLocalPoses_DEPRECATED"); }
	FReferenceSkeleton& ReferenceSkeletonField() { return *GetNativePointerField<FReferenceSkeleton*>(this, "USkeleton.ReferenceSkeleton"); }
	FGuid& GuidField() { return *GetNativePointerField<FGuid*>(this, "USkeleton.Guid"); }
	TArray<FSkeletonToMeshLinkup>& LinkupCacheField() { return *GetNativePointerField<TArray<FSkeletonToMeshLinkup>*>(this, "USkeleton.LinkupCache"); }
	FSmartNameContainer& SmartNamesField() { return *GetNativePointerField<FSmartNameContainer*>(this, "USkeleton.SmartNames"); }
	bool& bBuiltSocketMapField() { return *GetNativePointerField<bool*>(this, "USkeleton.bBuiltSocketMap"); }
	TArray<FAnimSlotGroup>& SlotGroupsField() { return *GetNativePointerField<TArray<FAnimSlotGroup>*>(this, "USkeleton.SlotGroups"); }

	// Functions

	const TArray<FTransform> * GetRefLocalPoses(FName RetargetSource) { return NativeCall<const TArray<FTransform> *, FName>(this, "USkeleton.GetRefLocalPoses", RetargetSource); }
	int BuildLinkup(const USkeletalMesh * InSkelMesh) { return NativeCall<int, const USkeletalMesh *>(this, "USkeleton.BuildLinkup", InSkelMesh); }
	void BuildSlotToGroupMap() { NativeCall<void>(this, "USkeleton.BuildSlotToGroupMap"); }
	bool ContainsSlotName(const FName * InSlotName) { return NativeCall<bool, const FName *>(this, "USkeleton.ContainsSlotName", InSlotName); }
	void ConvertToFReferenceSkeleton() { NativeCall<void>(this, "USkeleton.ConvertToFReferenceSkeleton"); }
	int GetAnimationTrackIndex(const int * InSkeletonBoneIndex, const UAnimSequence * InAnimSeq) { return NativeCall<int, const int *, const UAnimSequence *>(this, "USkeleton.GetAnimationTrackIndex", InSkeletonBoneIndex, InAnimSeq); }
	int GetMeshLinkupIndex(const USkeletalMesh * InSkelMesh) { return NativeCall<int, const USkeletalMesh *>(this, "USkeleton.GetMeshLinkupIndex", InSkelMesh); }
	FName * GetSlotGroupName(FName * result, const FName * InSlotName) { return NativeCall<FName *, FName *, const FName *>(this, "USkeleton.GetSlotGroupName", result, InSlotName); }
	void PostDuplicate(bool bDuplicateForPIE) { NativeCall<void, bool>(this, "USkeleton.PostDuplicate", bDuplicateForPIE); }
	void PostInitProperties() { NativeCall<void>(this, "USkeleton.PostInitProperties"); }
	void PostLoad() { NativeCall<void>(this, "USkeleton.PostLoad"); }
	void RegisterSlotNode(const FName * InSlotName) { NativeCall<void, const FName *>(this, "USkeleton.RegisterSlotNode", InSlotName); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "USkeleton.Serialize", Ar); }
	void SetSlotGroupName(const FName * InSlotName, const FName * InGroupName) { NativeCall<void, const FName *, const FName *>(this, "USkeleton.SetSlotGroupName", InSlotName, InGroupName); }
};

