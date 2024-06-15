#pragma once

#include "BaseDeclarations.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UPrimalRichTextBlock : UWidget
{
	char __padding[0x1a8L];
	FText& TextField() { return *GetNativePointerField<FText*>(this, "UPrimalRichTextBlock.Text"); }
	TEnumAsByte<enum ETextJustify::Type>& JustificationField() { return *GetNativePointerField<TEnumAsByte<enum ETextJustify::Type>*>(this, "UPrimalRichTextBlock.Justification"); }
	bool& AutoWrapTextField() { return *GetNativePointerField<bool*>(this, "UPrimalRichTextBlock.AutoWrapText"); }
	float& WrapTextAtField() { return *GetNativePointerField<float*>(this, "UPrimalRichTextBlock.WrapTextAt"); }
	bool& CenterVerticallyField() { return *GetNativePointerField<bool*>(this, "UPrimalRichTextBlock.CenterVertically"); }
	bool& bIgnoreParsingField() { return *GetNativePointerField<bool*>(this, "UPrimalRichTextBlock.bIgnoreParsing"); }
	FMargin& MarginField() { return *GetNativePointerField<FMargin*>(this, "UPrimalRichTextBlock.Margin"); }
	float& LineHeightPercentageField() { return *GetNativePointerField<float*>(this, "UPrimalRichTextBlock.LineHeightPercentage"); }
	FTextBlockStyle& WidgetStyleField() { return *GetNativePointerField<FTextBlockStyle*>(this, "UPrimalRichTextBlock.WidgetStyle"); }
	TArray<FPrimalTextStyle>& TextStylesField() { return *GetNativePointerField<TArray<FPrimalTextStyle>*>(this, "UPrimalRichTextBlock.TextStyles"); }
	TArray<FPrimalImageStyle>& ImageStylesField() { return *GetNativePointerField<TArray<FPrimalImageStyle>*>(this, "UPrimalRichTextBlock.ImageStyles"); }
	PrimalRichStyle * MyChatStyleField() { return GetNativePointerField<PrimalRichStyle *>(this, "UPrimalRichTextBlock.MyChatStyle"); }
	TSharedPtr<SRichTextBlock,0>& MyRichTextBlockField() { return *GetNativePointerField<TSharedPtr<SRichTextBlock,0>*>(this, "UPrimalRichTextBlock.MyRichTextBlock"); }

	// Functions

	void BeginDestroy() { NativeCall<void>(this, "UPrimalRichTextBlock.BeginDestroy"); }
	static const FTextBlockStyle * GetDefaultStyle() { return NativeCall<const FTextBlockStyle *>(nullptr, "UPrimalRichTextBlock.GetDefaultStyle"); }
	FText * GetText(FText * result) { return NativeCall<FText *, FText *>(this, "UPrimalRichTextBlock.GetText", result); }
	FString * ParseString(FString * result, FString EnteredText) { return NativeCall<FString *, FString *, FString>(this, "UPrimalRichTextBlock.ParseString", result, EnteredText); }
	void ParseText(FText * InText) { NativeCall<void, FText *>(this, "UPrimalRichTextBlock.ParseText", InText); }
	void PostLoad() { NativeCall<void>(this, "UPrimalRichTextBlock.PostLoad"); }
	void ReleaseSlateResources(bool bReleaseChildren) { NativeCall<void, bool>(this, "UPrimalRichTextBlock.ReleaseSlateResources", bReleaseChildren); }
	void SetString(const FString * InString) { NativeCall<void, const FString *>(this, "UPrimalRichTextBlock.SetString", InString); }
	void SetText(FText InText, bool bDoParse) { NativeCall<void, FText, bool>(this, "UPrimalRichTextBlock.SetText", InText, bDoParse); }
	void SynchronizeProperties() { NativeCall<void>(this, "UPrimalRichTextBlock.SynchronizeProperties"); }
};

