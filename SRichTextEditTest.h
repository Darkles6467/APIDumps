#pragma once

#include "BaseDeclarations.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SRichTextEditTest : SCompoundWidget
{
	char __padding[0xb8L];
	FText& RichEditableTextField() { return *GetNativePointerField<FText*>(this, "SRichTextEditTest.RichEditableText"); }
	TSharedPtr<SMultiLineEditableTextBox,0>& RichEditableTextBoxField() { return *GetNativePointerField<TSharedPtr<SMultiLineEditableTextBox,0>*>(this, "SRichTextEditTest.RichEditableTextBox"); }
	FTextStyles& TextStylesField() { return *GetNativePointerField<FTextStyles*>(this, "SRichTextEditTest.TextStyles"); }
	TSharedPtr<FTextStyles::FFontFamily,0>& ActiveFontFamilyField() { return *GetNativePointerField<TSharedPtr<FTextStyles::FFontFamily,0>*>(this, "SRichTextEditTest.ActiveFontFamily"); }
	char& FontSizeField() { return *GetNativePointerField<char*>(this, "SRichTextEditTest.FontSize"); }
	char& FontStyleField() { return *GetNativePointerField<char*>(this, "SRichTextEditTest.FontStyle"); }
	FLinearColor& FontColorField() { return *GetNativePointerField<FLinearColor*>(this, "SRichTextEditTest.FontColor"); }
};

