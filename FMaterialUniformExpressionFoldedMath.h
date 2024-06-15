#pragma once

#include "BaseDeclarations.h"
#include "FMaterialUniformExpression.h"
#include "FRefCountedObject.h"

struct FMaterialUniformExpressionFoldedMath : FMaterialUniformExpression
{
	char __padding[0x18L];
	char& OpField() { return *GetNativePointerField<char*>(this, "FMaterialUniformExpressionFoldedMath.Op"); }

	// Functions

	void GetNumberValue(const FMaterialRenderContext * Context, FLinearColor * OutValue) { NativeCall<void, const FMaterialRenderContext *, FLinearColor *>(this, "FMaterialUniformExpressionFoldedMath.GetNumberValue", Context, OutValue); }
	bool IsIdentical(const FMaterialUniformExpression * OtherExpression) { return NativeCall<bool, const FMaterialUniformExpression *>(this, "FMaterialUniformExpressionFoldedMath.IsIdentical", OtherExpression); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "FMaterialUniformExpressionFoldedMath.Serialize", Ar); }
};

