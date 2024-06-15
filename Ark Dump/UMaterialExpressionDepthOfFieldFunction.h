#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialExpressionDepthOfFieldFunction : UMaterialExpression
{
	char __padding[0x40L];
	TEnumAsByte<enum EDepthOfFieldFunctionValue>& FunctionValueField() { return *GetNativePointerField<TEnumAsByte<enum EDepthOfFieldFunctionValue>*>(this, "UMaterialExpressionDepthOfFieldFunction.FunctionValue"); }
	FExpressionInput& DepthField() { return *GetNativePointerField<FExpressionInput*>(this, "UMaterialExpressionDepthOfFieldFunction.Depth"); }

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionDepthOfFieldFunction.Compile", Compiler, OutputIndex, MultiplexIndex); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionDepthOfFieldFunction.GetCaption", OutCaptions); }
};

