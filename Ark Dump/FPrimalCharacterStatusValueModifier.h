#pragma once

#include "BaseDeclarations.h"
struct FPrimalCharacterStatusValueModifier
{
	char __padding[0x24L];
	EPrimalCharacterStatusValue::Type& ValueTypeField() { return *GetNativePointerField<EPrimalCharacterStatusValue::Type*>(this, "FPrimalCharacterStatusValueModifier.ValueType"); }
	EPrimalCharacterStatusValue::Type& StopOnValueNearMaxField() { return *GetNativePointerField<EPrimalCharacterStatusValue::Type*>(this, "FPrimalCharacterStatusValueModifier.StopOnValueNearMax"); }
	float& AmountToAddField() { return *GetNativePointerField<float*>(this, "FPrimalCharacterStatusValueModifier.AmountToAdd"); }
	float& BaseAmountToAddField() { return *GetNativePointerField<float*>(this, "FPrimalCharacterStatusValueModifier.BaseAmountToAdd"); }
	float& SpeedToAddField() { return *GetNativePointerField<float*>(this, "FPrimalCharacterStatusValueModifier.SpeedToAdd"); }
	bool& bContinueOnUnchangedValueField() { return *GetNativePointerField<bool*>(this, "FPrimalCharacterStatusValueModifier.bContinueOnUnchangedValue"); }
	bool& bSetValueField() { return *GetNativePointerField<bool*>(this, "FPrimalCharacterStatusValueModifier.bSetValue"); }
	bool& bSetAdditionalValueField() { return *GetNativePointerField<bool*>(this, "FPrimalCharacterStatusValueModifier.bSetAdditionalValue"); }
	bool& bMakeUntameableField() { return *GetNativePointerField<bool*>(this, "FPrimalCharacterStatusValueModifier.bMakeUntameable"); }
	int& StatusValueModifierDescriptionIndexField() { return *GetNativePointerField<int*>(this, "FPrimalCharacterStatusValueModifier.StatusValueModifierDescriptionIndex"); }

	// Functions

	FPrimalCharacterStatusValueModifier * operator=(const FPrimalCharacterStatusValueModifier * __that) { return NativeCall<FPrimalCharacterStatusValueModifier *, const FPrimalCharacterStatusValueModifier *>(this, "FPrimalCharacterStatusValueModifier.operator=", __that); }
};

