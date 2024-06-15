#pragma once

#include "BaseDeclarations.h"
#include "FAnimationStateBase.h"

struct FAnimationState : FAnimationStateBase
{
	char __padding[0x20L];
	TArray<FAnimationTransitionRule>& TransitionsField() { return *GetNativePointerField<TArray<FAnimationTransitionRule>*>(this, "FAnimationState.Transitions"); }
	int& StateRootNodeIndexField() { return *GetNativePointerField<int*>(this, "FAnimationState.StateRootNodeIndex"); }
	int& StartNotifyField() { return *GetNativePointerField<int*>(this, "FAnimationState.StartNotify"); }
	int& EndNotifyField() { return *GetNativePointerField<int*>(this, "FAnimationState.EndNotify"); }
	int& FullyBlendedNotifyField() { return *GetNativePointerField<int*>(this, "FAnimationState.FullyBlendedNotify"); }

	// Functions

};

