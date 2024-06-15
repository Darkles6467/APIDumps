#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBlueprintCanAttack_Parms
{
	char __padding[0x20L];
	int& AttackIndexField() { return *GetNativePointerField<int*>(this, "PrimalDinoCharacter_eventBlueprintCanAttack_Parms.AttackIndex"); }
	float& distanceField() { return *GetNativePointerField<float*>(this, "PrimalDinoCharacter_eventBlueprintCanAttack_Parms.distance"); }
	float& attackRangeOffsetField() { return *GetNativePointerField<float*>(this, "PrimalDinoCharacter_eventBlueprintCanAttack_Parms.attackRangeOffset"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "PrimalDinoCharacter_eventBlueprintCanAttack_Parms.ReturnValue"); }
};

