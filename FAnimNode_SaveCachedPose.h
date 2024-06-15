#pragma once

#include "BaseDeclarations.h"
#include "FAnimNode_Base.h"

struct FAnimNode_SaveCachedPose : FAnimNode_Base
{
	char __padding[0x30L];
	__int16& LastInitializedContextCounterField() { return *GetNativePointerField<__int16*>(this, "FAnimNode_SaveCachedPose.LastInitializedContextCounter"); }
	__int16& LastCacheBonesContextCounterField() { return *GetNativePointerField<__int16*>(this, "FAnimNode_SaveCachedPose.LastCacheBonesContextCounter"); }
	__int16& LastUpdatedContextCounterField() { return *GetNativePointerField<__int16*>(this, "FAnimNode_SaveCachedPose.LastUpdatedContextCounter"); }
	__int16& LastEvaluatedContextCounterField() { return *GetNativePointerField<__int16*>(this, "FAnimNode_SaveCachedPose.LastEvaluatedContextCounter"); }
	FPoseLink& PoseField() { return *GetNativePointerField<FPoseLink*>(this, "FAnimNode_SaveCachedPose.Pose"); }

	// Functions

	void CacheBones(const FAnimationCacheBonesContext * Context) { NativeCall<void, const FAnimationCacheBonesContext *>(this, "FAnimNode_SaveCachedPose.CacheBones", Context); }
	void Evaluate(FPoseContext * Output) { NativeCall<void, FPoseContext *>(this, "FAnimNode_SaveCachedPose.Evaluate", Output); }
	void GatherDebugData(FNodeDebugData * DebugData) { NativeCall<void, FNodeDebugData *>(this, "FAnimNode_SaveCachedPose.GatherDebugData", DebugData); }
	void Initialize(const FAnimationInitializeContext * Context) { NativeCall<void, const FAnimationInitializeContext *>(this, "FAnimNode_SaveCachedPose.Initialize", Context); }
	void Update(const FAnimationUpdateContext * Context) { NativeCall<void, const FAnimationUpdateContext *>(this, "FAnimNode_SaveCachedPose.Update", Context); }
};

