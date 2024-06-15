#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialExpressionCustomTexture : UMaterialExpression
{
	char __padding[0x8L];

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionCustomTexture.Compile", Compiler, OutputIndex, MultiplexIndex); }
	int CompilePreview(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionCustomTexture.CompilePreview", Compiler, OutputIndex, MultiplexIndex); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionCustomTexture.GetCaption", OutCaptions); }
	unsigned __int64 GetReferencedTexture() { return NativeCall<unsigned __int64>(this, "UMaterialExpressionCustomTexture.GetReferencedTexture"); }
	bool MatchesSearchQuery(const wchar_t * SearchQuery) { return NativeCall<bool, const wchar_t *>(this, "UMaterialExpressionCustomTexture.MatchesSearchQuery", SearchQuery); }
};

