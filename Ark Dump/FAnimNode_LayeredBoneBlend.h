#pragma once

#include "BaseDeclarations.h"
#include "FAnimNode_Base.h"

struct FAnimNode_LayeredBoneBlend : FAnimNode_Base
{
	char __padding[0x70L];
	FPoseLink& BasePoseField() { return *GetNativePointerField<FPoseLink*>(this, "FAnimNode_LayeredBoneBlend.BasePose"); }
	TArray<FPoseLink>& BlendPosesField() { return *GetNativePointerField<TArray<FPoseLink>*>(this, "FAnimNode_LayeredBoneBlend.BlendPoses"); }
	TArray<FInputBlendPose>& LayerSetupField() { return *GetNativePointerField<TArray<FInputBlendPose>*>(this, "FAnimNode_LayeredBoneBlend.LayerSetup"); }
	TArray<float>& BlendWeightsField() { return *GetNativePointerField<TArray<float>*>(this, "FAnimNode_LayeredBoneBlend.BlendWeights"); }
	bool& bMeshSpaceRotationBlendField() { return *GetNativePointerField<bool*>(this, "FAnimNode_LayeredBoneBlend.bMeshSpaceRotationBlend"); }
	TArray<FPerBoneBlendWeight>& DesiredBoneBlendWeightsField() { return *GetNativePointerField<TArray<FPerBoneBlendWeight>*>(this, "FAnimNode_LayeredBoneBlend.DesiredBoneBlendWeights"); }
	TArray<FPerBoneBlendWeight>& CurrentBoneBlendWeightsField() { return *GetNativePointerField<TArray<FPerBoneBlendWeight>*>(this, "FAnimNode_LayeredBoneBlend.CurrentBoneBlendWeights"); }

	// Functions

	void CacheBones(const FAnimationCacheBonesContext * Context) { NativeCall<void, const FAnimationCacheBonesContext *>(this, "FAnimNode_LayeredBoneBlend.CacheBones", Context); }
	void Evaluate(FPoseContext * Output) { NativeCall<void, FPoseContext *>(this, "FAnimNode_LayeredBoneBlend.Evaluate", Output); }
	void GatherDebugData(FNodeDebugData * DebugData) { NativeCall<void, FNodeDebugData *>(this, "FAnimNode_LayeredBoneBlend.GatherDebugData", DebugData); }
	void Initialize(const FAnimationInitializeContext * Context) { NativeCall<void, const FAnimationInitializeContext *>(this, "FAnimNode_LayeredBoneBlend.Initialize", Context); }
	void Update(const FAnimationUpdateContext * Context) { NativeCall<void, const FAnimationUpdateContext *>(this, "FAnimNode_LayeredBoneBlend.Update", Context); }
	FAnimNode_LayeredBoneBlend * operator=(const FAnimNode_LayeredBoneBlend * __that) { return NativeCall<FAnimNode_LayeredBoneBlend *, const FAnimNode_LayeredBoneBlend *>(this, "FAnimNode_LayeredBoneBlend.operator=", __that); }
};

