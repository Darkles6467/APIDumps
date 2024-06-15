#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpression.h"
#include "FGuid.h"

struct UMaterialExpressionParameter : UMaterialExpression
{
	char __padding[0x20L];
	FName& ParameterNameField() { return *GetNativePointerField<FName*>(this, "UMaterialExpressionParameter.ParameterName"); }
	FGuid& ExpressionGUIDField() { return *GetNativePointerField<FGuid*>(this, "UMaterialExpressionParameter.ExpressionGUID"); }
	FName& GroupField() { return *GetNativePointerField<FName*>(this, "UMaterialExpressionParameter.Group"); }

	// Functions

	void GetAllParameterNames(TArray<FName> * OutParameterNames, TArray<FGuid> * OutParameterIds) { NativeCall<void, TArray<FName> *, TArray<FGuid> *>(this, "UMaterialExpressionParameter.GetAllParameterNames", OutParameterNames, OutParameterIds); }
	bool MatchesSearchQuery(const wchar_t * SearchQuery) { return NativeCall<bool, const wchar_t *>(this, "UMaterialExpressionParameter.MatchesSearchQuery", SearchQuery); }
};

