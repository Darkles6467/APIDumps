#pragma once

#include "BaseDeclarations.h"
#include "FAnimNode_SkeletalControlBase.h"
#include "FAnimNode_Base.h"
#include "FBoneTransform.h"

struct FAnimNode_Fabrik : FAnimNode_SkeletalControlBase
{
	char __padding[0x78L];
	FTransform& EffectorTransformField() { return *GetNativePointerField<FTransform*>(this, "FAnimNode_Fabrik.EffectorTransform"); }
	TEnumAsByte<enum EBoneControlSpace>& EffectorTransformSpaceField() { return *GetNativePointerField<TEnumAsByte<enum EBoneControlSpace>*>(this, "FAnimNode_Fabrik.EffectorTransformSpace"); }
	FBoneReference& EffectorTransformBoneField() { return *GetNativePointerField<FBoneReference*>(this, "FAnimNode_Fabrik.EffectorTransformBone"); }
	TEnumAsByte<enum EBoneRotationSource>& EffectorRotationSourceField() { return *GetNativePointerField<TEnumAsByte<enum EBoneRotationSource>*>(this, "FAnimNode_Fabrik.EffectorRotationSource"); }
	FBoneReference& TipBoneField() { return *GetNativePointerField<FBoneReference*>(this, "FAnimNode_Fabrik.TipBone"); }
	FBoneReference& RootBoneField() { return *GetNativePointerField<FBoneReference*>(this, "FAnimNode_Fabrik.RootBone"); }
	float& PrecisionField() { return *GetNativePointerField<float*>(this, "FAnimNode_Fabrik.Precision"); }
	int& MaxIterationsField() { return *GetNativePointerField<int*>(this, "FAnimNode_Fabrik.MaxIterations"); }
	bool& bEnableDebugDrawField() { return *GetNativePointerField<bool*>(this, "FAnimNode_Fabrik.bEnableDebugDraw"); }

	// Functions

	void EvaluateBoneTransforms(USkeletalMeshComponent * SkelComp, const FBoneContainer * RequiredBones, FA2CSPose * MeshBases, TArray<FBoneTransform> * OutBoneTransforms) { NativeCall<void, USkeletalMeshComponent *, const FBoneContainer *, FA2CSPose *, TArray<FBoneTransform> *>(this, "FAnimNode_Fabrik.EvaluateBoneTransforms", SkelComp, RequiredBones, MeshBases, OutBoneTransforms); }
	void InitializeBoneReferences(const FBoneContainer * RequiredBones) { NativeCall<void, const FBoneContainer *>(this, "FAnimNode_Fabrik.InitializeBoneReferences", RequiredBones); }
	bool IsValidToEvaluate(const USkeleton * Skeleton, const FBoneContainer * RequiredBones) { return NativeCall<bool, const USkeleton *, const FBoneContainer *>(this, "FAnimNode_Fabrik.IsValidToEvaluate", Skeleton, RequiredBones); }
};

