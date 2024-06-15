#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpressionTextureSampleParameter.h"

struct UMaterialExpressionTextureSampleParameter2D : UMaterialExpressionTextureSampleParameter
{

	// Functions

	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionTextureSampleParameter2D.GetCaption", OutCaptions); }
	const wchar_t * GetRequirements() { return NativeCall<const wchar_t *>(this, "UMaterialExpressionTextureSampleParameter2D.GetRequirements"); }
	void SetDefaultTexture() { NativeCall<void>(this, "UMaterialExpressionTextureSampleParameter2D.SetDefaultTexture"); }
	bool TextureIsValid(UTexture * InTexture) { return NativeCall<bool, UTexture *>(this, "UMaterialExpressionTextureSampleParameter2D.TextureIsValid", InTexture); }
};

