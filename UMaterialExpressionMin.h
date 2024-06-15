#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialExpressionMin : UMaterialExpression
{
	char __padding[0x78L];
	FExpressionInput& AField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionMin.A"); }
	FExpressionInput& BField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionMin.B"); }
	float& ConstAField() { return *GetNativePointerField<float*>(this, "UMaterialExpressionMin.ConstA"); }
	float& ConstBField() { return *GetNativePointerField<float*>(this, "UMaterialExpressionMin.ConstB"); }

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionMin.Compile", Compiler, OutputIndex, MultiplexIndex); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionMin.GetCaption", OutCaptions); }
};

