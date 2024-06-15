#pragma once

#include "BaseDeclarations.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FKey.h"

struct UEditableText : UWidget
{
	char __padding[0x350L];
	FText& TextField() { return *GetNativePointerField<FText*>(this, "UEditableText.Text"); }
	FText& HintTextField() { return *GetNativePointerField<FText*>(this, "UEditableText.HintText"); }
	FEditableTextStyle& WidgetStyleField() { return *GetNativePointerField<FEditableTextStyle*>(this, "UEditableText.WidgetStyle"); }
	USlateWidgetStyleAsset * Style_DEPRECATEDField() { return GetNativePointerField<USlateWidgetStyleAsset *>(this, "UEditableText.Style_DEPRECATED"); }
	USlateBrushAsset * BackgroundImageSelected_DEPRECATEDField() { return GetNativePointerField<USlateBrushAsset *>(this, "UEditableText.BackgroundImageSelected_DEPRECATED"); }
	USlateBrushAsset * BackgroundImageSelectionTarget_DEPRECATEDField() { return GetNativePointerField<USlateBrushAsset *>(this, "UEditableText.BackgroundImageSelectionTarget_DEPRECATED"); }
	USlateBrushAsset * BackgroundImageComposing_DEPRECATEDField() { return GetNativePointerField<USlateBrushAsset *>(this, "UEditableText.BackgroundImageComposing_DEPRECATED"); }
	USlateBrushAsset * CaretImage_DEPRECATEDField() { return GetNativePointerField<USlateBrushAsset *>(this, "UEditableText.CaretImage_DEPRECATED"); }
	FSlateFontInfo& FontField() { return *GetNativePointerField<FSlateFontInfo*>(this, "UEditableText.Font"); }
	FSlateColor& ColorAndOpacityField() { return *GetNativePointerField<FSlateColor*>(this, "UEditableText.ColorAndOpacity"); }
	bool& IsReadOnlyField() { return *GetNativePointerField<bool*>(this, "UEditableText.IsReadOnly"); }
	bool& IsPasswordField() { return *GetNativePointerField<bool*>(this, "UEditableText.IsPassword"); }
	float& MinimumDesiredWidthField() { return *GetNativePointerField<float*>(this, "UEditableText.MinimumDesiredWidth"); }
	bool& IsCaretMovedWhenGainFocusField() { return *GetNativePointerField<bool*>(this, "UEditableText.IsCaretMovedWhenGainFocus"); }
	bool& SelectAllTextWhenFocusedField() { return *GetNativePointerField<bool*>(this, "UEditableText.SelectAllTextWhenFocused"); }
	bool& RevertTextOnEscapeField() { return *GetNativePointerField<bool*>(this, "UEditableText.RevertTextOnEscape"); }
	bool& ClearKeyboardFocusOnCommitField() { return *GetNativePointerField<bool*>(this, "UEditableText.ClearKeyboardFocusOnCommit"); }
	bool& SelectAllTextOnCommitField() { return *GetNativePointerField<bool*>(this, "UEditableText.SelectAllTextOnCommit"); }

	// Functions

	FText * GetText(FText * result) { return NativeCall<FText *, FText *>(this, "UEditableText.GetText", result); }
	void HandleOnTextChanged(const FText * Text) { NativeCall<void, const FText *>(this, "UEditableText.HandleOnTextChanged", Text); }
	void HandleOnTextCommitted(const FText * Text, ETextCommit::Type CommitMethod) { NativeCall<void, const FText *, ETextCommit::Type>(this, "UEditableText.HandleOnTextCommitted", Text, CommitMethod); }
	void PostLoad() { NativeCall<void>(this, "UEditableText.PostLoad"); }
	void ReleaseSlateResources(bool bReleaseChildren) { NativeCall<void, bool>(this, "UEditableText.ReleaseSlateResources", bReleaseChildren); }
	void SetHintText(FText InHintText) { NativeCall<void, FText>(this, "UEditableText.SetHintText", InHintText); }
	void SetIsPassword(bool InbIsPassword) { NativeCall<void, bool>(this, "UEditableText.SetIsPassword", InbIsPassword); }
	void SetIsReadOnly(bool InbIsReadyOnly) { NativeCall<void, bool>(this, "UEditableText.SetIsReadOnly", InbIsReadyOnly); }
	void SetText(FText InText) { NativeCall<void, FText>(this, "UEditableText.SetText", InText); }
	void SynchronizeProperties() { NativeCall<void>(this, "UEditableText.SynchronizeProperties"); }
};

struct UKeyInputWidget : UEditableText
{
	char __padding[0x28L];
	TSharedPtr<SKeyInputWidget,0>& MyKeyInputWidgetField() { return *GetNativePointerField<TSharedPtr<SKeyInputWidget,0>*>(this, "UKeyInputWidget.MyKeyInputWidget"); }

	// Functions

	void HandleFocusGained(const FKeyboardFocusEvent * __formal) { NativeCall<void, const FKeyboardFocusEvent *>(this, "UKeyInputWidget.HandleFocusGained", __formal); }
	void HandleFocusLost(const FKeyboardFocusEvent * __formal) { NativeCall<void, const FKeyboardFocusEvent *>(this, "UKeyInputWidget.HandleFocusLost", __formal); }
	FReply * HandleKeyUp(FReply * result, const FKeyboardEvent * InKeyboardEvent) { return NativeCall<FReply *, FReply *, const FKeyboardEvent *>(this, "UKeyInputWidget.HandleKeyUp", result, InKeyboardEvent); }
	FReply * HandleMouseDown(FReply * result, const FGeometry * Geometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "UKeyInputWidget.HandleMouseDown", result, Geometry, MouseEvent); }
	FReply * HandleMouseWheel(FReply * result, const FGeometry * Geometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "UKeyInputWidget.HandleMouseWheel", result, Geometry, MouseEvent); }
	void SetKey(FKey key, bool bInShift, bool bInCtrl, bool bInAlt) { NativeCall<void, FKey, bool, bool, bool>(this, "UKeyInputWidget.SetKey", key, bInShift, bInCtrl, bInAlt); }
	void SynchronizeProperties() { NativeCall<void>(this, "UKeyInputWidget.SynchronizeProperties"); }
};

