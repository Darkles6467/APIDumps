#pragma once

#include "BaseDeclarations.h"
struct FGraphDisplayInfo
{
	char __padding[0x90L];
	FText& PlainNameField() { return *GetNativePointerField<FText*>(this, "FGraphDisplayInfo.PlainName"); }
	FText& DisplayNameField() { return *GetNativePointerField<FText*>(this, "FGraphDisplayInfo.DisplayName"); }
	FString& TooltipField() { return *GetNativePointerField<FString*>(this, "FGraphDisplayInfo.Tooltip"); }
	FString& DocLinkField() { return *GetNativePointerField<FString*>(this, "FGraphDisplayInfo.DocLink"); }
	FString& DocExcerptNameField() { return *GetNativePointerField<FString*>(this, "FGraphDisplayInfo.DocExcerptName"); }
	TArray<FString>& NotesField() { return *GetNativePointerField<TArray<FString>*>(this, "FGraphDisplayInfo.Notes"); }
};

