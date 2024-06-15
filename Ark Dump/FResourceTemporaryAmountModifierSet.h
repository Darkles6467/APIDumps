#pragma once

#include "BaseDeclarations.h"
struct FResourceTemporaryAmountModifierSet
{
	char __padding[0x18L];
	FName& SetTagField() { return *GetNativePointerField<FName*>(this, "FResourceTemporaryAmountModifierSet.SetTag"); }
	TArray<FResourceTemporaryAmountModifiers>& ModifiersField() { return *GetNativePointerField<TArray<FResourceTemporaryAmountModifiers>*>(this, "FResourceTemporaryAmountModifierSet.Modifiers"); }

	// Functions

};

