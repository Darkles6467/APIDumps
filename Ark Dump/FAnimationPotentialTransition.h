#pragma once

#include "BaseDeclarations.h"
struct FAnimationPotentialTransition
{
	char __padding[0x10L];
	int& TargetStateField() { return *GetNativePointerField<int*>(this, "FAnimationPotentialTransition.TargetState"); }
	const FBakedStateExitTransition * TransitionRuleField() { return GetNativePointerField<const FBakedStateExitTransition *>(this, "FAnimationPotentialTransition.TransitionRule"); }

	// Functions

};

