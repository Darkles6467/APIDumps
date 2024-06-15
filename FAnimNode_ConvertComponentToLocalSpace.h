#pragma once

#include "BaseDeclarations.h"
#include "FAnimNode_Base.h"

struct FAnimNode_ConvertComponentToLocalSpace : FAnimNode_Base
{
	char __padding[0x18L];
	FComponentSpacePoseLink& ComponentPoseField() { return *GetNativePointerField<FComponentSpacePoseLink*>(this, "FAnimNode_ConvertComponentToLocalSpace.ComponentPose"); }

	// Functions

	void CacheBones(const FAnimationCacheBonesContext * Context) { NativeCall<void, const FAnimationCacheBonesContext *>(this, "FAnimNode_ConvertComponentToLocalSpace.CacheBones", Context); }
	void Evaluate(FPoseContext * Output) { NativeCall<void, FPoseContext *>(this, "FAnimNode_ConvertComponentToLocalSpace.Evaluate", Output); }
	void GatherDebugData(FNodeDebugData * DebugData) { NativeCall<void, FNodeDebugData *>(this, "FAnimNode_ConvertComponentToLocalSpace.GatherDebugData", DebugData); }
	void Update(const FAnimationUpdateContext * Context) { NativeCall<void, const FAnimationUpdateContext *>(this, "FAnimNode_ConvertComponentToLocalSpace.Update", Context); }
};

