#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpressionTextureSample.h"
#include "UMaterialExpressionTextureBase.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialExpressionParticleSubUV : UMaterialExpressionTextureSample
{
	char __padding[0x8L];

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionParticleSubUV.Compile", Compiler, OutputIndex, MultiplexIndex); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionParticleSubUV.GetCaption", OutCaptions); }
};

