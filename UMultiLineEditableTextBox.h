#pragma once

#include "BaseDeclarations.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMultiLineEditableTextBox : UWidget
{
	char __padding[0x6f0L];
	FEditableTextBoxStyle& WidgetStyleField() { return *GetNativePointerField<FEditableTextBoxStyle*>(this, "UMultiLineEditableTextBox.WidgetStyle"); }
	FTextBlockStyle& TextStyleField() { return *GetNativePointerField<FTextBlockStyle*>(this, "UMultiLineEditableTextBox.TextStyle"); }
	USlateWidgetStyleAsset * Style_DEPRECATEDField() { return GetNativePointerField<USlateWidgetStyleAsset *>(this, "UMultiLineEditableTextBox.Style_DEPRECATED"); }
	FText& TextField() { return *GetNativePointerField<FText*>(this, "UMultiLineEditableTextBox.Text"); }
	TEnumAsByte<enum ETextJustify::Type>& JustificationField() { return *GetNativePointerField<TEnumAsByte<enum ETextJustify::Type>*>(this, "UMultiLineEditableTextBox.Justification"); }
	bool& bAutoWrapTextField() { return *GetNativePointerField<bool*>(this, "UMultiLineEditableTextBox.bAutoWrapText"); }
	float& WrapTextAtField() { return *GetNativePointerField<float*>(this, "UMultiLineEditableTextBox.WrapTextAt"); }
	FModifierKeysState& InKeyField() { return *GetNativePointerField<FModifierKeysState*>(this, "UMultiLineEditableTextBox.InKey"); }
	char& ModifierKeyField() { return *GetNativePointerField<char*>(this, "UMultiLineEditableTextBox.ModifierKey"); }
	FSlateFontInfo& FontField() { return *GetNativePointerField<FSlateFontInfo*>(this, "UMultiLineEditableTextBox.Font"); }
	FLinearColor& ForegroundColorField() { return *GetNativePointerField<FLinearColor*>(this, "UMultiLineEditableTextBox.ForegroundColor"); }
	FLinearColor& BackgroundColorField() { return *GetNativePointerField<FLinearColor*>(this, "UMultiLineEditableTextBox.BackgroundColor"); }
	FLinearColor& ReadOnlyForegroundColorField() { return *GetNativePointerField<FLinearColor*>(this, "UMultiLineEditableTextBox.ReadOnlyForegroundColor"); }
	UMultiLineEditableTextBox::FOnMultiLineEditableTextBoxChangedEvent& OnTextChangedField() { return *GetNativePointerField<UMultiLineEditableTextBox::FOnMultiLineEditableTextBoxChangedEvent*>(this, "UMultiLineEditableTextBox.OnTextChanged"); }
	UMultiLineEditableTextBox::FOnMultiLineEditableTextBoxCommittedEvent& OnTextCommittedField() { return *GetNativePointerField<UMultiLineEditableTextBox::FOnMultiLineEditableTextBoxCommittedEvent*>(this, "UMultiLineEditableTextBox.OnTextCommitted"); }
	TSharedPtr<SMultiLineEditableTextBox,0>& MyEditableTextBlockField() { return *GetNativePointerField<TSharedPtr<SMultiLineEditableTextBox,0>*>(this, "UMultiLineEditableTextBox.MyEditableTextBlock"); }

	// Functions

	FText * GetText(FText * result) { return NativeCall<FText *, FText *>(this, "UMultiLineEditableTextBox.GetText", result); }
	void HandleOnTextChanged(const FText * Text) { NativeCall<void, const FText *>(this, "UMultiLineEditableTextBox.HandleOnTextChanged", Text); }
	void HandleOnTextCommitted(const FText * Text, ETextCommit::Type CommitMethod) { NativeCall<void, const FText *, ETextCommit::Type>(this, "UMultiLineEditableTextBox.HandleOnTextCommitted", Text, CommitMethod); }
	void PostLoad() { NativeCall<void>(this, "UMultiLineEditableTextBox.PostLoad"); }
	void ReleaseSlateResources(bool bReleaseChildren) { NativeCall<void, bool>(this, "UMultiLineEditableTextBox.ReleaseSlateResources", bReleaseChildren); }
	void SetError(FText InError) { NativeCall<void, FText>(this, "UMultiLineEditableTextBox.SetError", InError); }
	void SetText(FText InText) { NativeCall<void, FText>(this, "UMultiLineEditableTextBox.SetText", InText); }
	void SynchronizeProperties() { NativeCall<void>(this, "UMultiLineEditableTextBox.SynchronizeProperties"); }
};

