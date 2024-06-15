#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpressionTextureSampleParameter2D.h"
#include "UMaterialExpressionTextureSampleParameter.h"
#include "UMaterialExpressionTextureSample.h"
#include "UMaterialExpressionTextureBase.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialExpressionAntialiasedTextureMask : UMaterialExpressionTextureSampleParameter2D
{
	char __padding[0x8L];
	float& ThresholdField() { return *GetNativePointerField<float*>(this, "UMaterialExpressionAntialiasedTextureMask.Threshold"); }
	TEnumAsByte<enum ETextureColorChannel>& ChannelField() { return *GetNativePointerField<TEnumAsByte<enum ETextureColorChannel>*>(this, "UMaterialExpressionAntialiasedTextureMask.Channel"); }

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionAntialiasedTextureMask.Compile", Compiler, OutputIndex, MultiplexIndex); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionAntialiasedTextureMask.GetCaption", OutCaptions); }
	const wchar_t * GetRequirements() { return NativeCall<const wchar_t *>(this, "UMaterialExpressionAntialiasedTextureMask.GetRequirements"); }
	void SetDefaultTexture() { NativeCall<void>(this, "UMaterialExpressionAntialiasedTextureMask.SetDefaultTexture"); }
	bool TextureIsValid(UTexture * InTexture) { return NativeCall<bool, UTexture *>(this, "UMaterialExpressionAntialiasedTextureMask.TextureIsValid", InTexture); }
};

