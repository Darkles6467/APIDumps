#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialExpressionMultiply : UMaterialExpression
{
	char __padding[0x78L];
	FExpressionInput& AField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionMultiply.A"); }
	FExpressionInput& BField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionMultiply.B"); }
	float& ConstAField() { return *GetNativePointerField<float*>(this, "UMaterialExpressionMultiply.ConstA"); }
	float& ConstBField() { return *GetNativePointerField<float*>(this, "UMaterialExpressionMultiply.ConstB"); }

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionMultiply.Compile", Compiler, OutputIndex, MultiplexIndex); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionMultiply.GetCaption", OutCaptions); }
};

