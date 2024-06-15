#pragma once

#include "BaseDeclarations.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMultiLineEditableText : UWidget
{
	char __padding[0x198L];
	FTextBlockStyle& WidgetStyleField() { return *GetNativePointerField<FTextBlockStyle*>(this, "UMultiLineEditableText.WidgetStyle"); }
	FText& TextField() { return *GetNativePointerField<FText*>(this, "UMultiLineEditableText.Text"); }
	TEnumAsByte<enum ETextJustify::Type>& JustificationField() { return *GetNativePointerField<TEnumAsByte<enum ETextJustify::Type>*>(this, "UMultiLineEditableText.Justification"); }
	bool& bAutoWrapTextField() { return *GetNativePointerField<bool*>(this, "UMultiLineEditableText.bAutoWrapText"); }
	float& WrapTextAtField() { return *GetNativePointerField<float*>(this, "UMultiLineEditableText.WrapTextAt"); }
	FSlateFontInfo& FontField() { return *GetNativePointerField<FSlateFontInfo*>(this, "UMultiLineEditableText.Font"); }
	UMultiLineEditableText::FOnMultiLineEditableTextChangedEvent& OnTextChangedField() { return *GetNativePointerField<UMultiLineEditableText::FOnMultiLineEditableTextChangedEvent*>(this, "UMultiLineEditableText.OnTextChanged"); }
	UMultiLineEditableText::FOnMultiLineEditableTextCommittedEvent& OnTextCommittedField() { return *GetNativePointerField<UMultiLineEditableText::FOnMultiLineEditableTextCommittedEvent*>(this, "UMultiLineEditableText.OnTextCommitted"); }
	TSharedPtr<SMultiLineEditableText,0>& MyMultiLineEditableTextField() { return *GetNativePointerField<TSharedPtr<SMultiLineEditableText,0>*>(this, "UMultiLineEditableText.MyMultiLineEditableText"); }

	// Functions

	FText * GetText(FText * result) { return NativeCall<FText *, FText *>(this, "UMultiLineEditableText.GetText", result); }
	void ReleaseSlateResources(bool bReleaseChildren) { NativeCall<void, bool>(this, "UMultiLineEditableText.ReleaseSlateResources", bReleaseChildren); }
	void SetText(FText InText) { NativeCall<void, FText>(this, "UMultiLineEditableText.SetText", InText); }
	void SynchronizeProperties() { NativeCall<void>(this, "UMultiLineEditableText.SynchronizeProperties"); }
};

