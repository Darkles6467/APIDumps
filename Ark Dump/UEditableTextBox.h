#pragma once

#include "BaseDeclarations.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UEditableTextBox : UWidget
{
	char __padding[0x628L];
	FEditableTextBoxStyle& WidgetStyleField() { return *GetNativePointerField<FEditableTextBoxStyle*>(this, "UEditableTextBox.WidgetStyle"); }
	USlateWidgetStyleAsset * Style_DEPRECATEDField() { return GetNativePointerField<USlateWidgetStyleAsset *>(this, "UEditableTextBox.Style_DEPRECATED"); }
	FText& TextField() { return *GetNativePointerField<FText*>(this, "UEditableTextBox.Text"); }
	FText& HintTextField() { return *GetNativePointerField<FText*>(this, "UEditableTextBox.HintText"); }
	FSlateFontInfo& FontField() { return *GetNativePointerField<FSlateFontInfo*>(this, "UEditableTextBox.Font"); }
	FLinearColor& ForegroundColorField() { return *GetNativePointerField<FLinearColor*>(this, "UEditableTextBox.ForegroundColor"); }
	FLinearColor& BackgroundColorField() { return *GetNativePointerField<FLinearColor*>(this, "UEditableTextBox.BackgroundColor"); }
	FLinearColor& ReadOnlyForegroundColorField() { return *GetNativePointerField<FLinearColor*>(this, "UEditableTextBox.ReadOnlyForegroundColor"); }
	bool& IsReadOnlyField() { return *GetNativePointerField<bool*>(this, "UEditableTextBox.IsReadOnly"); }
	bool& IsPasswordField() { return *GetNativePointerField<bool*>(this, "UEditableTextBox.IsPassword"); }
	float& MinimumDesiredWidthField() { return *GetNativePointerField<float*>(this, "UEditableTextBox.MinimumDesiredWidth"); }
	FMargin& PaddingField() { return *GetNativePointerField<FMargin*>(this, "UEditableTextBox.Padding"); }
	bool& IsCaretMovedWhenGainFocusField() { return *GetNativePointerField<bool*>(this, "UEditableTextBox.IsCaretMovedWhenGainFocus"); }
	bool& SelectAllTextWhenFocusedField() { return *GetNativePointerField<bool*>(this, "UEditableTextBox.SelectAllTextWhenFocused"); }
	bool& RevertTextOnEscapeField() { return *GetNativePointerField<bool*>(this, "UEditableTextBox.RevertTextOnEscape"); }
	bool& ClearKeyboardFocusOnCommitField() { return *GetNativePointerField<bool*>(this, "UEditableTextBox.ClearKeyboardFocusOnCommit"); }
	bool& SelectAllTextOnCommitField() { return *GetNativePointerField<bool*>(this, "UEditableTextBox.SelectAllTextOnCommit"); }
	bool& ShouldHandleEscapeField() { return *GetNativePointerField<bool*>(this, "UEditableTextBox.ShouldHandleEscape"); }

	// Functions

	void ClearError() { NativeCall<void>(this, "UEditableTextBox.ClearError"); }
	FText * GetText(FText * result) { return NativeCall<FText *, FText *>(this, "UEditableTextBox.GetText", result); }
	void HandleOnTextChanged(const FText * Text) { NativeCall<void, const FText *>(this, "UEditableTextBox.HandleOnTextChanged", Text); }
	void HandleOnTextCommitted(const FText * Text, ETextCommit::Type CommitMethod) { NativeCall<void, const FText *, ETextCommit::Type>(this, "UEditableTextBox.HandleOnTextCommitted", Text, CommitMethod); }
	void PostLoad() { NativeCall<void>(this, "UEditableTextBox.PostLoad"); }
	void ReleaseSlateResources(bool bReleaseChildren) { NativeCall<void, bool>(this, "UEditableTextBox.ReleaseSlateResources", bReleaseChildren); }
	void SetError(FText InError) { NativeCall<void, FText>(this, "UEditableTextBox.SetError", InError); }
	void SetText(FText InText) { NativeCall<void, FText>(this, "UEditableTextBox.SetText", InText); }
	void SynchronizeProperties() { NativeCall<void>(this, "UEditableTextBox.SynchronizeProperties"); }
};

