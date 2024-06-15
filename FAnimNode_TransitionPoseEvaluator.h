#pragma once

#include "BaseDeclarations.h"
#include "FAnimNode_Base.h"

struct FAnimNode_TransitionPoseEvaluator : FAnimNode_Base
{
	char __padding[0x20L];
	TEnumAsByte<enum EEvaluatorDataSource::Type>& DataSourceField() { return *GetNativePointerField<TEnumAsByte<enum EEvaluatorDataSource::Type>*>(this, "FAnimNode_TransitionPoseEvaluator.DataSource"); }
	TEnumAsByte<enum EEvaluatorMode::Mode>& EvaluatorModeField() { return *GetNativePointerField<TEnumAsByte<enum EEvaluatorMode::Mode>*>(this, "FAnimNode_TransitionPoseEvaluator.EvaluatorMode"); }
	int& FramesToCachePoseField() { return *GetNativePointerField<int*>(this, "FAnimNode_TransitionPoseEvaluator.FramesToCachePose"); }
	int& CacheFramesRemainingField() { return *GetNativePointerField<int*>(this, "FAnimNode_TransitionPoseEvaluator.CacheFramesRemaining"); }

	// Functions

	void CacheBones(const FAnimationCacheBonesContext * Context) { NativeCall<void, const FAnimationCacheBonesContext *>(this, "FAnimNode_TransitionPoseEvaluator.CacheBones", Context); }
	void Evaluate(FPoseContext * Output) { NativeCall<void, FPoseContext *>(this, "FAnimNode_TransitionPoseEvaluator.Evaluate", Output); }
	void GatherDebugData(FNodeDebugData * DebugData) { NativeCall<void, FNodeDebugData *>(this, "FAnimNode_TransitionPoseEvaluator.GatherDebugData", DebugData); }
	void Initialize(const FAnimationInitializeContext * Context) { NativeCall<void, const FAnimationInitializeContext *>(this, "FAnimNode_TransitionPoseEvaluator.Initialize", Context); }
};

