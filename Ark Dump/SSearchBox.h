#pragma once

#include "BaseDeclarations.h"
#include "SBorder.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SEditableTextBox : SBorder
{
	char __padding[0xa8L];
	TAttribute<bool>& bShouldHandleEscapeField() { return *GetNativePointerField<TAttribute<bool>*>(this, "SEditableTextBox.bShouldHandleEscape"); }
	const FEditableTextBoxStyle * StyleField() { return GetNativePointerField<const FEditableTextBoxStyle *>(this, "SEditableTextBox.Style"); }
	TAttribute<FSlateColor>& ReadOnlyForegroundColorField() { return *GetNativePointerField<TAttribute<FSlateColor>*>(this, "SEditableTextBox.ReadOnlyForegroundColor"); }
	TSharedPtr<IErrorReportingWidget,0>& ErrorReportingField() { return *GetNativePointerField<TSharedPtr<IErrorReportingWidget,0>*>(this, "SEditableTextBox.ErrorReporting"); }

	// Functions

	void FArguments() { NativeCall<void>(this, "SEditableTextBox.FArguments"); }
	void FArguments() { NativeCall<void>(this, "SEditableTextBox.FArguments"); }
	void Construct(const SEditableTextBox::FArguments * InArgs) { NativeCall<void, const SEditableTextBox::FArguments *>(this, "SEditableTextBox.Construct", InArgs); }
	bool HasKeyboardFocus() { return NativeCall<bool>(this, "SEditableTextBox.HasKeyboardFocus"); }
	FReply * OnKeyDown(FReply * result, const FGeometry * MyGeometry, const FKeyboardEvent * InKeyboardEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FKeyboardEvent *>(this, "SEditableTextBox.OnKeyDown", result, MyGeometry, InKeyboardEvent); }
	FReply * OnKeyboardFocusReceived(FReply * result, const FGeometry * MyGeometry, const FKeyboardFocusEvent * InKeyboardFocusEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FKeyboardFocusEvent *>(this, "SEditableTextBox.OnKeyboardFocusReceived", result, MyGeometry, InKeyboardFocusEvent); }
	void SetError(const FString * InError) { NativeCall<void, const FString *>(this, "SEditableTextBox.SetError", InError); }
	void SetError(const FText * InError) { NativeCall<void, const FText *>(this, "SEditableTextBox.SetError", InError); }
	void SetHintText(const TAttribute<FText> * InHintText) { NativeCall<void, const TAttribute<FText> *>(this, "SEditableTextBox.SetHintText", InHintText); }
	void SetIsPassword(TAttribute<bool> InIsPassword) { NativeCall<void, TAttribute<bool>>(this, "SEditableTextBox.SetIsPassword", InIsPassword); }
	void SetIsReadOnly(TAttribute<bool> InIsReadOnly) { NativeCall<void, TAttribute<bool>>(this, "SEditableTextBox.SetIsReadOnly", InIsReadOnly); }
	void SetShouldHandleEscape(bool ShouldHandle) { NativeCall<void, bool>(this, "SEditableTextBox.SetShouldHandleEscape", ShouldHandle); }
	void SetStyle(const FEditableTextBoxStyle * InStyle) { NativeCall<void, const FEditableTextBoxStyle *>(this, "SEditableTextBox.SetStyle", InStyle); }
	void SetText(const TAttribute<FText> * InNewText) { NativeCall<void, const TAttribute<FText> *>(this, "SEditableTextBox.SetText", InNewText); }
	bool SupportsKeyboardFocus() { return NativeCall<bool>(this, "SEditableTextBox.SupportsKeyboardFocus"); }
};

struct SSearchBox : SEditableTextBox
{
	enum SearchDirection
	{
		Previous = 0x0,
		Next = 0x1,
	};

	char __padding[0xb8L];
	TAttribute<bool>& DelayChangeNotificationsWhileTypingField() { return *GetNativePointerField<TAttribute<bool>*>(this, "SSearchBox.DelayChangeNotificationsWhileTyping"); }
	FSlateFontInfo& ActiveFontField() { return *GetNativePointerField<FSlateFontInfo*>(this, "SSearchBox.ActiveFont"); }
	FSlateFontInfo& InactiveFontField() { return *GetNativePointerField<FSlateFontInfo*>(this, "SSearchBox.InactiveFont"); }
	long double& CurrentTimeField() { return *GetNativePointerField<long double*>(this, "SSearchBox.CurrentTime"); }
	long double& LastTypeTimeField() { return *GetNativePointerField<long double*>(this, "SSearchBox.LastTypeTime"); }
	long double& FilterDelayAfterTypingField() { return *GetNativePointerField<long double*>(this, "SSearchBox.FilterDelayAfterTyping"); }
	bool& bTypingFilterTextField() { return *GetNativePointerField<bool*>(this, "SSearchBox.bTypingFilterText"); }
	FText& LastPendingTextChangedValueField() { return *GetNativePointerField<FText*>(this, "SSearchBox.LastPendingTextChangedValue"); }
};

