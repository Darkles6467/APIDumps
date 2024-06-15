#pragma once

#include "BaseDeclarations.h"
struct FUseItemAddCharacterStatusValue
{
	char __padding[0x30L];
	float& BaseAmountToAddField() { return *GetNativePointerField<float*>(this, "FUseItemAddCharacterStatusValue.BaseAmountToAdd"); }
	float& LimitExistingModifierDescriptionToMaxAmountField() { return *GetNativePointerField<float*>(this, "FUseItemAddCharacterStatusValue.LimitExistingModifierDescriptionToMaxAmount"); }
	float& AddOverTimeSpeedField() { return *GetNativePointerField<float*>(this, "FUseItemAddCharacterStatusValue.AddOverTimeSpeed"); }
	float& PercentAbsoluteMaxValueField() { return *GetNativePointerField<float*>(this, "FUseItemAddCharacterStatusValue.PercentAbsoluteMaxValue"); }
	float& PercentAbsoluteMinValueField() { return *GetNativePointerField<float*>(this, "FUseItemAddCharacterStatusValue.PercentAbsoluteMinValue"); }
	int& StatusValueModifierDescriptionIndexField() { return *GetNativePointerField<int*>(this, "FUseItemAddCharacterStatusValue.StatusValueModifierDescriptionIndex"); }
	float& ItemQualityAddValueMultiplierField() { return *GetNativePointerField<float*>(this, "FUseItemAddCharacterStatusValue.ItemQualityAddValueMultiplier"); }
	TEnumAsByte<enum EPrimalCharacterStatusValue::Type>& StatusValueTypeField() { return *GetNativePointerField<TEnumAsByte<enum EPrimalCharacterStatusValue::Type>*>(this, "FUseItemAddCharacterStatusValue.StatusValueType"); }
	TEnumAsByte<enum EPrimalCharacterStatusValue::Type>& StopAtValueNearMaxField() { return *GetNativePointerField<TEnumAsByte<enum EPrimalCharacterStatusValue::Type>*>(this, "FUseItemAddCharacterStatusValue.StopAtValueNearMax"); }

	// Functions

	FUseItemAddCharacterStatusValue * operator=(const FUseItemAddCharacterStatusValue * __that) { return NativeCall<FUseItemAddCharacterStatusValue *, const FUseItemAddCharacterStatusValue *>(this, "FUseItemAddCharacterStatusValue.operator=", __that); }
};

