#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpression.h"

struct UMaterialExpressionTextureBase : UMaterialExpression
{
	char __padding[0x10L];
	TEnumAsByte<enum EMaterialSamplerType>& SamplerTypeField() { return *GetNativePointerField<TEnumAsByte<enum EMaterialSamplerType>*>(this, "UMaterialExpressionTextureBase.SamplerType"); }

	// Functions

	static EMaterialSamplerType GetSamplerTypeForTexture(const UTexture * Texture) { return NativeCall<EMaterialSamplerType, const UTexture *>(nullptr, "UMaterialExpressionTextureBase.GetSamplerTypeForTexture", Texture); }
};

