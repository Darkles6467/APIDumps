#pragma once

#include "BaseDeclarations.h"
#include "FMaterialUniformExpression.h"
#include "FRefCountedObject.h"

struct FMaterialUniformExpressionMax : FMaterialUniformExpression
{
	char __padding[0x10L];

	// Functions

	void GetNumberValue(const FMaterialRenderContext * Context, FLinearColor * OutValue) { NativeCall<void, const FMaterialRenderContext *, FLinearColor *>(this, "FMaterialUniformExpressionMax.GetNumberValue", Context, OutValue); }
	bool IsIdentical(const FMaterialUniformExpression * OtherExpression) { return NativeCall<bool, const FMaterialUniformExpression *>(this, "FMaterialUniformExpressionMax.IsIdentical", OtherExpression); }
};

