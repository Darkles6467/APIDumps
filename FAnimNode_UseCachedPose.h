#pragma once

#include "BaseDeclarations.h"
#include "FAnimNode_Base.h"

struct FAnimNode_UseCachedPose : FAnimNode_Base
{
	char __padding[0x18L];
	FPoseLink& LinkToCachingNodeField() { return *GetNativePointerField<FPoseLink*>(this, "FAnimNode_UseCachedPose.LinkToCachingNode"); }

	// Functions

	void Initialize(const FAnimationInitializeContext * Context) { NativeCall<void, const FAnimationInitializeContext *>(this, "FAnimNode_UseCachedPose.Initialize", Context); }
	void CacheBones(const FAnimationCacheBonesContext * Context) { NativeCall<void, const FAnimationCacheBonesContext *>(this, "FAnimNode_UseCachedPose.CacheBones", Context); }
	void GatherDebugData(FNodeDebugData * DebugData) { NativeCall<void, FNodeDebugData *>(this, "FAnimNode_UseCachedPose.GatherDebugData", DebugData); }
	void Update(const FAnimationUpdateContext * Context) { NativeCall<void, const FAnimationUpdateContext *>(this, "FAnimNode_UseCachedPose.Update", Context); }
};

