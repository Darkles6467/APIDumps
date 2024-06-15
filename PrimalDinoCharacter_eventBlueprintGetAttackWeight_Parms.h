#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBlueprintGetAttackWeight_Parms
{
	char __padding[0x20L];
	int& AttackIndexField() { return *GetNativePointerField<int*>(this, "PrimalDinoCharacter_eventBlueprintGetAttackWeight_Parms.AttackIndex"); }
	float& inputWeightField() { return *GetNativePointerField<float*>(this, "PrimalDinoCharacter_eventBlueprintGetAttackWeight_Parms.inputWeight"); }
	float& distanceField() { return *GetNativePointerField<float*>(this, "PrimalDinoCharacter_eventBlueprintGetAttackWeight_Parms.distance"); }
	float& attackRangeOffsetField() { return *GetNativePointerField<float*>(this, "PrimalDinoCharacter_eventBlueprintGetAttackWeight_Parms.attackRangeOffset"); }
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "PrimalDinoCharacter_eventBlueprintGetAttackWeight_Parms.ReturnValue"); }
};

