#pragma once

#include "BaseDeclarations.h"
struct FPrimalCharacterStatusStateThresholds
{
	char __padding[0x48L];
	TArray<float>& HighThresholdStatusStateValuesField() { return *GetNativePointerField<TArray<float>*>(this, "FPrimalCharacterStatusStateThresholds.HighThresholdStatusStateValues"); }
	TArray<TEnumAsByte<enum EPrimalCharacterStatusState::Type>>& HighThresholdStatusStateTypeField() { return *GetNativePointerField<TArray<TEnumAsByte<enum EPrimalCharacterStatusState::Type>>*>(this, "FPrimalCharacterStatusStateThresholds.HighThresholdStatusStateType"); }
	TArray<float>& LowThresholdStatusStateValuesField() { return *GetNativePointerField<TArray<float>*>(this, "FPrimalCharacterStatusStateThresholds.LowThresholdStatusStateValues"); }
	TArray<TEnumAsByte<enum EPrimalCharacterStatusState::Type>>& LowThresholdStatusStateTypeField() { return *GetNativePointerField<TArray<TEnumAsByte<enum EPrimalCharacterStatusState::Type>>*>(this, "FPrimalCharacterStatusStateThresholds.LowThresholdStatusStateType"); }
	bool& StatusStateThresholdValuesAbsoluteField() { return *GetNativePointerField<bool*>(this, "FPrimalCharacterStatusStateThresholds.StatusStateThresholdValuesAbsolute"); }

	// Functions

	FPrimalCharacterStatusStateThresholds * operator=(const FPrimalCharacterStatusStateThresholds * __that) { return NativeCall<FPrimalCharacterStatusStateThresholds *, const FPrimalCharacterStatusStateThresholds *>(this, "FPrimalCharacterStatusStateThresholds.operator=", __that); }
};

