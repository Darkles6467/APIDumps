#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FExpressionOutput.h"

struct UMaterialExpressionDynamicParameter : UMaterialExpression
{
	char __padding[0x10L];
	TArray<FString>& ParamNamesField() { return *GetNativePointerField<TArray<FString>*>(this, "UMaterialExpressionDynamicParameter.ParamNames"); }

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionDynamicParameter.Compile", Compiler, OutputIndex, MultiplexIndex); }
	bool CopyDynamicParameterNames(const UMaterialExpressionDynamicParameter * FromParam) { return NativeCall<bool, const UMaterialExpressionDynamicParameter *>(this, "UMaterialExpressionDynamicParameter.CopyDynamicParameterNames", FromParam); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionDynamicParameter.GetCaption", OutCaptions); }
	TArray<FExpressionOutput> * GetOutputs() { return NativeCall<TArray<FExpressionOutput> *>(this, "UMaterialExpressionDynamicParameter.GetOutputs"); }
	bool MatchesSearchQuery(const wchar_t * SearchQuery) { return NativeCall<bool, const wchar_t *>(this, "UMaterialExpressionDynamicParameter.MatchesSearchQuery", SearchQuery); }
};

