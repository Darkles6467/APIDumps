#pragma once

#include "BaseDeclarations.h"
#include "FAnimNode_SkeletalControlBase.h"
#include "FAnimNode_Base.h"
#include "FBoneTransform.h"

struct FAnimNode_ModifyBone : FAnimNode_SkeletalControlBase
{
	char __padding[0x78L];
	FBoneReference& BoneToModifyField() { return *GetNativePointerField<FBoneReference*>(this, "FAnimNode_ModifyBone.BoneToModify"); }
	FVector& TranslationField() { return *GetNativePointerField<FVector*>(this, "FAnimNode_ModifyBone.Translation"); }
	FRotator& RotationField() { return *GetNativePointerField<FRotator*>(this, "FAnimNode_ModifyBone.Rotation"); }
	FTransform& BoneTransformField() { return *GetNativePointerField<FTransform*>(this, "FAnimNode_ModifyBone.BoneTransform"); }
	bool& bUseRotationTransformField() { return *GetNativePointerField<bool*>(this, "FAnimNode_ModifyBone.bUseRotationTransform"); }
	bool& bIgnoreOnDedicatedServerField() { return *GetNativePointerField<bool*>(this, "FAnimNode_ModifyBone.bIgnoreOnDedicatedServer"); }
	bool& bAllowUpdatingOutsideOfGameWorldField() { return *GetNativePointerField<bool*>(this, "FAnimNode_ModifyBone.bAllowUpdatingOutsideOfGameWorld"); }
	FVector& ScaleField() { return *GetNativePointerField<FVector*>(this, "FAnimNode_ModifyBone.Scale"); }
	TEnumAsByte<enum EBoneModificationMode>& TranslationModeField() { return *GetNativePointerField<TEnumAsByte<enum EBoneModificationMode>*>(this, "FAnimNode_ModifyBone.TranslationMode"); }
	TEnumAsByte<enum EBoneModificationMode>& RotationModeField() { return *GetNativePointerField<TEnumAsByte<enum EBoneModificationMode>*>(this, "FAnimNode_ModifyBone.RotationMode"); }
	TEnumAsByte<enum EBoneModificationMode>& ScaleModeField() { return *GetNativePointerField<TEnumAsByte<enum EBoneModificationMode>*>(this, "FAnimNode_ModifyBone.ScaleMode"); }
	TEnumAsByte<enum EBoneControlSpace>& TranslationSpaceField() { return *GetNativePointerField<TEnumAsByte<enum EBoneControlSpace>*>(this, "FAnimNode_ModifyBone.TranslationSpace"); }
	TEnumAsByte<enum EBoneControlSpace>& RotationSpaceField() { return *GetNativePointerField<TEnumAsByte<enum EBoneControlSpace>*>(this, "FAnimNode_ModifyBone.RotationSpace"); }
	TEnumAsByte<enum EBoneControlSpace>& ScaleSpaceField() { return *GetNativePointerField<TEnumAsByte<enum EBoneControlSpace>*>(this, "FAnimNode_ModifyBone.ScaleSpace"); }

	// Functions

	void EvaluateBoneTransforms(USkeletalMeshComponent * SkelComp, const FBoneContainer * RequiredBones, FA2CSPose * MeshBases, TArray<FBoneTransform> * OutBoneTransforms) { NativeCall<void, USkeletalMeshComponent *, const FBoneContainer *, FA2CSPose *, TArray<FBoneTransform> *>(this, "FAnimNode_ModifyBone.EvaluateBoneTransforms", SkelComp, RequiredBones, MeshBases, OutBoneTransforms); }
	void EvaluateComponentSpace(FComponentSpacePoseContext * Output) { NativeCall<void, FComponentSpacePoseContext *>(this, "FAnimNode_ModifyBone.EvaluateComponentSpace", Output); }
	void GatherDebugData(FNodeDebugData * DebugData) { NativeCall<void, FNodeDebugData *>(this, "FAnimNode_ModifyBone.GatherDebugData", DebugData); }
	bool IsValidToEvaluate(const USkeleton * Skeleton, const FBoneContainer * RequiredBones) { return NativeCall<bool, const USkeleton *, const FBoneContainer *>(this, "FAnimNode_ModifyBone.IsValidToEvaluate", Skeleton, RequiredBones); }
	void ModifyBonesEvaluateBoneTransforms(USkeletalMeshComponent * SkelComp, const FBoneContainer * RequiredBones, FA2CSPose * MeshBases, TArray<FBoneTransform> * OutBoneTransforms) { NativeCall<void, USkeletalMeshComponent *, const FBoneContainer *, FA2CSPose *, TArray<FBoneTransform> *>(this, "FAnimNode_ModifyBone.ModifyBonesEvaluateBoneTransforms", SkelComp, RequiredBones, MeshBases, OutBoneTransforms); }
	FAnimNode_ModifyBone * operator=(const FAnimNode_ModifyBone * __that) { return NativeCall<FAnimNode_ModifyBone *, const FAnimNode_ModifyBone *>(this, "FAnimNode_ModifyBone.operator=", __that); }
};

