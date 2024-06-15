#pragma once

#include "BaseDeclarations.h"
struct FCrateTemporaryQualityModifierSet
{
	char __padding[0x18L];
	FName& SetTagField() { return *GetNativePointerField<FName*>(this, "FCrateTemporaryQualityModifierSet.SetTag"); }
	TArray<FCrateTemporaryQualityModifiers>& ModifiersField() { return *GetNativePointerField<TArray<FCrateTemporaryQualityModifiers>*>(this, "FCrateTemporaryQualityModifierSet.Modifiers"); }

	// Functions

};

