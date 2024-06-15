#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialExpressionDeriveNormalZ : UMaterialExpression
{
	char __padding[0x38L];
	FExpressionInput& InXYField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionDeriveNormalZ.InXY"); }

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionDeriveNormalZ.Compile", Compiler, OutputIndex, MultiplexIndex); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionDeriveNormalZ.GetCaption", OutCaptions); }
};

