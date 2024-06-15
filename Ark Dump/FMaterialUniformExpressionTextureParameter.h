#pragma once

#include "BaseDeclarations.h"
#include "FMaterialUniformExpressionTexture.h"
#include "FMaterialUniformExpression.h"
#include "FRefCountedObject.h"

struct FMaterialUniformExpressionTextureParameter : FMaterialUniformExpressionTexture
{
	char __padding[0x8L];
	FName& ParameterNameField() { return *GetNativePointerField<FName*>(this, "FMaterialUniformExpressionTextureParameter.ParameterName"); }

	// Functions

	void GetGameThreadTextureValue(const UMaterialInterface * MaterialInterface, const FMaterial * Material, UTexture ** OutValue, bool bAllowOverride) { NativeCall<void, const UMaterialInterface *, const FMaterial *, UTexture **, bool>(this, "FMaterialUniformExpressionTextureParameter.GetGameThreadTextureValue", MaterialInterface, Material, OutValue, bAllowOverride); }
	void GetTextureValue(const FMaterialRenderContext * Context, const FMaterial * Material, const UTexture ** OutValue, ESamplerSourceMode * OutSamplerSource) { NativeCall<void, const FMaterialRenderContext *, const FMaterial *, const UTexture **, ESamplerSourceMode *>(this, "FMaterialUniformExpressionTextureParameter.GetTextureValue", Context, Material, OutValue, OutSamplerSource); }
	bool IsIdentical(const FMaterialUniformExpression * OtherExpression) { return NativeCall<bool, const FMaterialUniformExpression *>(this, "FMaterialUniformExpressionTextureParameter.IsIdentical", OtherExpression); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "FMaterialUniformExpressionTextureParameter.Serialize", Ar); }
};

