#pragma once

#include "BaseDeclarations.h"
struct FPropertyModifierDefinition
{
	char __padding[0x10L];
	FName& PropertyNameField() { return *GetNativePointerField<FName*>(this, "FPropertyModifierDefinition.PropertyName"); }
	bool& bNeedsManualReplicationField() { return *GetNativePointerField<bool*>(this, "FPropertyModifierDefinition.bNeedsManualReplication"); }
	TEnumAsByte<enum EWorldBuffPropertyLocation::Type>& BuffPropertyLocationField() { return *GetNativePointerField<TEnumAsByte<enum EWorldBuffPropertyLocation::Type>*>(this, "FPropertyModifierDefinition.BuffPropertyLocation"); }
	float& ModifierValueField() { return *GetNativePointerField<float*>(this, "FPropertyModifierDefinition.ModifierValue"); }

	// Functions

	FPropertyModifierDefinition * operator=(const FPropertyModifierDefinition * __that) { return NativeCall<FPropertyModifierDefinition *, const FPropertyModifierDefinition *>(this, "FPropertyModifierDefinition.operator=", __that); }
};

