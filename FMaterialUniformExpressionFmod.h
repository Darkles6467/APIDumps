#pragma once

#include "BaseDeclarations.h"
#include "FMaterialUniformExpression.h"
#include "FRefCountedObject.h"

struct FMaterialUniformExpressionFmod : FMaterialUniformExpression
{
	char __padding[0x10L];

	// Functions

	void GetNumberValue(const FMaterialRenderContext * Context, FLinearColor * OutValue) { NativeCall<void, const FMaterialRenderContext *, FLinearColor *>(this, "FMaterialUniformExpressionFmod.GetNumberValue", Context, OutValue); }
};

