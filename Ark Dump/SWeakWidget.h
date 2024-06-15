#pragma once

#include "BaseDeclarations.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SWeakWidget : SWidget
{
	char __padding[0x18L];

	// Functions

	void FArguments() { NativeCall<void>(this, "SWeakWidget.FArguments"); }
	void FArguments() { NativeCall<void>(this, "SWeakWidget.FArguments"); }
	SWeakWidget::FArguments * FArguments(TSharedPtr<SWidget,0> InArg) { return NativeCall<SWeakWidget::FArguments *, TSharedPtr<SWidget,0>>(this, "SWeakWidget.FArguments", InArg); }
	FVector2D * ComputeDesiredSize(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "SWeakWidget.ComputeDesiredSize", result); }
	void Construct(const SWeakWidget::FArguments * InArgs) { NativeCall<void, const SWeakWidget::FArguments *>(this, "SWeakWidget.Construct", InArgs); }
	void OnArrangeChildren(const FGeometry * AllottedGeometry, FArrangedChildren * ArrangedChildren) { NativeCall<void, const FGeometry *, FArrangedChildren *>(this, "SWeakWidget.OnArrangeChildren", AllottedGeometry, ArrangedChildren); }
	int OnPaint(const FPaintArgs * Args, const FGeometry * AllottedGeometry, const FSlateRect * MyClippingRect, const FSlateRect * MyClippingRectRenderTransform, FSlateWindowElementList * OutDrawElements, int LayerId, const FWidgetStyle * InWidgetStyle, bool bParentEnabled) { return NativeCall<int, const FPaintArgs *, const FGeometry *, const FSlateRect *, const FSlateRect *, FSlateWindowElementList *, int, const FWidgetStyle *, bool>(this, "SWeakWidget.OnPaint", Args, AllottedGeometry, MyClippingRect, MyClippingRectRenderTransform, OutDrawElements, LayerId, InWidgetStyle, bParentEnabled); }
};

