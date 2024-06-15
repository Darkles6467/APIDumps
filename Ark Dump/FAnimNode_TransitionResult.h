#pragma once

#include "BaseDeclarations.h"
#include "FAnimNode_Base.h"

struct FAnimNode_TransitionResult : FAnimNode_Base
{
	char __padding[0x8L];
	bool& bCanEnterTransitionField() { return *GetNativePointerField<bool*>(this, "FAnimNode_TransitionResult.bCanEnterTransition"); }

	// Functions

	void GatherDebugData(FNodeDebugData * DebugData) { NativeCall<void, FNodeDebugData *>(this, "FAnimNode_TransitionResult.GatherDebugData", DebugData); }
};

