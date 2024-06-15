#pragma once

#include "BaseDeclarations.h"
#include "FMaterialUniformExpression.h"
#include "FRefCountedObject.h"

struct FMaterialUniformExpressionSquareRoot : FMaterialUniformExpression
{
	char __padding[0x8L];

	// Functions

	void GetNumberValue(const FMaterialRenderContext * Context, FLinearColor * OutValue) { NativeCall<void, const FMaterialRenderContext *, FLinearColor *>(this, "FMaterialUniformExpressionSquareRoot.GetNumberValue", Context, OutValue); }
	bool IsConstant() { return NativeCall<bool>(this, "FMaterialUniformExpressionSquareRoot.IsConstant"); }
};

