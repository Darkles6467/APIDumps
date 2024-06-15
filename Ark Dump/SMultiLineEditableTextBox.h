#pragma once

#include "BaseDeclarations.h"
#include "SBorder.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SMultiLineEditableTextBox : SBorder
{
	char __padding[0x88L];
	TSharedPtr<SMultiLineEditableText,0>& EditableTextField() { return *GetNativePointerField<TSharedPtr<SMultiLineEditableText,0>*>(this, "SMultiLineEditableTextBox.EditableText"); }
	TAttribute<FSlateColor>& ReadOnlyForegroundColorField() { return *GetNativePointerField<TAttribute<FSlateColor>*>(this, "SMultiLineEditableTextBox.ReadOnlyForegroundColor"); }
	TSharedPtr<IErrorReportingWidget,0>& ErrorReportingField() { return *GetNativePointerField<TSharedPtr<IErrorReportingWidget,0>*>(this, "SMultiLineEditableTextBox.ErrorReporting"); }

	// Functions

	void Construct(const SMultiLineEditableTextBox::FArguments * InArgs) { NativeCall<void, const SMultiLineEditableTextBox::FArguments *>(this, "SMultiLineEditableTextBox.Construct", InArgs); }
	void GoTo(const FTextLocation * NewLocation) { NativeCall<void, const FTextLocation *>(this, "SMultiLineEditableTextBox.GoTo", NewLocation); }
	bool HasKeyboardFocus() { return NativeCall<bool>(this, "SMultiLineEditableTextBox.HasKeyboardFocus"); }
	FReply * OnKeyboardFocusReceived(FReply * result, const FGeometry * MyGeometry, const FKeyboardFocusEvent * InKeyboardFocusEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FKeyboardFocusEvent *>(this, "SMultiLineEditableTextBox.OnKeyboardFocusReceived", result, MyGeometry, InKeyboardFocusEvent); }
	void Refresh() { NativeCall<void>(this, "SMultiLineEditableTextBox.Refresh"); }
	void ScrollTo(const FTextLocation * NewLocation) { NativeCall<void, const FTextLocation *>(this, "SMultiLineEditableTextBox.ScrollTo", NewLocation); }
	void SetError(const FString * InError) { NativeCall<void, const FString *>(this, "SMultiLineEditableTextBox.SetError", InError); }
	void SetError(const FText * InError) { NativeCall<void, const FText *>(this, "SMultiLineEditableTextBox.SetError", InError); }
	void SetText(const TAttribute<FText> * InNewText) { NativeCall<void, const TAttribute<FText> *>(this, "SMultiLineEditableTextBox.SetText", InNewText); }
	bool SupportsKeyboardFocus() { return NativeCall<bool>(this, "SMultiLineEditableTextBox.SupportsKeyboardFocus"); }
	void FArguments() { NativeCall<void>(this, "SMultiLineEditableTextBox.FArguments"); }
	void FArguments() { NativeCall<void>(this, "SMultiLineEditableTextBox.FArguments"); }
};

