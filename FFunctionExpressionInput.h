#pragma once

#include "BaseDeclarations.h"
struct FFunctionExpressionInput
{
	char __padding[0x50L];
	FGuid& ExpressionInputIdField() { return *GetNativePointerField<FGuid*>(this, "FFunctionExpressionInput.ExpressionInputId"); }
	FExpressionInput& InputField() { return *GetNativePointerField<FExpressionInput*>(this, "FFunctionExpressionInput.Input"); }

	// Functions

};

