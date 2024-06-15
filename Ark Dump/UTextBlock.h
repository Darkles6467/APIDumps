#pragma once

#include "BaseDeclarations.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FSlateColor.h"
#include "FSlateFontInfo.h"

struct UTextBlock : UWidget
{
	char __padding[0x210L];
	FTextBlockStyle& WidgetStyleField() { return *GetNativePointerField<FTextBlockStyle*>(this, "UTextBlock.WidgetStyle"); }
	USlateWidgetStyleAsset * Style_DEPRECATEDField() { return GetNativePointerField<USlateWidgetStyleAsset *>(this, "UTextBlock.Style_DEPRECATED"); }
	FText& TextField() { return *GetNativePointerField<FText*>(this, "UTextBlock.Text"); }
	FSlateColor& ColorAndOpacityField() { return *GetNativePointerField<FSlateColor*>(this, "UTextBlock.ColorAndOpacity"); }
	FSlateFontInfo& FontField() { return *GetNativePointerField<FSlateFontInfo*>(this, "UTextBlock.Font"); }
	FVector2D& ShadowOffsetField() { return *GetNativePointerField<FVector2D*>(this, "UTextBlock.ShadowOffset"); }
	FLinearColor& ShadowColorAndOpacityField() { return *GetNativePointerField<FLinearColor*>(this, "UTextBlock.ShadowColorAndOpacity"); }
	TEnumAsByte<enum ETextJustify::Type>& JustificationField() { return *GetNativePointerField<TEnumAsByte<enum ETextJustify::Type>*>(this, "UTextBlock.Justification"); }
	bool& CenterVerticallyField() { return *GetNativePointerField<bool*>(this, "UTextBlock.CenterVertically"); }
	bool& bDisableInternalClippingField() { return *GetNativePointerField<bool*>(this, "UTextBlock.bDisableInternalClipping"); }
	bool& DontApplyDisabledEffectField() { return *GetNativePointerField<bool*>(this, "UTextBlock.DontApplyDisabledEffect"); }
	bool& AutoWrapTextField() { return *GetNativePointerField<bool*>(this, "UTextBlock.AutoWrapText"); }
	float& WrapTextAtField() { return *GetNativePointerField<float*>(this, "UTextBlock.WrapTextAt"); }
	float& MinDesiredWidthField() { return *GetNativePointerField<float*>(this, "UTextBlock.MinDesiredWidth"); }
	FMargin& MarginField() { return *GetNativePointerField<FMargin*>(this, "UTextBlock.Margin"); }
	float& LineHeightPercentageField() { return *GetNativePointerField<float*>(this, "UTextBlock.LineHeightPercentage"); }
	TSharedPtr<STextBlock,0>& MyTextBlockField() { return *GetNativePointerField<TSharedPtr<STextBlock,0>*>(this, "UTextBlock.MyTextBlock"); }

	// Functions

	FText * GetText(FText * result) { return NativeCall<FText *, FText *>(this, "UTextBlock.GetText", result); }
	void PostLoad() { NativeCall<void>(this, "UTextBlock.PostLoad"); }
	void ReleaseSlateResources(bool bReleaseChildren) { NativeCall<void, bool>(this, "UTextBlock.ReleaseSlateResources", bReleaseChildren); }
	void SetColorAndOpacity(FSlateColor InColorAndOpacity) { NativeCall<void, FSlateColor>(this, "UTextBlock.SetColorAndOpacity", InColorAndOpacity); }
	void SetFont(FSlateFontInfo NewFont) { NativeCall<void, FSlateFontInfo>(this, "UTextBlock.SetFont", NewFont); }
	void SetFontDrawScalar(float FontScalar) { NativeCall<void, float>(this, "UTextBlock.SetFontDrawScalar", FontScalar); }
	void SetJustification(ETextJustify::Type Value) { NativeCall<void, ETextJustify::Type>(this, "UTextBlock.SetJustification", Value); }
	void SetShadowColorAndOpacity(FLinearColor InShadowColorAndOpacity) { NativeCall<void, FLinearColor>(this, "UTextBlock.SetShadowColorAndOpacity", InShadowColorAndOpacity); }
	void SetShadowOffset(FVector2D InShadowOffset) { NativeCall<void, FVector2D>(this, "UTextBlock.SetShadowOffset", InShadowOffset); }
	void SetString(const FString * InString) { NativeCall<void, const FString *>(this, "UTextBlock.SetString", InString); }
	void SetText(FText InText) { NativeCall<void, FText>(this, "UTextBlock.SetText", InText); }
	void SynchronizeProperties() { NativeCall<void>(this, "UTextBlock.SynchronizeProperties"); }
};

