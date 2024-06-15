#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialExpressionLinearInterpolate : UMaterialExpression
{
	char __padding[0xb8L];
	FExpressionInput& AField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionLinearInterpolate.A"); }
	FExpressionInput& BField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionLinearInterpolate.B"); }
	FExpressionInput& AlphaField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionLinearInterpolate.Alpha"); }
	float& ConstAField() { return *GetNativePointerField<float*>(this, "UMaterialExpressionLinearInterpolate.ConstA"); }
	float& ConstBField() { return *GetNativePointerField<float*>(this, "UMaterialExpressionLinearInterpolate.ConstB"); }
	float& ConstAlphaField() { return *GetNativePointerField<float*>(this, "UMaterialExpressionLinearInterpolate.ConstAlpha"); }

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionLinearInterpolate.Compile", Compiler, OutputIndex, MultiplexIndex); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionLinearInterpolate.GetCaption", OutCaptions); }
};

