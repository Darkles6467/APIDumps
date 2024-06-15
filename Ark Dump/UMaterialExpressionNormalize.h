#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialExpressionNormalize : UMaterialExpression
{
	char __padding[0x38L];
	FExpressionInput& VectorInputField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionNormalize.VectorInput"); }

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionNormalize.Compile", Compiler, OutputIndex, MultiplexIndex); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionNormalize.GetCaption", OutCaptions); }
};

