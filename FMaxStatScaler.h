#pragma once

#include "BaseDeclarations.h"
struct FMaxStatScaler
{
	char __padding[0xcL];
	TEnumAsByte<enum EPrimalCharacterStatusValue::Type>& LevelUpValueTypeField() { return *GetNativePointerField<TEnumAsByte<enum EPrimalCharacterStatusValue::Type>*>(this, "FMaxStatScaler.LevelUpValueType"); }
	float& TargetValueField() { return *GetNativePointerField<float*>(this, "FMaxStatScaler.TargetValue"); }
	bool& TargetValueIsPercentField() { return *GetNativePointerField<bool*>(this, "FMaxStatScaler.TargetValueIsPercent"); }

	// Functions

	FMaxStatScaler * operator=(const FMaxStatScaler * __that) { return NativeCall<FMaxStatScaler *, const FMaxStatScaler *>(this, "FMaxStatScaler.operator=", __that); }
};

