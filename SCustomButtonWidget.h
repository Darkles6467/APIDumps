#pragma once

#include "BaseDeclarations.h"
#include "SButton.h"
#include "SBorder.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SCustomButtonWidget : SButton
{
	char __padding[0x10L];
	const FCustomButtonWidgetStyle * ExtendedStyleField() { return GetNativePointerField<const FCustomButtonWidgetStyle *>(this, "SCustomButtonWidget.ExtendedStyle"); }
	bool& bIsToggleButtonField() { return *GetNativePointerField<bool*>(this, "SCustomButtonWidget.bIsToggleButton"); }
	bool& bIsToggledOnField() { return *GetNativePointerField<bool*>(this, "SCustomButtonWidget.bIsToggledOn"); }

	// Functions

	void FArguments() { NativeCall<void>(this, "SCustomButtonWidget.FArguments"); }
	void FArguments() { NativeCall<void>(this, "SCustomButtonWidget.FArguments"); }
	void Construct(const SCustomButtonWidget::FArguments * InArgs) { NativeCall<void, const SCustomButtonWidget::FArguments *>(this, "SCustomButtonWidget.Construct", InArgs); }
	FMargin * GetCombinedPadding(FMargin * result) { return NativeCall<FMargin *, FMargin *>(this, "SCustomButtonWidget.GetCombinedPadding", result); }
	bool GetIsToggleButton() { return NativeCall<bool>(this, "SCustomButtonWidget.GetIsToggleButton"); }
	bool GetToggledState() { return NativeCall<bool>(this, "SCustomButtonWidget.GetToggledState"); }
	int OnPaint(const FPaintArgs * Args, const FGeometry * AllottedGeometry, const FSlateRect * MyClippingRect, const FSlateRect * MyClippingRectRenderTransform, FSlateWindowElementList * OutDrawElements, int LayerId, const FWidgetStyle * InWidgetStyle, bool bParentEnabled) { return NativeCall<int, const FPaintArgs *, const FGeometry *, const FSlateRect *, const FSlateRect *, FSlateWindowElementList *, int, const FWidgetStyle *, bool>(this, "SCustomButtonWidget.OnPaint", Args, AllottedGeometry, MyClippingRect, MyClippingRectRenderTransform, OutDrawElements, LayerId, InWidgetStyle, bParentEnabled); }
	void SetButtonExtendedStyle(const FCustomButtonWidgetStyle * ExtendedStyle) { NativeCall<void, const FCustomButtonWidgetStyle *>(this, "SCustomButtonWidget.SetButtonExtendedStyle", ExtendedStyle); }
	void SetIsToggleButton(bool isToggle) { NativeCall<void, bool>(this, "SCustomButtonWidget.SetIsToggleButton", isToggle); }
	void SetToggledState(bool bIsToggled) { NativeCall<void, bool>(this, "SCustomButtonWidget.SetToggledState", bIsToggled); }
};

