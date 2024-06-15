#pragma once

#include "BaseDeclarations.h"
#include "FAnimationStateBase.h"

struct FAnimationTransitionBetweenStates : FAnimationStateBase
{
	char __padding[0x1cL];
	int& PreviousStateField() { return *GetNativePointerField<int*>(this, "FAnimationTransitionBetweenStates.PreviousState"); }
	int& NextStateField() { return *GetNativePointerField<int*>(this, "FAnimationTransitionBetweenStates.NextState"); }
	float& CrossfadeDurationField() { return *GetNativePointerField<float*>(this, "FAnimationTransitionBetweenStates.CrossfadeDuration"); }
	int& StartNotifyField() { return *GetNativePointerField<int*>(this, "FAnimationTransitionBetweenStates.StartNotify"); }
	int& EndNotifyField() { return *GetNativePointerField<int*>(this, "FAnimationTransitionBetweenStates.EndNotify"); }
	int& InterruptNotifyField() { return *GetNativePointerField<int*>(this, "FAnimationTransitionBetweenStates.InterruptNotify"); }
	TEnumAsByte<enum ETransitionBlendMode::Type>& CrossfadeModeField() { return *GetNativePointerField<TEnumAsByte<enum ETransitionBlendMode::Type>*>(this, "FAnimationTransitionBetweenStates.CrossfadeMode"); }
	TEnumAsByte<enum ETransitionLogicType::Type>& LogicTypeField() { return *GetNativePointerField<TEnumAsByte<enum ETransitionLogicType::Type>*>(this, "FAnimationTransitionBetweenStates.LogicType"); }

	// Functions

};

