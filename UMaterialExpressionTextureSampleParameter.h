#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpressionTextureSample.h"
#include "FGuid.h"

struct UMaterialExpressionTextureSampleParameter : UMaterialExpressionTextureSample
{
	char __padding[0x20L];
	FName& ParameterNameField() { return *GetNativePointerField<FName*>(this, "UMaterialExpressionTextureSampleParameter.ParameterName"); }
	FGuid& ExpressionGUIDField() { return *GetNativePointerField<FGuid*>(this, "UMaterialExpressionTextureSampleParameter.ExpressionGUID"); }
	FName& GroupField() { return *GetNativePointerField<FName*>(this, "UMaterialExpressionTextureSampleParameter.Group"); }

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionTextureSampleParameter.Compile", Compiler, OutputIndex, MultiplexIndex); }
	void GetAllParameterNames(TArray<FName> * OutParameterNames, TArray<FGuid> * OutParameterIds) { NativeCall<void, TArray<FName> *, TArray<FGuid> *>(this, "UMaterialExpressionTextureSampleParameter.GetAllParameterNames", OutParameterNames, OutParameterIds); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionTextureSampleParameter.GetCaption", OutCaptions); }
	const wchar_t * GetRequirements() { return NativeCall<const wchar_t *>(this, "UMaterialExpressionTextureSampleParameter.GetRequirements"); }
	bool MatchesSearchQuery(const wchar_t * SearchQuery) { return NativeCall<bool, const wchar_t *>(this, "UMaterialExpressionTextureSampleParameter.MatchesSearchQuery", SearchQuery); }
};

