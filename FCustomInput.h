#pragma once

#include "BaseDeclarations.h"
struct FCustomInput
{
	char __padding[0x48L];
	FString& InputNameField() { return *GetNativePointerField<FString*>(this, "FCustomInput.InputName"); }
	FExpressionInput& InputField() { return *GetNativePointerField<FExpressionInput*>(this, "FCustomInput.Input"); }

	// Functions

};

