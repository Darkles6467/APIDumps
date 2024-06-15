#pragma once

#include "BaseDeclarations.h"
#include "FMaterialUniformExpression.h"
#include "FRefCountedObject.h"

struct FMaterialUniformExpressionConstant : FMaterialUniformExpression
{
	char __padding[0x18L];
	FLinearColor& ValueField() { return *GetNativePointerField<FLinearColor*>(this, "FMaterialUniformExpressionConstant.Value"); }
	char& ValueTypeField() { return *GetNativePointerField<char*>(this, "FMaterialUniformExpressionConstant.ValueType"); }

	// Functions

	void GetNumberValue(const FMaterialRenderContext * Context, FLinearColor * OutValue) { NativeCall<void, const FMaterialRenderContext *, FLinearColor *>(this, "FMaterialUniformExpressionConstant.GetNumberValue", Context, OutValue); }
	bool IsIdentical(const FMaterialUniformExpression * OtherExpression) { return NativeCall<bool, const FMaterialUniformExpression *>(this, "FMaterialUniformExpressionConstant.IsIdentical", OtherExpression); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "FMaterialUniformExpressionConstant.Serialize", Ar); }
};

