#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpressionTextureSampleParameter.h"
#include "UMaterialExpressionTextureSample.h"
#include "UMaterialExpressionTextureBase.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialExpressionTextureObjectParameter : UMaterialExpressionTextureSampleParameter
{

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionTextureObjectParameter.Compile", Compiler, OutputIndex, MultiplexIndex); }
	int CompilePreview(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionTextureObjectParameter.CompilePreview", Compiler, OutputIndex, MultiplexIndex); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionTextureObjectParameter.GetCaption", OutCaptions); }
	const wchar_t * GetRequirements() { return NativeCall<const wchar_t *>(this, "UMaterialExpressionTextureObjectParameter.GetRequirements"); }
};

