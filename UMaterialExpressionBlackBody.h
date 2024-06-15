#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialExpressionBlackBody : UMaterialExpression
{
	char __padding[0x38L];
	FExpressionInput& TempField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionBlackBody.Temp"); }

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionBlackBody.Compile", Compiler, OutputIndex, MultiplexIndex); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionBlackBody.GetCaption", OutCaptions); }
};

