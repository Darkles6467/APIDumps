#pragma once

#include "BaseDeclarations.h"
#include "FAnimNode_BlendSpacePlayer.h"
#include "FAnimNode_Base.h"

struct FAnimNode_BlendSpaceEvaluator : FAnimNode_BlendSpacePlayer
{
	char __padding[0x8L];
	float& NormalizedTimeField() { return *GetNativePointerField<float*>(this, "FAnimNode_BlendSpaceEvaluator.NormalizedTime"); }

	// Functions

	void GatherDebugData(FNodeDebugData * DebugData) { NativeCall<void, FNodeDebugData *>(this, "FAnimNode_BlendSpaceEvaluator.GatherDebugData", DebugData); }
	void Update(const FAnimationUpdateContext * Context) { NativeCall<void, const FAnimationUpdateContext *>(this, "FAnimNode_BlendSpaceEvaluator.Update", Context); }
};

