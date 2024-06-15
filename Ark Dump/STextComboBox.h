#pragma once

#include "BaseDeclarations.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct STextComboBox : SCompoundWidget
{
	char __padding[0x40L];
	TSharedPtr<FString,0>& SelectedItemField() { return *GetNativePointerField<TSharedPtr<FString,0>*>(this, "STextComboBox.SelectedItem"); }
	TArray<TSharedPtr<FString,0>>& StringsField() { return *GetNativePointerField<TArray<TSharedPtr<FString,0>>*>(this, "STextComboBox.Strings"); }
	TSharedPtr<SComboBox<TSharedPtr<FString,0> >,0>& StringComboField() { return *GetNativePointerField<TSharedPtr<SComboBox<TSharedPtr<FString,0> >,0>*>(this, "STextComboBox.StringCombo"); }
};

