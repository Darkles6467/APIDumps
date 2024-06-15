#pragma once

#include "BaseDeclarations.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SSuggestionTextBox : SCompoundWidget
{
	char __padding[0x78L];
	bool& IgnoreUIUpdateField() { return *GetNativePointerField<bool*>(this, "SSuggestionTextBox.IgnoreUIUpdate"); }
	TArray<TSharedPtr<FString,0>>& SuggestionsField() { return *GetNativePointerField<TArray<TSharedPtr<FString,0>>*>(this, "SSuggestionTextBox.Suggestions"); }
	TSharedPtr<SListView<TSharedPtr<FString,0> >,0>& SuggestionListViewField() { return *GetNativePointerField<TSharedPtr<SListView<TSharedPtr<FString,0> >,0>*>(this, "SSuggestionTextBox.SuggestionListView"); }
	int& SelectedSuggestionField() { return *GetNativePointerField<int*>(this, "SSuggestionTextBox.SelectedSuggestion"); }
	const FTextBlockStyle * SuggestionTextStyleField() { return GetNativePointerField<const FTextBlockStyle *>(this, "SSuggestionTextBox.SuggestionTextStyle"); }
};

