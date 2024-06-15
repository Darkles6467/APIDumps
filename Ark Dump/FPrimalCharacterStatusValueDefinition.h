#pragma once

#include "BaseDeclarations.h"
struct FPrimalCharacterStatusValueDefinition
{
	char __padding[0x20L];
	FString& StatusValueNameField() { return *GetNativePointerField<FString*>(this, "FPrimalCharacterStatusValueDefinition.StatusValueName"); }
	bool& bLevelUpSetToMaxValueField() { return *GetNativePointerField<bool*>(this, "FPrimalCharacterStatusValueDefinition.bLevelUpSetToMaxValue"); }
	bool& bDisplayHideCurrentValueField() { return *GetNativePointerField<bool*>(this, "FPrimalCharacterStatusValueDefinition.bDisplayHideCurrentValue"); }
	bool& bDisplayAsPercentField() { return *GetNativePointerField<bool*>(this, "FPrimalCharacterStatusValueDefinition.bDisplayAsPercent"); }

	// Functions

	FPrimalCharacterStatusValueDefinition * operator=(const FPrimalCharacterStatusValueDefinition * __that) { return NativeCall<FPrimalCharacterStatusValueDefinition *, const FPrimalCharacterStatusValueDefinition *>(this, "FPrimalCharacterStatusValueDefinition.operator=", __that); }
};

