#pragma once

#include "BaseDeclarations.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FKeyboardEvent.h"

struct UComboBoxString : UWidget
{
	char __padding[0x4b0L];
	FComboBoxStyle& WidgetStyleField() { return *GetNativePointerField<FComboBoxStyle*>(this, "UComboBoxString.WidgetStyle"); }
	FSlateFontInfo& FontField() { return *GetNativePointerField<FSlateFontInfo*>(this, "UComboBoxString.Font"); }
	FSlateColor& TextColorAndOpacityField() { return *GetNativePointerField<FSlateColor*>(this, "UComboBoxString.TextColorAndOpacity"); }
	FSlateColor& ForegroundColorField() { return *GetNativePointerField<FSlateColor*>(this, "UComboBoxString.ForegroundColor"); }
	TArray<FString>& DefaultOptionsField() { return *GetNativePointerField<TArray<FString>*>(this, "UComboBoxString.DefaultOptions"); }
	FString& SelectedOptionField() { return *GetNativePointerField<FString*>(this, "UComboBoxString.SelectedOption"); }
	FMargin& ContentPaddingField() { return *GetNativePointerField<FMargin*>(this, "UComboBoxString.ContentPadding"); }
	float& MaxListHeightField() { return *GetNativePointerField<float*>(this, "UComboBoxString.MaxListHeight"); }
	bool& HasDownArrowField() { return *GetNativePointerField<bool*>(this, "UComboBoxString.HasDownArrow"); }
	UComboBoxString::FOnSelectionChangedEvent& OnSelectionChangedField() { return *GetNativePointerField<UComboBoxString::FOnSelectionChangedEvent*>(this, "UComboBoxString.OnSelectionChanged"); }
	UComboBoxString::FOnOpeningEvent& OnOpeningField() { return *GetNativePointerField<UComboBoxString::FOnOpeningEvent*>(this, "UComboBoxString.OnOpening"); }
	TArray<TSharedPtr<FString,0>>& OptionsField() { return *GetNativePointerField<TArray<TSharedPtr<FString,0>>*>(this, "UComboBoxString.Options"); }
	TSharedPtr<SComboBox<TSharedPtr<FString,0> >,0>& MyComboBoxField() { return *GetNativePointerField<TSharedPtr<SComboBox<TSharedPtr<FString,0> >,0>*>(this, "UComboBoxString.MyComboBox"); }
	TSharedPtr<FString,0>& CurrentOptionPtrField() { return *GetNativePointerField<TSharedPtr<FString,0>*>(this, "UComboBoxString.CurrentOptionPtr"); }

	// Functions

	int GetOptionsCount() { return NativeCall<int>(this, "UComboBoxString.GetOptionsCount"); }
	void AddOption(const FString * Option) { NativeCall<void, const FString *>(this, "UComboBoxString.AddOption", Option); }
	void FOnSelectionChangedEvent(FString InParam1, ESelectInfo::Type InParam2) { NativeCall<void, FString, ESelectInfo::Type>(this, "UComboBoxString.FOnSelectionChangedEvent", InParam1, InParam2); }
	void ClearOptions() { NativeCall<void>(this, "UComboBoxString.ClearOptions"); }
	void ClearSelection() { NativeCall<void>(this, "UComboBoxString.ClearSelection"); }
	int FindOptionIndex(const FString * Option) { return NativeCall<int, const FString *>(this, "UComboBoxString.FindOptionIndex", Option); }
	FString * GetOptionAtIndex(FString * result, int Index) { return NativeCall<FString *, FString *, int>(this, "UComboBoxString.GetOptionAtIndex", result, Index); }
	int GetSelectedIndex() { return NativeCall<int>(this, "UComboBoxString.GetSelectedIndex"); }
	FString * GetSelectedOption(FString * result) { return NativeCall<FString *, FString *>(this, "UComboBoxString.GetSelectedOption", result); }
	void HandleOpening() { NativeCall<void>(this, "UComboBoxString.HandleOpening"); }
	void HandleSelectionChanged(TSharedPtr<FString,0> Item, ESelectInfo::Type SelectionType) { NativeCall<void, TSharedPtr<FString,0>, ESelectInfo::Type>(this, "UComboBoxString.HandleSelectionChanged", Item, SelectionType); }
	bool IsOpen() { return NativeCall<bool>(this, "UComboBoxString.IsOpen"); }
	void ManualOpenList() { NativeCall<void>(this, "UComboBoxString.ManualOpenList"); }
	void RefreshOptions() { NativeCall<void>(this, "UComboBoxString.RefreshOptions"); }
	void ReleaseSlateResources(bool bReleaseChildren) { NativeCall<void, bool>(this, "UComboBoxString.ReleaseSlateResources", bReleaseChildren); }
	bool RemoveOption(const FString * Option) { return NativeCall<bool, const FString *>(this, "UComboBoxString.RemoveOption", Option); }
	void SetSelectedIndex(int index) { NativeCall<void, int>(this, "UComboBoxString.SetSelectedIndex", index); }
	void SetSelectedOption(FString Option) { NativeCall<void, FString>(this, "UComboBoxString.SetSelectedOption", Option); }
	void SimulateOnKeyDown(FGeometry MyGeometry, FKeyboardEvent KeyboardEvent) { NativeCall<void, FGeometry, FKeyboardEvent>(this, "UComboBoxString.SimulateOnKeyDown", MyGeometry, KeyboardEvent); }
};

