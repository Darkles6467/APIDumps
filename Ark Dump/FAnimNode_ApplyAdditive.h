#pragma once

#include "BaseDeclarations.h"
#include "FAnimNode_Base.h"

struct FAnimNode_ApplyAdditive : FAnimNode_Base
{
	char __padding[0x40L];
	FPoseLink& BaseField() { return *GetNativePointerField<FPoseLink*>(this, "FAnimNode_ApplyAdditive.Base"); }
	FPoseLink& AdditiveField() { return *GetNativePointerField<FPoseLink*>(this, "FAnimNode_ApplyAdditive.Additive"); }
	float& AlphaField() { return *GetNativePointerField<float*>(this, "FAnimNode_ApplyAdditive.Alpha"); }
	FInputScaleBias& AlphaScaleBiasField() { return *GetNativePointerField<FInputScaleBias*>(this, "FAnimNode_ApplyAdditive.AlphaScaleBias"); }

	// Functions

	void CacheBones(const FAnimationCacheBonesContext * Context) { NativeCall<void, const FAnimationCacheBonesContext *>(this, "FAnimNode_ApplyAdditive.CacheBones", Context); }
	void Evaluate(FPoseContext * Output) { NativeCall<void, FPoseContext *>(this, "FAnimNode_ApplyAdditive.Evaluate", Output); }
	void GatherDebugData(FNodeDebugData * DebugData) { NativeCall<void, FNodeDebugData *>(this, "FAnimNode_ApplyAdditive.GatherDebugData", DebugData); }
	void Update(const FAnimationUpdateContext * Context) { NativeCall<void, const FAnimationUpdateContext *>(this, "FAnimNode_ApplyAdditive.Update", Context); }
};

