#pragma once

#include "BaseDeclarations.h"
#include "FMaterialUniformExpression.h"
#include "FRefCountedObject.h"

struct FMaterialUniformExpressionLength : FMaterialUniformExpression
{
	char __padding[0x8L];

	// Functions

	void GetNumberValue(const FMaterialRenderContext * Context, FLinearColor * OutValue) { NativeCall<void, const FMaterialRenderContext *, FLinearColor *>(this, "FMaterialUniformExpressionLength.GetNumberValue", Context, OutValue); }
};

