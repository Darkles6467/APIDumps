#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialExpressionMaterialFunctionCall : UMaterialExpression
{
	char __padding[0x28L];
	UMaterialFunction * MaterialFunctionField() { return GetNativePointerField<UMaterialFunction *>(this, "UMaterialExpressionMaterialFunctionCall.MaterialFunction"); }
	TArray<FFunctionExpressionInput>& FunctionInputsField() { return *GetNativePointerField<TArray<FFunctionExpressionInput>*>(this, "UMaterialExpressionMaterialFunctionCall.FunctionInputs"); }
	TArray<FFunctionExpressionOutput>& FunctionOutputsField() { return *GetNativePointerField<TArray<FFunctionExpressionOutput>*>(this, "UMaterialExpressionMaterialFunctionCall.FunctionOutputs"); }

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionMaterialFunctionCall.Compile", Compiler, OutputIndex, MultiplexIndex); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionMaterialFunctionCall.GetCaption", OutCaptions); }
	FExpressionInput * GetInput(int InputIndex) { return NativeCall<FExpressionInput *, int>(this, "UMaterialExpressionMaterialFunctionCall.GetInput", InputIndex); }
	FString * GetInputName(FString * result, int InputIndex) { return NativeCall<FString *, FString *, int>(this, "UMaterialExpressionMaterialFunctionCall.GetInputName", result, InputIndex); }
	const TArray<FExpressionInput *> * GetInputs(const TArray<FExpressionInput *> * result) { return NativeCall<const TArray<FExpressionInput *> *, const TArray<FExpressionInput *> *>(this, "UMaterialExpressionMaterialFunctionCall.GetInputs", result); }
	bool IsInputConnectionRequired(int InputIndex) { return NativeCall<bool, int>(this, "UMaterialExpressionMaterialFunctionCall.IsInputConnectionRequired", InputIndex); }
	bool IsResultMaterialAttributes(int OutputIndex) { return NativeCall<bool, int>(this, "UMaterialExpressionMaterialFunctionCall.IsResultMaterialAttributes", OutputIndex); }
	bool MatchesSearchQuery(const wchar_t * SearchQuery) { return NativeCall<bool, const wchar_t *>(this, "UMaterialExpressionMaterialFunctionCall.MatchesSearchQuery", SearchQuery); }
	void PostLoad() { NativeCall<void>(this, "UMaterialExpressionMaterialFunctionCall.PostLoad"); }
};

