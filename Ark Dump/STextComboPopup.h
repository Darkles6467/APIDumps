#pragma once

#include "BaseDeclarations.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct STextComboPopup : SCompoundWidget
{
	char __padding[0x48L];
	TArray<TSharedPtr<FString,0>>& StringsField() { return *GetNativePointerField<TArray<TSharedPtr<FString,0>>*>(this, "STextComboPopup.Strings"); }
	TSharedPtr<SComboBox<TSharedPtr<FString,0> >,0>& StringComboField() { return *GetNativePointerField<TSharedPtr<SComboBox<TSharedPtr<FString,0> >,0>*>(this, "STextComboPopup.StringCombo"); }
	TSharedPtr<FString,0>& SelectedItemField() { return *GetNativePointerField<TSharedPtr<FString,0>*>(this, "STextComboPopup.SelectedItem"); }
};

