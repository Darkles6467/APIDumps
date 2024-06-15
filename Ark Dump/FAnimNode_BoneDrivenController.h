#pragma once

#include "BaseDeclarations.h"
#include "FAnimNode_SkeletalControlBase.h"
#include "FAnimNode_Base.h"
#include "FBoneTransform.h"

struct FAnimNode_BoneDrivenController : FAnimNode_SkeletalControlBase
{
	char __padding[0x30L];
	FBoneReference& SourceBoneField() { return *GetNativePointerField<FBoneReference*>(this, "FAnimNode_BoneDrivenController.SourceBone"); }
	FBoneReference& TargetBoneField() { return *GetNativePointerField<FBoneReference*>(this, "FAnimNode_BoneDrivenController.TargetBone"); }
	TEnumAsByte<enum EComponentType::Type>& SourceComponentField() { return *GetNativePointerField<TEnumAsByte<enum EComponentType::Type>*>(this, "FAnimNode_BoneDrivenController.SourceComponent"); }
	TEnumAsByte<enum EComponentType::Type>& TargetComponentField() { return *GetNativePointerField<TEnumAsByte<enum EComponentType::Type>*>(this, "FAnimNode_BoneDrivenController.TargetComponent"); }
	float& MultiplierField() { return *GetNativePointerField<float*>(this, "FAnimNode_BoneDrivenController.Multiplier"); }
	bool& bUseRangeField() { return *GetNativePointerField<bool*>(this, "FAnimNode_BoneDrivenController.bUseRange"); }
	float& RangeMinField() { return *GetNativePointerField<float*>(this, "FAnimNode_BoneDrivenController.RangeMin"); }
	float& RangeMaxField() { return *GetNativePointerField<float*>(this, "FAnimNode_BoneDrivenController.RangeMax"); }

	// Functions

	void EvaluateBoneTransforms(USkeletalMeshComponent * SkelComp, const FBoneContainer * RequiredBones, FA2CSPose * MeshBases, TArray<FBoneTransform> * OutBoneTransforms) { NativeCall<void, USkeletalMeshComponent *, const FBoneContainer *, FA2CSPose *, TArray<FBoneTransform> *>(this, "FAnimNode_BoneDrivenController.EvaluateBoneTransforms", SkelComp, RequiredBones, MeshBases, OutBoneTransforms); }
	void GatherDebugData(FNodeDebugData * DebugData) { NativeCall<void, FNodeDebugData *>(this, "FAnimNode_BoneDrivenController.GatherDebugData", DebugData); }
	void InitializeBoneReferences(const FBoneContainer * RequiredBones) { NativeCall<void, const FBoneContainer *>(this, "FAnimNode_BoneDrivenController.InitializeBoneReferences", RequiredBones); }
	bool IsValidToEvaluate(const USkeleton * Skeleton, const FBoneContainer * RequiredBones) { return NativeCall<bool, const USkeleton *, const FBoneContainer *>(this, "FAnimNode_BoneDrivenController.IsValidToEvaluate", Skeleton, RequiredBones); }
};

