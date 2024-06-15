#pragma once

#include "BaseDeclarations.h"
struct FColorDefinition
{
	char __padding[0x1cL];
	FName& ColorNameField() { return *GetNativePointerField<FName*>(this, "FColorDefinition.ColorName"); }
	FLinearColor& ColorValueField() { return *GetNativePointerField<FLinearColor*>(this, "FColorDefinition.ColorValue"); }
	bool& bHasOverridePriorityField() { return *GetNativePointerField<bool*>(this, "FColorDefinition.bHasOverridePriority"); }

	// Functions

	bool operator==(const FDinoKey * Other) { return NativeCall<bool, const FDinoKey *>(this, "FColorDefinition.operator==", Other); }
};

