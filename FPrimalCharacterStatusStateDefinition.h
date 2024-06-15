#pragma once

#include "BaseDeclarations.h"
struct FPrimalCharacterStatusStateDefinition
{
	char __padding[0x50L];
	TEnumAsByte<enum EPrimalCharacterStatusValue::Type>& StatusValueTypeField() { return *GetNativePointerField<TEnumAsByte<enum EPrimalCharacterStatusValue::Type>*>(this, "FPrimalCharacterStatusStateDefinition.StatusValueType"); }
	int& StatusValueThresholdIndexField() { return *GetNativePointerField<int*>(this, "FPrimalCharacterStatusStateDefinition.StatusValueThresholdIndex"); }
	FString& StatusStateNameField() { return *GetNativePointerField<FString*>(this, "FPrimalCharacterStatusStateDefinition.StatusStateName"); }
	FString& StatusStateDescriptionField() { return *GetNativePointerField<FString*>(this, "FPrimalCharacterStatusStateDefinition.StatusStateDescription"); }
	FColor& StatusStateNameColorField() { return *GetNativePointerField<FColor*>(this, "FPrimalCharacterStatusStateDefinition.StatusStateNameColor"); }
	bool& bUsedField() { return *GetNativePointerField<bool*>(this, "FPrimalCharacterStatusStateDefinition.bUsed"); }
	bool& bDisplayHUDMessageField() { return *GetNativePointerField<bool*>(this, "FPrimalCharacterStatusStateDefinition.bDisplayHUDMessage"); }
	FString& HUDMessageField() { return *GetNativePointerField<FString*>(this, "FPrimalCharacterStatusStateDefinition.HUDMessage"); }
	FColor& HUDMessageColorField() { return *GetNativePointerField<FColor*>(this, "FPrimalCharacterStatusStateDefinition.HUDMessageColor"); }
	int& BuffTypeField() { return *GetNativePointerField<int*>(this, "FPrimalCharacterStatusStateDefinition.BuffType"); }

	// Functions

	FPrimalCharacterStatusStateDefinition * operator=(const FPrimalCharacterStatusStateDefinition * __that) { return NativeCall<FPrimalCharacterStatusStateDefinition *, const FPrimalCharacterStatusStateDefinition *>(this, "FPrimalCharacterStatusStateDefinition.operator=", __that); }
};

