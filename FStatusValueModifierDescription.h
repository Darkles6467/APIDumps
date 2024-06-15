#pragma once

#include "BaseDeclarations.h"
struct FStatusValueModifierDescription
{
	char __padding[0x50L];
	FString& ModifierNameField() { return *GetNativePointerField<FString*>(this, "FStatusValueModifierDescription.ModifierName"); }
	FString& ModifierDescriptionField() { return *GetNativePointerField<FString*>(this, "FStatusValueModifierDescription.ModifierDescription"); }
	FColor& ModifierColorField() { return *GetNativePointerField<FColor*>(this, "FStatusValueModifierDescription.ModifierColor"); }
	bool& bDisplayHUDMessageField() { return *GetNativePointerField<bool*>(this, "FStatusValueModifierDescription.bDisplayHUDMessage"); }
	FString& HUDMessageField() { return *GetNativePointerField<FString*>(this, "FStatusValueModifierDescription.HUDMessage"); }
	FColor& HUDMessageColorField() { return *GetNativePointerField<FColor*>(this, "FStatusValueModifierDescription.HUDMessageColor"); }
	bool& bPreventDrawingBuffDescriptionField() { return *GetNativePointerField<bool*>(this, "FStatusValueModifierDescription.bPreventDrawingBuffDescription"); }
	int& BuffTypeField() { return *GetNativePointerField<int*>(this, "FStatusValueModifierDescription.BuffType"); }

	// Functions

	FStatusValueModifierDescription * operator=(const FStatusValueModifierDescription * __that) { return NativeCall<FStatusValueModifierDescription *, const FStatusValueModifierDescription *>(this, "FStatusValueModifierDescription.operator=", __that); }
};

