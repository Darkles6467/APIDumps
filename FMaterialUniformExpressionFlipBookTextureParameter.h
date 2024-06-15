#pragma once

#include "BaseDeclarations.h"
#include "FMaterialUniformExpressionTexture.h"
#include "FMaterialUniformExpression.h"
#include "FRefCountedObject.h"

struct FMaterialUniformExpressionFlipBookTextureParameter : FMaterialUniformExpressionTexture
{

	// Functions

	void GetNumberValue(const FMaterialRenderContext * Context, FLinearColor * OutValue) { NativeCall<void, const FMaterialRenderContext *, FLinearColor *>(this, "FMaterialUniformExpressionFlipBookTextureParameter.GetNumberValue", Context, OutValue); }
};

