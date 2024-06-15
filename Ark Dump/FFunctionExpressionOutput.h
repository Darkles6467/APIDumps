#pragma once

#include "BaseDeclarations.h"
struct FFunctionExpressionOutput
{
	char __padding[0x40L];
	FGuid& ExpressionOutputIdField() { return *GetNativePointerField<FGuid*>(this, "FFunctionExpressionOutput.ExpressionOutputId"); }
	FExpressionOutput& OutputField() { return *GetNativePointerField<FExpressionOutput*>(this, "FFunctionExpressionOutput.Output"); }

	// Functions

};

