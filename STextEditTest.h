#pragma once

#include "BaseDeclarations.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct STextEditTest : SCompoundWidget
{
	char __padding[0xc8L];
	FCurveSequence& AnimationField() { return *GetNativePointerField<FCurveSequence*>(this, "STextEditTest.Animation"); }
	TSharedPtr<SErrorText,0>& ErrorTextField() { return *GetNativePointerField<TSharedPtr<SErrorText,0>*>(this, "STextEditTest.ErrorText"); }
	TSharedPtr<SRichTextBlock,0>& RichTextBlockField() { return *GetNativePointerField<TSharedPtr<SRichTextBlock,0>*>(this, "STextEditTest.RichTextBlock"); }
	TSharedPtr<STextEntryPopup,0>& PopupInputField() { return *GetNativePointerField<TSharedPtr<STextEntryPopup,0>*>(this, "STextEditTest.PopupInput"); }
	TSharedPtr<SWindow,0>& PopupWindowField() { return *GetNativePointerField<TSharedPtr<SWindow,0>*>(this, "STextEditTest.PopupWindow"); }
	TSharedPtr<SInlineEditableTextBlock,0>& InlineEditableTextBlockField() { return *GetNativePointerField<TSharedPtr<SInlineEditableTextBlock,0>*>(this, "STextEditTest.InlineEditableTextBlock"); }
	FText& InlineEditableTextField() { return *GetNativePointerField<FText*>(this, "STextEditTest.InlineEditableText"); }
};

