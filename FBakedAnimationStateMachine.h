#pragma once

#include "BaseDeclarations.h"
struct FBakedAnimationStateMachine
{
	char __padding[0x30L];
	FName& MachineNameField() { return *GetNativePointerField<FName*>(this, "FBakedAnimationStateMachine.MachineName"); }
	int& InitialStateField() { return *GetNativePointerField<int*>(this, "FBakedAnimationStateMachine.InitialState"); }
	TArray<FBakedAnimationState>& StatesField() { return *GetNativePointerField<TArray<FBakedAnimationState>*>(this, "FBakedAnimationStateMachine.States"); }
	TArray<FAnimationTransitionBetweenStates>& TransitionsField() { return *GetNativePointerField<TArray<FAnimationTransitionBetweenStates>*>(this, "FBakedAnimationStateMachine.Transitions"); }

	// Functions

};

