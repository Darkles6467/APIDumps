#pragma once

#include "BaseDeclarations.h"
#include "FAnimNode_BlendSpacePlayer.h"
#include "FAnimNode_Base.h"

struct FAnimNode_RotationOffsetBlendSpace : FAnimNode_BlendSpacePlayer
{
	char __padding[0x18L];
	FPoseLink& BasePoseField() { return *GetNativePointerField<FPoseLink*>(this, "FAnimNode_RotationOffsetBlendSpace.BasePose"); }

	// Functions

	void CacheBones(const FAnimationCacheBonesContext * Context) { NativeCall<void, const FAnimationCacheBonesContext *>(this, "FAnimNode_RotationOffsetBlendSpace.CacheBones", Context); }
	void Evaluate(FPoseContext * Context) { NativeCall<void, FPoseContext *>(this, "FAnimNode_RotationOffsetBlendSpace.Evaluate", Context); }
	void GatherDebugData(FNodeDebugData * DebugData) { NativeCall<void, FNodeDebugData *>(this, "FAnimNode_RotationOffsetBlendSpace.GatherDebugData", DebugData); }
	void Initialize(const FAnimationInitializeContext * Context) { NativeCall<void, const FAnimationInitializeContext *>(this, "FAnimNode_RotationOffsetBlendSpace.Initialize", Context); }
	void Update(const FAnimationUpdateContext * Context) { NativeCall<void, const FAnimationUpdateContext *>(this, "FAnimNode_RotationOffsetBlendSpace.Update", Context); }
};

