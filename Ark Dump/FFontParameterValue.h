#pragma once

#include "BaseDeclarations.h"
struct FFontParameterValue
{
	char __padding[0x28L];
	FName& ParameterNameField() { return *GetNativePointerField<FName*>(this, "FFontParameterValue.ParameterName"); }
	UFont * FontValueField() { return GetNativePointerField<UFont *>(this, "FFontParameterValue.FontValue"); }
	int& FontPageField() { return *GetNativePointerField<int*>(this, "FFontParameterValue.FontPage"); }
	FGuid& ExpressionGUIDField() { return *GetNativePointerField<FGuid*>(this, "FFontParameterValue.ExpressionGUID"); }

	// Functions

};

