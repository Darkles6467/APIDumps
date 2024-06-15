#pragma once

#include "BaseDeclarations.h"
#include "SLeafWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"
#include "FSlateColor.h"
#include "FSlateFontInfo.h"
#include "FMargin.h"

struct STextBlock : SLeafWidget
{
	char __padding[0x248L];
	TAttribute<FText>& BoundTextField() { return *GetNativePointerField<TAttribute<FText>*>(this, "STextBlock.BoundText"); }
	TSharedPtr<FTextBlockLayout,0>& TextLayoutCacheField() { return *GetNativePointerField<TSharedPtr<FTextBlockLayout,0>*>(this, "STextBlock.TextLayoutCache"); }
	const FTextBlockStyle * TextStyleField() { return GetNativePointerField<const FTextBlockStyle *>(this, "STextBlock.TextStyle"); }
	TAttribute<FSlateFontInfo>& FontField() { return *GetNativePointerField<TAttribute<FSlateFontInfo>*>(this, "STextBlock.Font"); }
	TAttribute<FSlateColor>& ColorAndOpacityField() { return *GetNativePointerField<TAttribute<FSlateColor>*>(this, "STextBlock.ColorAndOpacity"); }
	TAttribute<FVector2D>& ShadowOffsetField() { return *GetNativePointerField<TAttribute<FVector2D>*>(this, "STextBlock.ShadowOffset"); }
	TAttribute<FLinearColor>& ShadowColorAndOpacityField() { return *GetNativePointerField<TAttribute<FLinearColor>*>(this, "STextBlock.ShadowColorAndOpacity"); }
	TAttribute<FLinearColor>& HighlightColorField() { return *GetNativePointerField<TAttribute<FLinearColor>*>(this, "STextBlock.HighlightColor"); }
	TAttribute<FText>& HighlightTextField() { return *GetNativePointerField<TAttribute<FText>*>(this, "STextBlock.HighlightText"); }
	TAttribute<float>& WrapTextAtField() { return *GetNativePointerField<TAttribute<float>*>(this, "STextBlock.WrapTextAt"); }
	TAttribute<bool>& AutoWrapTextField() { return *GetNativePointerField<TAttribute<bool>*>(this, "STextBlock.AutoWrapText"); }
	TAttribute<FMargin>& MarginField() { return *GetNativePointerField<TAttribute<FMargin>*>(this, "STextBlock.Margin"); }
	TAttribute<enum ETextJustify::Type>& JustificationField() { return *GetNativePointerField<TAttribute<enum ETextJustify::Type>*>(this, "STextBlock.Justification"); }
	TAttribute<float>& LineHeightPercentageField() { return *GetNativePointerField<TAttribute<float>*>(this, "STextBlock.LineHeightPercentage"); }
	TAttribute<float>& MinDesiredWidthField() { return *GetNativePointerField<TAttribute<float>*>(this, "STextBlock.MinDesiredWidth"); }
	TAttribute<bool>& CenterVerticallyField() { return *GetNativePointerField<TAttribute<bool>*>(this, "STextBlock.CenterVertically"); }
	TAttribute<bool>& DisableInternalClippingField() { return *GetNativePointerField<TAttribute<bool>*>(this, "STextBlock.DisableInternalClipping"); }
	TAttribute<bool>& NoDisabledEffectField() { return *GetNativePointerField<TAttribute<bool>*>(this, "STextBlock.NoDisabledEffect"); }

	// Functions

