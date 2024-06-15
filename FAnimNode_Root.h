#pragma once

#include "BaseDeclarations.h"
#include "FAnimNode_Base.h"

struct FAnimNode_Root : FAnimNode_Base
{
	char __padding[0x18L];
	FPoseLink& ResultField() { return *GetNativePointerField<FPoseLink*>(this, "FAnimNode_Root.Result"); }

	// Functions

	void Evaluate(FPoseContext * Output) { NativeCall<void, FPoseContext *>(this, "FAnimNode_Root.Evaluate", Output); }
	void GatherDebugData(FNodeDebugData * DebugData) { NativeCall<void, FNodeDebugData *>(this, "FAnimNode_Root.GatherDebugData", DebugData); }
	void Update(const FAnimationUpdateContext * Context) { NativeCall<void, const FAnimationUpdateContext *>(this, "FAnimNode_Root.Update", Context); }
};

