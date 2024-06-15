#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBlueprintAdjustOutputDamage_Parms
{
	char __padding[0x20L];
	int& AttackIndexField() { return *GetNativePointerField<int*>(this, "PrimalDinoCharacter_eventBlueprintAdjustOutputDamage_Parms.AttackIndex"); }
	float& OriginalDamageAmountField() { return *GetNativePointerField<float*>(this, "PrimalDinoCharacter_eventBlueprintAdjustOutputDamage_Parms.OriginalDamageAmount"); }
	float& OutDamageImpulseField() { return *GetNativePointerField<float*>(this, "PrimalDinoCharacter_eventBlueprintAdjustOutputDamage_Parms.OutDamageImpulse"); }
	float& ReturnValueField() { return *GetNativePointerField<float*>(this, "PrimalDinoCharacter_eventBlueprintAdjustOutputDamage_Parms.ReturnValue"); }
};

