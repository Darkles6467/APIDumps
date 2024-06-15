#pragma once

#include "BaseDeclarations.h"
#include "FAnimNode_Base.h"

struct FAnimNode_SkeletalControlBase : FAnimNode_Base
{
	char __padding[0x28L];
	FComponentSpacePoseLink& ComponentPoseField() { return *GetNativePointerField<FComponentSpacePoseLink*>(this, "FAnimNode_SkeletalControlBase.ComponentPose"); }
	float& AlphaField() { return *GetNativePointerField<float*>(this, "FAnimNode_SkeletalControlBase.Alpha"); }
	FInputScaleBias& AlphaScaleBiasField() { return *GetNativePointerField<FInputScaleBias*>(this, "FAnimNode_SkeletalControlBase.AlphaScaleBias"); }

	// Functions

	void AddDebugNodeData(FString * OutDebugData) { NativeCall<void, FString *>(this, "FAnimNode_SkeletalControlBase.AddDebugNodeData", OutDebugData); }
	void CacheBones(const FAnimationCacheBonesContext * Context) { NativeCall<void, const FAnimationCacheBonesContext *>(this, "FAnimNode_SkeletalControlBase.CacheBones", Context); }
	void EvaluateComponentSpace(FComponentSpacePoseContext * Output) { NativeCall<void, FComponentSpacePoseContext *>(this, "FAnimNode_SkeletalControlBase.EvaluateComponentSpace", Output); }
	void Update(const FAnimationUpdateContext * Context) { NativeCall<void, const FAnimationUpdateContext *>(this, "FAnimNode_SkeletalControlBase.Update", Context); }
};

