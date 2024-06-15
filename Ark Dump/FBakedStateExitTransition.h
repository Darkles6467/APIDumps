#pragma once

#include "BaseDeclarations.h"
struct FBakedStateExitTransition
{
	char __padding[0x20L];
	int& CustomResultNodeIndexField() { return *GetNativePointerField<int*>(this, "FBakedStateExitTransition.CustomResultNodeIndex"); }
	int& TransitionIndexField() { return *GetNativePointerField<int*>(this, "FBakedStateExitTransition.TransitionIndex"); }
	bool& bDesiredTransitionReturnValueField() { return *GetNativePointerField<bool*>(this, "FBakedStateExitTransition.bDesiredTransitionReturnValue"); }
	TArray<int>& PoseEvaluatorLinksField() { return *GetNativePointerField<TArray<int>*>(this, "FBakedStateExitTransition.PoseEvaluatorLinks"); }

	// Functions

};

