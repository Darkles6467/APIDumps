#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialExpressionSquareRoot : UMaterialExpression
{
	char __padding[0x38L];
	FExpressionInput& InputField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionSquareRoot.Input"); }

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionSquareRoot.Compile", Compiler, OutputIndex, MultiplexIndex); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionSquareRoot.GetCaption", OutCaptions); }
};

