#pragma once

#include "BaseDeclarations.h"
struct FKeyDetails
{
	enum EInputAxisType
	{
		None = 0x0,
		Float = 0x1,
		Vector = 0x2,
	};

	enum EKeyFlags
	{
		GamepadKey = 0x1,
		MouseButton = 0x2,
		ModifierKey = 0x4,
		NotBlueprintBindableKey = 0x8,
		FloatAxis = 0x10,
		VectorAxis = 0x20,
		NoFlags = 0x0,
	};

	char __padding[0x50L];
	FKey& KeyField() { return *GetNativePointerField<FKey*>(this, "FKeyDetails.Key"); }
	FText& DisplayNameField() { return *GetNativePointerField<FText*>(this, "FKeyDetails.DisplayName"); }
	FieldArray<_BYTE, 1> AxisTypeField() { return {this, "FKeyDetails.AxisType"}; }

	// Functions

	FText * GetDisplayName(FText * result) { return NativeCall<FText *, FText *>(this, "FKeyDetails.GetDisplayName", result); }
};

