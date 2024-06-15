#pragma once

#include "BaseDeclarations.h"
#include "UObject.h"
#include "FMaterialExpressionKey.h"

struct UMaterialExpression : UObject
{
	char __padding[0x50L];
	UMaterial * MaterialField() { return GetNativePointerField<UMaterial *>(this, "UMaterialExpression.Material"); }
	UMaterialFunction * FunctionField() { return GetNativePointerField<UMaterialFunction *>(this, "UMaterialExpression.Function"); }
	FString& DescField() { return *GetNativePointerField<FString*>(this, "UMaterialExpression.Desc"); }
	FColor& BorderColorField() { return *GetNativePointerField<FColor*>(this, "UMaterialExpression.BorderColor"); }
	TArray<FString>& MenuCategoriesField() { return *GetNativePointerField<TArray<FString>*>(this, "UMaterialExpression.MenuCategories"); }
	TArray<FExpressionOutput>& OutputsField() { return *GetNativePointerField<TArray<FExpressionOutput>*>(this, "UMaterialExpression.Outputs"); }

	// Functions

	int CompilePreview(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpression.CompilePreview", Compiler, OutputIndex, MultiplexIndex); }
	int CompilerError(FMaterialCompiler * Compiler, const wchar_t * pcMessage) { return NativeCall<int, FMaterialCompiler *, const wchar_t *>(this, "UMaterialExpression.CompilerError", Compiler, pcMessage); }
	bool ContainsInputLoopInternal(TArray<FMaterialExpressionKey> * ExpressionStack) { return NativeCall<bool, TArray<FMaterialExpressionKey> *>(this, "UMaterialExpression.ContainsInputLoopInternal", ExpressionStack); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpression.GetCaption", OutCaptions); }
	int GetHeight() { return NativeCall<int>(this, "UMaterialExpression.GetHeight"); }
	FExpressionInput * GetInput(int InputIndex) { return NativeCall<FExpressionInput *, int>(this, "UMaterialExpression.GetInput", InputIndex); }
	FString * GetInputName(FString * result, int InputIndex) { return NativeCall<FString *, FString *, int>(this, "UMaterialExpression.GetInputName", result, InputIndex); }
	const TArray<FExpressionInput *> * GetInputs(const TArray<FExpressionInput *> * result) { return NativeCall<const TArray<FExpressionInput *> *, const TArray<FExpressionInput *> *>(this, "UMaterialExpression.GetInputs", result); }
	FGuid * GetMaterialExpressionId() { return NativeCall<FGuid *>(this, "UMaterialExpression.GetMaterialExpressionId"); }
	FGuid * GetParameterExpressionId() { return NativeCall<FGuid *>(this, "UMaterialExpression.GetParameterExpressionId"); }
	bool MatchesSearchQuery(const wchar_t * SearchQuery) { return NativeCall<bool, const wchar_t *>(this, "UMaterialExpression.MatchesSearchQuery", SearchQuery); }
	bool Modify(bool bAlwaysMarkDirty) { return NativeCall<bool, bool>(this, "UMaterialExpression.Modify", bAlwaysMarkDirty); }
	void PostLoad() { NativeCall<void>(this, "UMaterialExpression.PostLoad"); }
	void Serialize(FArchive * Ar) { NativeCall<void, FArchive *>(this, "UMaterialExpression.Serialize", Ar); }
};

