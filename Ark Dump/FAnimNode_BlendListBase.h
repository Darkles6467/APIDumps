#pragma once

#include "BaseDeclarations.h"
#include "FAnimNode_Base.h"

struct FAnimNode_BlendListBase : FAnimNode_Base
{
	char __padding[0x48L];
	TArray<FPoseLink>& BlendPoseField() { return *GetNativePointerField<TArray<FPoseLink>*>(this, "FAnimNode_BlendListBase.BlendPose"); }
	TArray<float>& BlendTimeField() { return *GetNativePointerField<TArray<float>*>(this, "FAnimNode_BlendListBase.BlendTime"); }
	TArray<float>& BlendWeightsField() { return *GetNativePointerField<TArray<float>*>(this, "FAnimNode_BlendListBase.BlendWeights"); }
	TArray<float>& RemainingBlendTimesField() { return *GetNativePointerField<TArray<float>*>(this, "FAnimNode_BlendListBase.RemainingBlendTimes"); }
	int& LastActiveChildIndexField() { return *GetNativePointerField<int*>(this, "FAnimNode_BlendListBase.LastActiveChildIndex"); }

	// Functions

	void CacheBones(const FAnimationCacheBonesContext * Context) { NativeCall<void, const FAnimationCacheBonesContext *>(this, "FAnimNode_BlendListBase.CacheBones", Context); }
	void Evaluate(FPoseContext * Output) { NativeCall<void, FPoseContext *>(this, "FAnimNode_BlendListBase.Evaluate", Output); }
	void GatherDebugData(FNodeDebugData * DebugData) { NativeCall<void, FNodeDebugData *>(this, "FAnimNode_BlendListBase.GatherDebugData", DebugData); }
	void Initialize(const FAnimationInitializeContext * Context) { NativeCall<void, const FAnimationInitializeContext *>(this, "FAnimNode_BlendListBase.Initialize", Context); }
	void Update(const FAnimationUpdateContext * Context) { NativeCall<void, const FAnimationUpdateContext *>(this, "FAnimNode_BlendListBase.Update", Context); }
	FString * GetNodeName(FString * result, FNodeDebugData * DebugData) { return NativeCall<FString *, FString *, FNodeDebugData *>(this, "FAnimNode_BlendListBase.GetNodeName", result, DebugData); }
};

