#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialExpressionConstantBiasScale : UMaterialExpression
{
	char __padding[0x40L];
	FExpressionInput& InputField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionConstantBiasScale.Input"); }
	float& BiasField() { return *GetNativePointerField<float*>(this, "UMaterialExpressionConstantBiasScale.Bias"); }
	float& ScaleField() { return *GetNativePointerField<float*>(this, "UMaterialExpressionConstantBiasScale.Scale"); }

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionConstantBiasScale.Compile", Compiler, OutputIndex, MultiplexIndex); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionConstantBiasScale.GetCaption", OutCaptions); }
};

