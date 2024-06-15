#pragma once

#include "BaseDeclarations.h"
#include "FMaterialUniformExpression.h"

struct FMaterialUniformExpressionTexture : FMaterialUniformExpression
{
	char __padding[0x18L];
	int& TextureIndexField() { return *GetNativePointerField<int*>(this, "FMaterialUniformExpressionTexture.TextureIndex"); }
	ESamplerSourceMode& SamplerSourceField() { return *GetNativePointerField<ESamplerSourceMode*>(this, "FMaterialUniformExpressionTexture.SamplerSource"); }

	// Functions

	void GetGameThreadTextureValue(const UMaterialInterface * MaterialInterface, const FMaterial * Material, UTexture ** OutValue, bool bAllowOverride) { NativeCall<void, const UMaterialInterface *, const FMaterial *, UTexture **, bool>(this, "FMaterialUniformExpressionTexture.GetGameThreadTextureValue", MaterialInterface, Material, OutValue, bAllowOverride); }
	void GetTextureValue(const FMaterialRenderContext * Context, const FMaterial * Material, const UTexture ** OutValue, ESamplerSourceMode * OutSamplerSource) { NativeCall<void, const FMaterialRenderContext *, const FMaterial *, const UTexture **, ESamplerSourceMode *>(this, "FMaterialUniformExpressionTexture.GetTextureValue", Context, Material, OutValue, OutSamplerSource); }
	bool IsIdentical(const FMaterialUniformExpression * OtherExpression) { return NativeCall<bool, const FMaterialUniformExpression *>(this, "FMaterialUniformExpressionTexture.IsIdentical", OtherExpression); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "FMaterialUniformExpressionTexture.Serialize", Ar); }
};

