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

struct UMaterialExpressionTextureSampleParameterSubUV : UMaterialExpressionTextureSampleParameter2D
{
	char __padding[0x8L];

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionTextureSampleParameterSubUV.Compile", Compiler, OutputIndex, MultiplexIndex); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionTextureSampleParameterSubUV.GetCaption", OutCaptions); }
	bool TextureIsValid(UTexture * InTexture) { return NativeCall<bool, UTexture *>(this, "UMaterialExpressionTextureSampleParameterSubUV.TextureIsValid", InTexture); }
};

