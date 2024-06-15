#pragma once

#include "BaseDeclarations.h"
struct FAnimationActiveTransitionEntry
{
	char __padding[0x60L];
	float& ElapsedTimeField() { return *GetNativePointerField<float*>(this, "FAnimationActiveTransitionEntry.ElapsedTime"); }
	float& AlphaField() { return *GetNativePointerField<float*>(this, "FAnimationActiveTransitionEntry.Alpha"); }
	float& CrossfadeDurationField() { return *GetNativePointerField<float*>(this, "FAnimationActiveTransitionEntry.CrossfadeDuration"); }
	TEnumAsByte<enum ETransitionBlendMode::Type>& CrossfadeModeField() { return *GetNativePointerField<TEnumAsByte<enum ETransitionBlendMode::Type>*>(this, "FAnimationActiveTransitionEntry.CrossfadeMode"); }
	bool& bActiveField() { return *GetNativePointerField<bool*>(this, "FAnimationActiveTransitionEntry.bActive"); }
	TArray<FTransform>& InputPoseField() { return *GetNativePointerField<TArray<FTransform>*>(this, "FAnimationActiveTransitionEntry.InputPose"); }
	FPoseLink& CustomTransitionGraphField() { return *GetNativePointerField<FPoseLink*>(this, "FAnimationActiveTransitionEntry.CustomTransitionGraph"); }
	int& NextStateField() { return *GetNativePointerField<int*>(this, "FAnimationActiveTransitionEntry.NextState"); }
	int& PreviousStateField() { return *GetNativePointerField<int*>(this, "FAnimationActiveTransitionEntry.PreviousState"); }
	int& StartNotifyField() { return *GetNativePointerField<int*>(this, "FAnimationActiveTransitionEntry.StartNotify"); }
	int& EndNotifyField() { return *GetNativePointerField<int*>(this, "FAnimationActiveTransitionEntry.EndNotify"); }
	int& InterruptNotifyField() { return *GetNativePointerField<int*>(this, "FAnimationActiveTransitionEntry.InterruptNotify"); }
	TEnumAsByte<enum ETransitionLogicType::Type>& LogicTypeField() { return *GetNativePointerField<TEnumAsByte<enum ETransitionLogicType::Type>*>(this, "FAnimationActiveTransitionEntry.LogicType"); }
	TArray<FAnimNode_TransitionPoseEvaluator *>& PoseEvaluatorsField() { return *GetNativePointerField<TArray<FAnimNode_TransitionPoseEvaluator *>*>(this, "FAnimationActiveTransitionEntry.PoseEvaluators"); }

	// Functions

	void InitializeCustomGraphLinks(const FAnimationUpdateContext * Context, const FBakedStateExitTransition * TransitionRule) { NativeCall<void, const FAnimationUpdateContext *, const FBakedStateExitTransition *>(this, "FAnimationActiveTransitionEntry.InitializeCustomGraphLinks", Context, TransitionRule); }
	FAnimationActiveTransitionEntry * operator=(const FAnimationActiveTransitionEntry * __that) { return NativeCall<FAnimationActiveTransitionEntry *, const FAnimationActiveTransitionEntry *>(this, "FAnimationActiveTransitionEntry.operator=", __that); }
};

