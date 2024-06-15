#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UAnimSet : UObject
{
	char __padding[0xc8L];
	TArray<FName>& TrackBoneNamesField() { return *GetNativePointerField<TArray<FName>*>(this, "UAnimSet.TrackBoneNames"); }
	TArray<FAnimSetMeshLinkup>& LinkupCacheField() { return *GetNativePointerField<TArray<FAnimSetMeshLinkup>*>(this, "UAnimSet.LinkupCache"); }
	TArray<unsigned char>& BoneUseAnimTranslationField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "UAnimSet.BoneUseAnimTranslation"); }
	TArray<unsigned char>& ForceUseMeshTranslationField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "UAnimSet.ForceUseMeshTranslation"); }
	TArray<FName>& UseTranslationBoneNamesField() { return *GetNativePointerField<TArray<FName>*>(this, "UAnimSet.UseTranslationBoneNames"); }
	TArray<FName>& ForceMeshTranslationBoneNamesField() { return *GetNativePointerField<TArray<FName>*>(this, "UAnimSet.ForceMeshTranslationBoneNames"); }
	FName& PreviewSkelMeshNameField() { return *GetNativePointerField<FName*>(this, "UAnimSet.PreviewSkelMeshName"); }
	FName& BestRatioSkelMeshNameField() { return *GetNativePointerField<FName*>(this, "UAnimSet.BestRatioSkelMeshName"); }

	// Functions

	int GetMeshLinkupIndex(USkeletalMesh * SkelMesh) { return NativeCall<int, USkeletalMesh *>(this, "UAnimSet.GetMeshLinkupIndex", SkelMesh); }
};

