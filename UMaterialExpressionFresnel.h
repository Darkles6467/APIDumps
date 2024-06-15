#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialExpressionFresnel : UMaterialExpression
{
	char __padding[0xb8L];
	FExpressionInput& ExponentInField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionFresnel.ExponentIn"); }
	float& ExponentField() { return *GetNativePointerField<float*>(this, "UMaterialExpressionFresnel.Exponent"); }
	FExpressionInput& BaseReflectFractionInField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionFresnel.BaseReflectFractionIn"); }
	float& BaseReflectFractionField() { return *GetNativePointerField<float*>(this, "UMaterialExpressionFresnel.BaseReflectFraction"); }
	FExpressionInput& NormalField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionFresnel.Normal"); }

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionFresnel.Compile", Compiler, OutputIndex, MultiplexIndex); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionFresnel.GetCaption", OutCaptions); }
};

