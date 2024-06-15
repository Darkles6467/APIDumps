#pragma once

#include "BaseDeclarations.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SRichTextTest : SCompoundWidget
{
	char __padding[0x48L];
	float& WrapWidthField() { return *GetNativePointerField<float*>(this, "SRichTextTest.WrapWidth"); }
	bool& bShouldWrapField() { return *GetNativePointerField<bool*>(this, "SRichTextTest.bShouldWrap"); }
	FMargin& MarginField() { return *GetNativePointerField<FMargin*>(this, "SRichTextTest.Margin"); }
	ETextJustify::Type& JustificationField() { return *GetNativePointerField<ETextJustify::Type*>(this, "SRichTextTest.Justification"); }
	TArray<TSharedPtr<FString,0>>& JustificationTypeOptionsField() { return *GetNativePointerField<TArray<TSharedPtr<FString,0>>*>(this, "SRichTextTest.JustificationTypeOptions"); }
	float& LineHeightField() { return *GetNativePointerField<float*>(this, "SRichTextTest.LineHeight"); }
	TSharedPtr<SRichTextBlock,0>& InteractiveRichTextField() { return *GetNativePointerField<TSharedPtr<SRichTextBlock,0>*>(this, "SRichTextTest.InteractiveRichText"); }
};

