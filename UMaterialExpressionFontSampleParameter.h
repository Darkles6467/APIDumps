#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FGuid.h"

struct UMaterialExpressionFontSample : UMaterialExpression
{
	char __padding[0x10L];
	UFont * FontField() { return GetNativePointerField<UFont *>(this, "UMaterialExpressionFontSample.Font"); }
	int& FontTexturePageField() { return *GetNativePointerField<int*>(this, "UMaterialExpressionFontSample.FontTexturePage"); }

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionFontSample.Compile", Compiler, OutputIndex, MultiplexIndex); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionFontSample.GetCaption", OutCaptions); }
	bool MatchesSearchQuery(const wchar_t * SearchQuery) { return NativeCall<bool, const wchar_t *>(this, "UMaterialExpressionFontSample.MatchesSearchQuery", SearchQuery); }
};

struct UMaterialExpressionFontSampleParameter : UMaterialExpressionFontSample
{
	char __padding[0x20L];
	FName& ParameterNameField() { return *GetNativePointerField<FName*>(this, "UMaterialExpressionFontSampleParameter.ParameterName"); }
	FGuid& ExpressionGUIDField() { return *GetNativePointerField<FGuid*>(this, "UMaterialExpressionFontSampleParameter.ExpressionGUID"); }
	FName& GroupField() { return *GetNativePointerField<FName*>(this, "UMaterialExpressionFontSampleParameter.Group"); }

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionFontSampleParameter.Compile", Compiler, OutputIndex, MultiplexIndex); }
	void GetAllParameterNames(TArray<FName> * OutParameterNames, TArray<FGuid> * OutParameterIds) { NativeCall<void, TArray<FName> *, TArray<FGuid> *>(this, "UMaterialExpressionFontSampleParameter.GetAllParameterNames", OutParameterNames, OutParameterIds); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionFontSampleParameter.GetCaption", OutCaptions); }
	bool MatchesSearchQuery(const wchar_t * SearchQuery) { return NativeCall<bool, const wchar_t *>(this, "UMaterialExpressionFontSampleParameter.MatchesSearchQuery", SearchQuery); }
	void SetDefaultFont() { NativeCall<void>(this, "UMaterialExpressionFontSampleParameter.SetDefaultFont"); }
};

