#pragma once

#include "BaseDeclarations.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"
#include "ITextDecorator.h"
#include "FMargin.h"

struct SRichTextBlock : SWidget
{
	char __padding[0x250L];
	TAttribute<FText>& BoundTextField() { return *GetNativePointerField<TAttribute<FText>*>(this, "SRichTextBlock.BoundText"); }
	TSharedPtr<FTextBlockLayout,0>& TextLayoutCacheField() { return *GetNativePointerField<TSharedPtr<FTextBlockLayout,0>*>(this, "SRichTextBlock.TextLayoutCache"); }
	FTextBlockStyle& TextStyleField() { return *GetNativePointerField<FTextBlockStyle*>(this, "SRichTextBlock.TextStyle"); }
	TAttribute<FText>& HighlightTextField() { return *GetNativePointerField<TAttribute<FText>*>(this, "SRichTextBlock.HighlightText"); }
	TAttribute<float>& WrapTextAtField() { return *GetNativePointerField<TAttribute<float>*>(this, "SRichTextBlock.WrapTextAt"); }
	TAttribute<bool>& AutoWrapTextField() { return *GetNativePointerField<TAttribute<bool>*>(this, "SRichTextBlock.AutoWrapText"); }
	TAttribute<FMargin>& MarginField() { return *GetNativePointerField<TAttribute<FMargin>*>(this, "SRichTextBlock.Margin"); }
	TAttribute<enum ETextJustify::Type>& JustificationField() { return *GetNativePointerField<TAttribute<enum ETextJustify::Type>*>(this, "SRichTextBlock.Justification"); }
	TAttribute<bool>& CenterVerticallyField() { return *GetNativePointerField<TAttribute<bool>*>(this, "SRichTextBlock.CenterVertically"); }
	TAttribute<float>& LineHeightPercentageField() { return *GetNativePointerField<TAttribute<float>*>(this, "SRichTextBlock.LineHeightPercentage"); }

	// Functions

	void FArguments() { NativeCall<void>(this, "SRichTextBlock.FArguments"); }
	void FArguments() { NativeCall<void>(this, "SRichTextBlock.FArguments"); }
	SRichTextBlock::FArguments * FArguments(const TSharedRef<ITextDecorator,0> * DecoratorToAdd) { return NativeCall<SRichTextBlock::FArguments *, const TSharedRef<ITextDecorator,0> *>(this, "SRichTextBlock.FArguments", DecoratorToAdd); }
	SRichTextBlock::FArguments * FArguments(const TAttribute<bool> * InAttribute) { return NativeCall<SRichTextBlock::FArguments *, const TAttribute<bool> *>(this, "SRichTextBlock.FArguments", InAttribute); }
	SRichTextBlock::FArguments * FArguments(bool InArg) { return NativeCall<SRichTextBlock::FArguments *, bool>(this, "SRichTextBlock.FArguments", InArg); }
	SRichTextBlock::FArguments * FArguments(const ISlateStyle * InArg) { return NativeCall<SRichTextBlock::FArguments *, const ISlateStyle *>(this, "SRichTextBlock.FArguments", InArg); }
	const FText * GetText() { return NativeCall<const FText *>(this, "SRichTextBlock.GetText"); }
	SRichTextBlock::FArguments * FArguments(const TAttribute<enum ETextJustify::Type> * InAttribute) { return NativeCall<SRichTextBlock::FArguments *, const TAttribute<enum ETextJustify::Type> *>(this, "SRichTextBlock.FArguments", InAttribute); }
	SRichTextBlock::FArguments * FArguments(const TAttribute<float> * InAttribute) { return NativeCall<SRichTextBlock::FArguments *, const TAttribute<float> *>(this, "SRichTextBlock.FArguments", InAttribute); }
	SRichTextBlock::FArguments * FArguments(const TAttribute<FMargin> * InAttribute) { return NativeCall<SRichTextBlock::FArguments *, const TAttribute<FMargin> *>(this, "SRichTextBlock.FArguments", InAttribute); }
	SRichTextBlock::FArguments * FArguments(const FTextBlockStyle * InArg) { return NativeCall<SRichTextBlock::FArguments *, const FTextBlockStyle *>(this, "SRichTextBlock.FArguments", InArg); }
	SRichTextBlock::FArguments * FArguments(const TAttribute<float> * InAttribute) { return NativeCall<SRichTextBlock::FArguments *, const TAttribute<float> *>(this, "SRichTextBlock.FArguments", InAttribute); }
	FVector2D * ComputeDesiredSize(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "SRichTextBlock.ComputeDesiredSize", result); }
	void Construct(const SRichTextBlock::FArguments * InArgs) { NativeCall<void, const SRichTextBlock::FArguments *>(this, "SRichTextBlock.Construct", InArgs); }
	void OnArrangeChildren(const FGeometry * AllottedGeometry, FArrangedChildren * ArrangedChildren) { NativeCall<void, const FGeometry *, FArrangedChildren *>(this, "SRichTextBlock.OnArrangeChildren", AllottedGeometry, ArrangedChildren); }
	int OnPaint(const FPaintArgs * Args, const FGeometry * AllottedGeometry, const FSlateRect * MyClippingRect, const FSlateRect * MyClippingRectRenderTransform, FSlateWindowElementList * OutDrawElements, int LayerId, const FWidgetStyle * InWidgetStyle, bool bParentEnabled) { return NativeCall<int, const FPaintArgs *, const FGeometry *, const FSlateRect *, const FSlateRect *, FSlateWindowElementList *, int, const FWidgetStyle *, bool>(this, "SRichTextBlock.OnPaint", Args, AllottedGeometry, MyClippingRect, MyClippingRectRenderTransform, OutDrawElements, LayerId, InWidgetStyle, bParentEnabled); }
	void SetAutoWrapText(const TAttribute<bool> * InAutoWrapText) { NativeCall<void, const TAttribute<bool> *>(this, "SRichTextBlock.SetAutoWrapText", InAutoWrapText); }
	void SetCenterVertically(const TAttribute<bool> * InCenterVertically) { NativeCall<void, const TAttribute<bool> *>(this, "SRichTextBlock.SetCenterVertically", InCenterVertically); }
	void SetJustification(const TAttribute<enum ETextJustify::Type> * InJustification) { NativeCall<void, const TAttribute<enum ETextJustify::Type> *>(this, "SRichTextBlock.SetJustification", InJustification); }
	void SetLineHeightPercentage(const TAttribute<float> * InLineHeightPercentage) { NativeCall<void, const TAttribute<float> *>(this, "SRichTextBlock.SetLineHeightPercentage", InLineHeightPercentage); }
	void SetMargin(const TAttribute<FMargin> * InMargin) { NativeCall<void, const TAttribute<FMargin> *>(this, "SRichTextBlock.SetMargin", InMargin); }
	void SetText(const TAttribute<FText> * InText) { NativeCall<void, const TAttribute<FText> *>(this, "SRichTextBlock.SetText", InText); }
	void SetWrapTextAt(const TAttribute<float> * InWrapTextAt) { NativeCall<void, const TAttribute<float> *>(this, "SRichTextBlock.SetWrapTextAt", InWrapTextAt); }
	void UpdateTextCacheLayout(FTextBlockStyle InTextStyle, const ISlateStyle *const StyleSet) { NativeCall<void, FTextBlockStyle, const ISlateStyle *const>(this, "SRichTextBlock.UpdateTextCacheLayout", InTextStyle, StyleSet); }
};

