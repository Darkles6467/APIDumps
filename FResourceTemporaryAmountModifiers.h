#pragma once

#include "BaseDeclarations.h"
struct FResourceTemporaryAmountModifiers
{
	char __padding[0x20L];
	FName& CustomTagField() { return *GetNativePointerField<FName*>(this, "FResourceTemporaryAmountModifiers.CustomTag"); }
	FString& HarvestComponentClassStringField() { return *GetNativePointerField<FString*>(this, "FResourceTemporaryAmountModifiers.HarvestComponentClassString"); }
	float& ResourceAmountMultiplierModifierField() { return *GetNativePointerField<float*>(this, "FResourceTemporaryAmountModifiers.ResourceAmountMultiplierModifier"); }

	// Functions

};

