#pragma once

#include "BaseDeclarations.h"
struct FCrateTemporaryQualityModifiers
{
	char __padding[0x20L];
	FName& CustomTagField() { return *GetNativePointerField<FName*>(this, "FCrateTemporaryQualityModifiers.CustomTag"); }
	FString& ClassStringField() { return *GetNativePointerField<FString*>(this, "FCrateTemporaryQualityModifiers.ClassString"); }
	float& QualityMultiplierModifierField() { return *GetNativePointerField<float*>(this, "FCrateTemporaryQualityModifiers.QualityMultiplierModifier"); }

	// Functions

	FResourceTemporaryAmountModifiers * operator=(const FResourceTemporaryAmountModifiers * __that) { return NativeCall<FResourceTemporaryAmountModifiers *, const FResourceTemporaryAmountModifiers *>(this, "FCrateTemporaryQualityModifiers.operator=", __that); }
};

