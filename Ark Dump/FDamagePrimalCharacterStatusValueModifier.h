#pragma once

#include "BaseDeclarations.h"
struct FDamagePrimalCharacterStatusValueModifier
{
	char __padding[0x30L];
	TEnumAsByte<enum EPrimalCharacterStatusValue::Type>& ValueTypeField() { return *GetNativePointerField<TEnumAsByte<enum EPrimalCharacterStatusValue::Type>*>(this, "FDamagePrimalCharacterStatusValueModifier.ValueType"); }
	float& LimitExistingModifierDescriptionToMaxAmountField() { return *GetNativePointerField<float*>(this, "FDamagePrimalCharacterStatusValueModifier.LimitExistingModifierDescriptionToMaxAmount"); }
	int& UseAbsoluteDamageAmountField() { return *GetNativePointerField<int*>(this, "FDamagePrimalCharacterStatusValueModifier.UseAbsoluteDamageAmount"); }
	float& DamageMultiplierAmountToAddField() { return *GetNativePointerField<float*>(this, "FDamagePrimalCharacterStatusValueModifier.DamageMultiplierAmountToAdd"); }
	float& SpeedToAddField() { return *GetNativePointerField<float*>(this, "FDamagePrimalCharacterStatusValueModifier.SpeedToAdd"); }
	int& StatusValueModifierDescriptionIndexField() { return *GetNativePointerField<int*>(this, "FDamagePrimalCharacterStatusValueModifier.StatusValueModifierDescriptionIndex"); }
	float& PercentualDamageField() { return *GetNativePointerField<float*>(this, "FDamagePrimalCharacterStatusValueModifier.PercentualDamage"); }

	// Functions

	FDamagePrimalCharacterStatusValueModifier * operator=(const FDamagePrimalCharacterStatusValueModifier * __that) { return NativeCall<FDamagePrimalCharacterStatusValueModifier *, const FDamagePrimalCharacterStatusValueModifier *>(this, "FDamagePrimalCharacterStatusValueModifier.operator=", __that); }
};

