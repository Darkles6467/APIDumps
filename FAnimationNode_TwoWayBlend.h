#pragma once

#include "BaseDeclarations.h"
#include "FAnimNode_Base.h"

struct FAnimationNode_TwoWayBlend : FAnimNode_Base
{
	char __padding[0x40L];
	FPoseLink& AField() { return *GetNativePointerField<FPoseLink*>(this, "FAnimationNode_TwoWayBlend.A"); }
	FPoseLink& BField() { return *GetNativePointerField<FPoseLink*>(this, "FAnimationNode_TwoWayBlend.B"); }
	float& AlphaField() { return *GetNativePointerField<float*>(this, "FAnimationNode_TwoWayBlend.Alpha"); }
	FInputScaleBias& AlphaScaleBiasField() { return *GetNativePointerField<FInputScaleBias*>(this, "FAnimationNode_TwoWayBlend.AlphaScaleBias"); }

	// Functions

	void Initialize(const FAnimationInitializeContext * Context) { NativeCall<void, const FAnimationInitializeContext *>(this, "FAnimationNode_TwoWayBlend.Initialize", Context); }
	void CacheBones(const FAnimationCacheBonesContext * Context) { NativeCall<void, const FAnimationCacheBonesContext *>(this, "FAnimationNode_TwoWayBlend.CacheBones", Context); }
	void Evaluate(FPoseContext * Output) { NativeCall<void, FPoseContext *>(this, "FAnimationNode_TwoWayBlend.Evaluate", Output); }
	void GatherDebugData(FNodeDebugData * DebugData) { NativeCall<void, FNodeDebugData *>(this, "FAnimationNode_TwoWayBlend.GatherDebugData", DebugData); }
	void Update(const FAnimationUpdateContext * Context) { NativeCall<void, const FAnimationUpdateContext *>(this, "FAnimationNode_TwoWayBlend.Update", Context); }
};

