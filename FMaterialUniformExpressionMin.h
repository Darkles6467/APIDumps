#pragma once

#include "BaseDeclarations.h"
#include "FMaterialUniformExpression.h"
#include "FRefCountedObject.h"

struct FMaterialUniformExpressionMin : FMaterialUniformExpression
{
	char __padding[0x10L];

	// Functions

	void GetNumberValue(const FMaterialRenderContext * Context, FLinearColor * OutValue) { NativeCall<void, const FMaterialRenderContext *, FLinearColor *>(this, "FMaterialUniformExpressionMin.GetNumberValue", Context, OutValue); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "FMaterialUniformExpressionMin.Serialize", Ar); }
};

