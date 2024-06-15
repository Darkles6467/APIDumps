#pragma once

#include "BaseDeclarations.h"
#include "FAnimNode_SkeletalControlBase.h"
#include "FAnimNode_Base.h"
#include "FBoneTransform.h"

struct FAnimNode_WheelHandler : FAnimNode_SkeletalControlBase
{
	char __padding[0x18L];
	TArray<FWheelSimulator>& WheelSimulatorsField() { return *GetNativePointerField<TArray<FWheelSimulator>*>(this, "FAnimNode_WheelHandler.WheelSimulators"); }

	// Functions

	void EvaluateBoneTransforms(USkeletalMeshComponent * SkelComp, const FBoneContainer * RequiredBones, FA2CSPose * MeshBases, TArray<FBoneTransform> * OutBoneTransforms) { NativeCall<void, USkeletalMeshComponent *, const FBoneContainer *, FA2CSPose *, TArray<FBoneTransform> *>(this, "FAnimNode_WheelHandler.EvaluateBoneTransforms", SkelComp, RequiredBones, MeshBases, OutBoneTransforms); }
	void GatherDebugData(FNodeDebugData * DebugData) { NativeCall<void, FNodeDebugData *>(this, "FAnimNode_WheelHandler.GatherDebugData", DebugData); }
	void Initialize(const FAnimationInitializeContext * Context) { NativeCall<void, const FAnimationInitializeContext *>(this, "FAnimNode_WheelHandler.Initialize", Context); }
	void InitializeBoneReferences(const FBoneContainer * RequiredBones) { NativeCall<void, const FBoneContainer *>(this, "FAnimNode_WheelHandler.InitializeBoneReferences", RequiredBones); }
	bool IsValidToEvaluate(const USkeleton * Skeleton, const FBoneContainer * RequiredBones) { return NativeCall<bool, const USkeleton *, const FBoneContainer *>(this, "FAnimNode_WheelHandler.IsValidToEvaluate", Skeleton, RequiredBones); }
	void Update(const FAnimationUpdateContext * Context) { NativeCall<void, const FAnimationUpdateContext *>(this, "FAnimNode_WheelHandler.Update", Context); }
};

