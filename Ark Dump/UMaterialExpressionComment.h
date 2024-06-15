#pragma once

#include "BaseDeclarations.h"
#include "UMaterialExpression.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMaterialExpressionComment : UMaterialExpression
{
	char __padding[0x28L];
	int& SizeXField() { return *GetNativePointerField<int*>(this, "UMaterialExpressionComment.SizeX"); }
	int& SizeYField() { return *GetNativePointerField<int*>(this, "UMaterialExpressionComment.SizeY"); }
	FString& TextField() { return *GetNativePointerField<FString*>(this, "UMaterialExpressionComment.Text"); }
	FLinearColor& CommentColorField() { return *GetNativePointerField<FLinearColor*>(this, "UMaterialExpressionComment.CommentColor"); }

	// Functions

	void GetCaption(TArray<FString> * OutCaptions) { NativeCall<void, TArray<FString> *>(this, "UMaterialExpressionComment.GetCaption", OutCaptions); }
	bool MatchesSearchQuery(const wchar_t * SearchQuery) { return NativeCall<bool, const wchar_t *>(this, "UMaterialExpressionComment.MatchesSearchQuery", SearchQuery); }
	bool Modify(bool bAlwaysMarkDirty) { return NativeCall<bool, bool>(this, "UMaterialExpressionComment.Modify", bAlwaysMarkDirty); }
};

