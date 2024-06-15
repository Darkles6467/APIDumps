#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpressionTextureSampleParameter.h"
#include "UMaterialExpressionTextureSample.h"
#include "UMaterialExpressionTextureBase.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialExpressionTextureSampleParameterCube : UMaterialExpressionTextureSampleParameter
{

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionTextureSampleParameterCube.Compile", Compiler, OutputIndex, MultiplexIndex); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionTextureSampleParameterCube.GetCaption", OutCaptions); }
	const wchar_t * GetRequirements() { return NativeCall<const wchar_t *>(this, "UMaterialExpressionTextureSampleParameterCube.GetRequirements"); }
	void SetDefaultTexture() { NativeCall<void>(this, "UMaterialExpressionTextureSampleParameterCube.SetDefaultTexture"); }
	bool TextureIsValid(UTexture * InTexture) { return NativeCall<bool, UTexture *>(this, "UMaterialExpressionTextureSampleParameterCube.TextureIsValid", InTexture); }
};

