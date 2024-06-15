#pragma once

#include "BaseDeclarations.h"
#include "FMaterialUniformExpression.h"
#include "FRefCountedObject.h"

struct FMaterialUniformExpressionScalarParameter : FMaterialUniformExpression
{
	char __padding[0x18L];
	FName& ParameterNameField() { return *GetNativePointerField<FName*>(this, "FMaterialUniformExpressionScalarParameter.ParameterName"); }
	float& DefaultValueField() { return *GetNativePointerField<float*>(this, "FMaterialUniformExpressionScalarParameter.DefaultValue"); }
	bool& bUseOverriddenDefaultField() { return *GetNativePointerField<bool*>(this, "FMaterialUniformExpressionScalarParameter.bUseOverriddenDefault"); }
	float& OverriddenDefaultValueField() { return *GetNativePointerField<float*>(this, "FMaterialUniformExpressionScalarParameter.OverriddenDefaultValue"); }

	// Functions

	void GetNumberValue(const FMaterialRenderContext * Context, FLinearColor * OutValue) { NativeCall<void, const FMaterialRenderContext *, FLinearColor *>(this, "FMaterialUniformExpressionScalarParameter.GetNumberValue", Context, OutValue); }
	bool IsIdentical(const FMaterialUniformExpression * OtherExpression) { return NativeCall<bool, const FMaterialUniformExpression *>(this, "FMaterialUniformExpressionScalarParameter.IsIdentical", OtherExpression); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "FMaterialUniformExpressionScalarParameter.Serialize", Ar); }
};

