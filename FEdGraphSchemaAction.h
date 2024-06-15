#pragma once

#include "BaseDeclarations.h"
struct FEdGraphSchemaAction
{
	char __padding[0x90L];
	FText& MenuDescriptionField() { return *GetNativePointerField<FText*>(this, "FEdGraphSchemaAction.MenuDescription"); }
	FString& TooltipDescriptionField() { return *GetNativePointerField<FString*>(this, "FEdGraphSchemaAction.TooltipDescription"); }
	FString& CategoryField() { return *GetNativePointerField<FString*>(this, "FEdGraphSchemaAction.Category"); }
	FString& KeywordsField() { return *GetNativePointerField<FString*>(this, "FEdGraphSchemaAction.Keywords"); }
	int& GroupingField() { return *GetNativePointerField<int*>(this, "FEdGraphSchemaAction.Grouping"); }
	int& SectionIDField() { return *GetNativePointerField<int*>(this, "FEdGraphSchemaAction.SectionID"); }
	FText& CachedSearchTitleField() { return *GetNativePointerField<FText*>(this, "FEdGraphSchemaAction.CachedSearchTitle"); }

	// Functions

	FName * GetTypeId(FName * result) { return NativeCall<FName *, FName *>(this, "FEdGraphSchemaAction.GetTypeId", result); }
	static FName * StaticGetTypeId(FName * result) { return NativeCall<FName *, FName *>(nullptr, "FEdGraphSchemaAction.StaticGetTypeId", result); }
};

