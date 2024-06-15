#pragma once

#include "BaseDeclarations.h"
#include "FAnimNode_Base.h"

struct FAnimNode_SequenceEvaluator : FAnimNode_Base
{
	char __padding[0x10L];
	float& ExplicitTimeField() { return *GetNativePointerField<float*>(this, "FAnimNode_SequenceEvaluator.ExplicitTime"); }

	// Functions

	void Evaluate(FPoseContext * Output) { NativeCall<void, FPoseContext *>(this, "FAnimNode_SequenceEvaluator.Evaluate", Output); }
	void GatherDebugData(FNodeDebugData * DebugData) { NativeCall<void, FNodeDebugData *>(this, "FAnimNode_SequenceEvaluator.GatherDebugData", DebugData); }
	void Update(const FAnimationUpdateContext * Context) { NativeCall<void, const FAnimationUpdateContext *>(this, "FAnimNode_SequenceEvaluator.Update", Context); }
};

