#pragma once

#include "BaseDeclarations.h"
#include "FMaterialUniformExpression.h"
#include "FRefCountedObject.h"

struct FMaterialUniformExpressionRealTime : FMaterialUniformExpression
{

	// Functions

	bool IsIdentical(const FMaterialUniformExpression * OtherExpression) { return NativeCall<bool, const FMaterialUniformExpression *>(this, "FMaterialUniformExpressionRealTime.IsIdentical", OtherExpression); }
};

