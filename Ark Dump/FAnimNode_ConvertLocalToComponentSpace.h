#pragma once

#include "BaseDeclarations.h"
#include "FAnimNode_Base.h"

struct FAnimNode_ConvertLocalToComponentSpace : FAnimNode_Base
{
	char __padding[0x18L];
	FPoseLink& LocalPoseField() { return *GetNativePointerField<FPoseLink*>(this, "FAnimNode_ConvertLocalToComponentSpace.LocalPose"); }

	// Functions

	void CacheBones(const FAnimationCacheBonesContext * Context) { NativeCall<void, const FAnimationCacheBonesContext *>(this, "FAnimNode_ConvertLocalToComponentSpace.CacheBones", Context); }
	void EvaluateComponentSpace(FComponentSpacePoseContext * OutputCSPose) { NativeCall<void, FComponentSpacePoseContext *>(this, "FAnimNode_ConvertLocalToComponentSpace.EvaluateComponentSpace", OutputCSPose); }
	void GatherDebugData(FNodeDebugData * DebugData) { NativeCall<void, FNodeDebugData *>(this, "FAnimNode_ConvertLocalToComponentSpace.GatherDebugData", DebugData); }
	void Update(const FAnimationUpdateContext * Context) { NativeCall<void, const FAnimationUpdateContext *>(this, "FAnimNode_ConvertLocalToComponentSpace.Update", Context); }
};

