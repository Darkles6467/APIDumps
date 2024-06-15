#pragma once

#include "BaseDeclarations.h"
struct FAnimationTransitionRule
{
	char __padding[0x10L];
	FName& RuleToExecuteField() { return *GetNativePointerField<FName*>(this, "FAnimationTransitionRule.RuleToExecute"); }
	bool& TransitionReturnValField() { return *GetNativePointerField<bool*>(this, "FAnimationTransitionRule.TransitionReturnVal"); }
	int& TransitionIndexField() { return *GetNativePointerField<int*>(this, "FAnimationTransitionRule.TransitionIndex"); }

	// Functions

};

