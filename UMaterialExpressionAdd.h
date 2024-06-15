#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialExpressionAdd : UMaterialExpression
{
	char __padding[0x78L];
	FExpressionInput& AField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionAdd.A"); }
	FExpressionInput& BField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionAdd.B"); }
	float& ConstAField() { return *GetNativePointerField<float*>(this, "UMaterialExpressionAdd.ConstA"); }
	float& ConstBField() { return *GetNativePointerField<float*>(this, "UMaterialExpressionAdd.ConstB"); }

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionAdd.Compile", Compiler, OutputIndex, MultiplexIndex); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionAdd.GetCaption", OutCaptions); }
};

