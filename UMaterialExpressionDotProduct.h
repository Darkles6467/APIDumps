#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialExpressionDotProduct : UMaterialExpression
{
	char __padding[0x70L];
	FExpressionInput& AField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionDotProduct.A"); }
	FExpressionInput& BField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionDotProduct.B"); }

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionDotProduct.Compile", Compiler, OutputIndex, MultiplexIndex); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionDotProduct.GetCaption", OutCaptions); }
};

