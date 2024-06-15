#pragma once

#include "BaseDeclarations.h"
#include "FMaterialUniformExpression.h"
#include "FRefCountedObject.h"

struct FMaterialUniformExpressionAbs : FMaterialUniformExpression
{
	char __padding[0x8L];

	// Functions

	void GetNumberValue(const FMaterialRenderContext * Context, FLinearColor * OutValue) { NativeCall<void, const FMaterialRenderContext *, FLinearColor *>(this, "FMaterialUniformExpressionAbs.GetNumberValue", Context, OutValue); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "FMaterialUniformExpressionAbs.Serialize", Ar); }
};

