#pragma once

#include "BaseDeclarations.h"
#include "FMaterialUniformExpression.h"
#include "FRefCountedObject.h"

struct FMaterialUniformExpressionClamp : FMaterialUniformExpression
{
	char __padding[0x18L];

	// Functions

	void GetNumberValue(const FMaterialRenderContext * Context, FLinearColor * OutValue) { NativeCall<void, const FMaterialRenderContext *, FLinearColor *>(this, "FMaterialUniformExpressionClamp.GetNumberValue", Context, OutValue); }
	bool IsConstant() { return NativeCall<bool>(this, "FMaterialUniformExpressionClamp.IsConstant"); }
	bool IsIdentical(const FMaterialUniformExpression * OtherExpression) { return NativeCall<bool, const FMaterialUniformExpression *>(this, "FMaterialUniformExpressionClamp.IsIdentical", OtherExpression); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "FMaterialUniformExpressionClamp.Serialize", Ar); }
};

