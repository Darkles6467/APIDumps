#pragma once

#include "BaseDeclarations.h"
#include "FAnimNode_Base.h"

struct FAnimNode_StateMachine : FAnimNode_Base
{
	char __padding[0x50L];
	int& StateMachineIndexInClassField() { return *GetNativePointerField<int*>(this, "FAnimNode_StateMachine.StateMachineIndexInClass"); }
	int& MaxTransitionsPerFrameField() { return *GetNativePointerField<int*>(this, "FAnimNode_StateMachine.MaxTransitionsPerFrame"); }
	FBakedAnimationStateMachine * PRIVATE_MachineDescriptionField() { return GetNativePointerField<FBakedAnimationStateMachine *>(this, "FAnimNode_StateMachine.PRIVATE_MachineDescription"); }
	int& CurrentStateField() { return *GetNativePointerField<int*>(this, "FAnimNode_StateMachine.CurrentState"); }
	float& ElapsedTimeField() { return *GetNativePointerField<float*>(this, "FAnimNode_StateMachine.ElapsedTime"); }
	int& EvaluatingTransitionIndexField() { return *GetNativePointerField<int*>(this, "FAnimNode_StateMachine.EvaluatingTransitionIndex"); }
	TArray<FAnimationActiveTransitionEntry>& ActiveTransitionArrayField() { return *GetNativePointerField<TArray<FAnimationActiveTransitionEntry>*>(this, "FAnimNode_StateMachine.ActiveTransitionArray"); }
	TArray<FPoseLink>& StatePoseLinksField() { return *GetNativePointerField<TArray<FPoseLink>*>(this, "FAnimNode_StateMachine.StatePoseLinks"); }
	TArray<int>& StatesUpdatedField() { return *GetNativePointerField<TArray<int>*>(this, "FAnimNode_StateMachine.StatesUpdated"); }

	// Functions

	void CacheBones(const FAnimationCacheBonesContext * Context) { NativeCall<void, const FAnimationCacheBonesContext *>(this, "FAnimNode_StateMachine.CacheBones", Context); }
	void Evaluate(FPoseContext * Output) { NativeCall<void, FPoseContext *>(this, "FAnimNode_StateMachine.Evaluate", Output); }
	void EvaluateState(int StateIndex, FPoseContext * Output) { NativeCall<void, int, FPoseContext *>(this, "FAnimNode_StateMachine.EvaluateState", StateIndex, Output); }
	void EvaluateTransitionCustomBlend(FPoseContext * Output, FAnimationActiveTransitionEntry * Transition, bool bIntermediatePoseIsValid) { NativeCall<void, FPoseContext *, FAnimationActiveTransitionEntry *, bool>(this, "FAnimNode_StateMachine.EvaluateTransitionCustomBlend", Output, Transition, bIntermediatePoseIsValid); }
	void EvaluateTransitionStandardBlend(FPoseContext * Output, FAnimationActiveTransitionEntry * Transition, bool bIntermediatePoseIsValid) { NativeCall<void, FPoseContext *, FAnimationActiveTransitionEntry *, bool>(this, "FAnimNode_StateMachine.EvaluateTransitionStandardBlend", Output, Transition, bIntermediatePoseIsValid); }
	bool FindValidTransition(const FAnimationUpdateContext * Context, const FBakedAnimationState * StateInfo, FAnimationPotentialTransition * OutPotentialTransition, TArray<int> * OutVisitedStateIndices) { return NativeCall<bool, const FAnimationUpdateContext *, const FBakedAnimationState *, FAnimationPotentialTransition *, TArray<int> *>(this, "FAnimNode_StateMachine.FindValidTransition", Context, StateInfo, OutPotentialTransition, OutVisitedStateIndices); }
	void GatherDebugData(FNodeDebugData * DebugData) { NativeCall<void, FNodeDebugData *>(this, "FAnimNode_StateMachine.GatherDebugData", DebugData); }
	float GetStateWeight(int StateIndex) { return NativeCall<float, int>(this, "FAnimNode_StateMachine.GetStateWeight", StateIndex); }
	void Initialize(const FAnimationInitializeContext * Context) { NativeCall<void, const FAnimationInitializeContext *>(this, "FAnimNode_StateMachine.Initialize", Context); }
	void SetState(const FAnimationBaseContext * Context, int NewStateIndex) { NativeCall<void, const FAnimationBaseContext *, int>(this, "FAnimNode_StateMachine.SetState", Context, NewStateIndex); }
	void Update(const FAnimationUpdateContext * Context) { NativeCall<void, const FAnimationUpdateContext *>(this, "FAnimNode_StateMachine.Update", Context); }
	void UpdateState(int StateIndex, const FAnimationUpdateContext * Context) { NativeCall<void, int, const FAnimationUpdateContext *>(this, "FAnimNode_StateMachine.UpdateState", StateIndex, Context); }
	void UpdateTransitionStates(const FAnimationUpdateContext * Context, FAnimationActiveTransitionEntry * Transition) { NativeCall<void, const FAnimationUpdateContext *, FAnimationActiveTransitionEntry *>(this, "FAnimNode_StateMachine.UpdateTransitionStates", Context, Transition); }
};

