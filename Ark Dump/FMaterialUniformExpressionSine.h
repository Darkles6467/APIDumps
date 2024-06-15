#pragma once

#include "BaseDeclarations.h"
#include "FMaterialUniformExpression.h"
#include "FRefCountedObject.h"

struct FMaterialUniformExpressionSine : FMaterialUniformExpression
{
	char __padding[0x10L];
	bool& bIsCosineField() { return *GetNativePointerField<bool*>(this, "FMaterialUniformExpressionSine.bIsCosine"); }

	// Functions

	void GetNumberValue(const FMaterialRenderContext * Context, FLinearColor * OutValue) { NativeCall<void, const FMaterialRenderContext *, FLinearColor *>(this, "FMaterialUniformExpressionSine.GetNumberValue", Context, OutValue); }
	bool IsIdentical(const FMaterialUniformExpression * OtherExpression) { return NativeCall<bool, const FMaterialUniformExpression *>(this, "FMaterialUniformExpressionSine.IsIdentical", OtherExpression); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "FMaterialUniformExpressionSine.Serialize", Ar); }
};

