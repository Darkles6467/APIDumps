#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPOverrideGetAttackAnimationIndex_Parms
{
	char __padding[0x20L];
	int& AttackIndexField() { return *GetNativePointerField<int*>(this, "PrimalDinoCharacter_eventBPOverrideGetAttackAnimationIndex_Parms.AttackIndex"); }
	TArray<UAnimMontage *>& AnimationArrayField() { return *GetNativePointerField<TArray<UAnimMontage *>*>(this, "PrimalDinoCharacter_eventBPOverrideGetAttackAnimationIndex_Parms.AnimationArray"); }
	int& ReturnValueField() { return *GetNativePointerField<int*>(this, "PrimalDinoCharacter_eventBPOverrideGetAttackAnimationIndex_Parms.ReturnValue"); }

	// Functions

};