	void FArguments() { NativeCall<void>(this, "STextBlock.FArguments"); }
	void FArguments() { NativeCall<void>(this, "STextBlock.FArguments"); }
	STextBlock::FArguments * FArguments(const FString * String) { return NativeCall<STextBlock::FArguments *, const FString *>(this, "STextBlock.FArguments", String); }
	STextBlock::FArguments * FArguments(const TAttribute<FText> * InAttribute) { return NativeCall<STextBlock::FArguments *, const TAttribute<FText> *>(this, "STextBlock.FArguments", InAttribute); }
	STextBlock::FArguments * FArguments(const FTextBlockStyle * InArg) { return NativeCall<STextBlock::FArguments *, const FTextBlockStyle *>(this, "STextBlock.FArguments", InArg); }
	STextBlock::FArguments * FArguments(SShooterLoadingScreen * InUserObject, __int128 InFunc) { return NativeCall<STextBlock::FArguments *, SShooterLoadingScreen *, __int128>(this, "STextBlock.FArguments", InUserObject, InFunc); }
	STextBlock::FArguments * FArguments(const TAttribute<bool> * InAttribute) { return NativeCall<STextBlock::FArguments *, const TAttribute<bool> *>(this, "STextBlock.FArguments", InAttribute); }
	STextBlock::FArguments * FArguments(const TAttribute<FSlateColor> * InAttribute) { return NativeCall<STextBlock::FArguments *, const TAttribute<FSlateColor> *>(this, "STextBlock.FArguments", InAttribute); }
	STextBlock::FArguments * FArguments(const TAttribute<FSlateFontInfo> * InAttribute) { return NativeCall<STextBlock::FArguments *, const TAttribute<FSlateFontInfo> *>(this, "STextBlock.FArguments", InAttribute); }
	STextBlock::FArguments * FArguments(const FText * Text) { return NativeCall<STextBlock::FArguments *, const FText *>(this, "STextBlock.FArguments", Text); }
	FVector2D * ComputeDesiredSize(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "STextBlock.ComputeDesiredSize", result); }
	void Construct(const STextBlock::FArguments * InArgs) { NativeCall<void, const STextBlock::FArguments *>(this, "STextBlock.Construct", InArgs); }
	FSlateColor * GetColorAndOpacity(FSlateColor * result) { return NativeCall<FSlateColor *, FSlateColor *>(this, "STextBlock.GetColorAndOpacity", result); }
	FTextBlockStyle * GetComputedTextStyle(FTextBlockStyle * result) { return NativeCall<FTextBlockStyle *, FTextBlockStyle *>(this, "STextBlock.GetComputedTextStyle", result); }
	FReply * OnMouseButtonDoubleClick(FReply * result, const FGeometry * InMyGeometry, const FPointerEvent * InMouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "STextBlock.OnMouseButtonDoubleClick", result, InMyGeometry, InMouseEvent); }
	int OnPaint(const FPaintArgs * Args, const FGeometry * AllottedGeometry, const FSlateRect * MyClippingRect, const FSlateRect * MyClippingRectRenderTransform, FSlateWindowElementList * OutDrawElements, int LayerId, const FWidgetStyle * InWidgetStyle, bool bParentEnabled) { return NativeCall<int, const FPaintArgs *, const FGeometry *, const FSlateRect *, const FSlateRect *, FSlateWindowElementList *, int, const FWidgetStyle *, bool>(this, "STextBlock.OnPaint", Args, AllottedGeometry, MyClippingRect, MyClippingRectRenderTransform, OutDrawElements, LayerId, InWidgetStyle, bParentEnabled); }
	void SetAutoWrapText(const TAttribute<bool> * InAutoWrapText) { NativeCall<void, const TAttribute<bool> *>(this, "STextBlock.SetAutoWrapText", InAutoWrapText); }
	void SetColorAndOpacity(const TAttribute<FSlateColor> * InColorAndOpacity) { NativeCall<void, const TAttribute<FSlateColor> *>(this, "STextBlock.SetColorAndOpacity", InColorAndOpacity); }
	void SetDisabledInternalClipping(const TAttribute<bool> * InValue) { NativeCall<void, const TAttribute<bool> *>(this, "STextBlock.SetDisabledInternalClipping", InValue); }
	void SetFont(const TAttribute<FSlateFontInfo> * InFont) { NativeCall<void, const TAttribute<FSlateFontInfo> *>(this, "STextBlock.SetFont", InFont); }
	void SetJustification(const TAttribute<enum ETextJustify::Type> * InJustification) { NativeCall<void, const TAttribute<enum ETextJustify::Type> *>(this, "STextBlock.SetJustification", InJustification); }
	void SetLineHeightPercentage(const TAttribute<float> * InLineHeightPercentage) { NativeCall<void, const TAttribute<float> *>(this, "STextBlock.SetLineHeightPercentage", InLineHeightPercentage); }
	void SetMargin(const TAttribute<FMargin> * InMargin) { NativeCall<void, const TAttribute<FMargin> *>(this, "STextBlock.SetMargin", InMargin); }
	void SetMinDesiredWidth(const TAttribute<float> * InMinDesiredWidth) { NativeCall<void, const TAttribute<float> *>(this, "STextBlock.SetMinDesiredWidth", InMinDesiredWidth); }
	void SetNoDisabledEffect(const TAttribute<bool> * InNoDisabledEffect) { NativeCall<void, const TAttribute<bool> *>(this, "STextBlock.SetNoDisabledEffect", InNoDisabledEffect); }
	void SetShadowColorAndOpacity(const TAttribute<FLinearColor> * InShadowColorAndOpacity) { NativeCall<void, const TAttribute<FLinearColor> *>(this, "STextBlock.SetShadowColorAndOpacity", InShadowColorAndOpacity); }
	void SetText(const FString * InText) { NativeCall<void, const FString *>(this, "STextBlock.SetText", InText); }
	void SetText(const FText * InText) { NativeCall<void, const FText *>(this, "STextBlock.SetText", InText); }
	void SetWrapTextAt(const TAttribute<float> * InWrapTextAt) { NativeCall<void, const TAttribute<float> *>(this, "STextBlock.SetWrapTextAt", InWrapTextAt); }
	STextBlock::FArguments * FArguments(SReflectorTreeWidgetItem * InUserObject, __int128 InFunc) { return NativeCall<STextBlock::FArguments *, SReflectorTreeWidgetItem *, __int128>(this, "STextBlock.FArguments", InUserObject, InFunc); }
	STextBlock::FArguments * FArguments(SReflectorToolTipWidget * InUserObject, __int128 InFunc) { return NativeCall<STextBlock::FArguments *, SReflectorToolTipWidget *, __int128>(this, "STextBlock.FArguments", InUserObject, InFunc); }
	STextBlock::FArguments * FArguments(SReflectorTreeWidgetItem * InUserObject, __int128 InFunc) { return NativeCall<STextBlock::FArguments *, SReflectorTreeWidgetItem *, __int128>(this, "STextBlock.FArguments", InUserObject, InFunc); }
	STextBlock::FArguments * FArguments(SWidgetReflector * InUserObject, __int128 InFunc) { return NativeCall<STextBlock::FArguments *, SWidgetReflector *, __int128>(this, "STextBlock.FArguments", InUserObject, InFunc); }
	STextBlock::FArguments * FArguments(SShooterGameLoadingScreen * InUserObject, __int128 InFunc) { return NativeCall<STextBlock::FArguments *, SShooterGameLoadingScreen *, __int128>(this, "STextBlock.FArguments", InUserObject, InFunc); }
};

