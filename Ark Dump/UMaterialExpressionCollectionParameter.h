#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialExpressionCollectionParameter : UMaterialExpression
{
	char __padding[0x20L];
	UMaterialParameterCollection * CollectionField() { return GetNativePointerField<UMaterialParameterCollection *>(this, "UMaterialExpressionCollectionParameter.Collection"); }
	FName& ParameterNameField() { return *GetNativePointerField<FName*>(this, "UMaterialExpressionCollectionParameter.ParameterName"); }
	FGuid& ParameterIdField() { return *GetNativePointerField<FGuid*>(this, "UMaterialExpressionCollectionParameter.ParameterId"); }

	// Functions

	int Compile(FMaterialCompiler * Compiler, int OutputIndex, int MultiplexIndex) { return NativeCall<int, FMaterialCompiler *, int, int>(this, "UMaterialExpressionCollectionParameter.Compile", Compiler, OutputIndex, MultiplexIndex); }
	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionCollectionParameter.GetCaption", OutCaptions); }
	bool MatchesSearchQuery(const wchar_t * SearchQuery) { return NativeCall<bool, const wchar_t *>(this, "UMaterialExpressionCollectionParameter.MatchesSearchQuery", SearchQuery); }
	void PostLoad() { NativeCall<void>(this, "UMaterialExpressionCollectionParameter.PostLoad"); }
};

