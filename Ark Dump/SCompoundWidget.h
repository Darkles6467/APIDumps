#pragma once

#include "BaseDeclarations.h"
#include "SWidget.h"
#include "EVisibility.h"

struct SCompoundWidget : SWidget
{
	char __padding[0xb8L];
	TAttribute<FVector2D>& ContentScaleField() { return *GetNativePointerField<TAttribute<FVector2D>*>(this, "SCompoundWidget.ContentScale"); }
	TAttribute<FLinearColor>& ColorAndOpacityField() { return *GetNativePointerField<TAttribute<FLinearColor>*>(this, "SCompoundWidget.ColorAndOpacity"); }
	TAttribute<FSlateColor>& ForegroundColorField() { return *GetNativePointerField<TAttribute<FSlateColor>*>(this, "SCompoundWidget.ForegroundColor"); }

	// Functions

	FVector2D * ComputeDesiredSize(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "SCompoundWidget.ComputeDesiredSize", result); }
	FSlateColor * GetForegroundColor(FSlateColor * result) { return NativeCall<FSlateColor *, FSlateColor *>(this, "SCompoundWidget.GetForegroundColor", result); }
	void OnArrangeChildren(const FGeometry * AllottedGeometry, FArrangedChildren * ArrangedChildren) { NativeCall<void, const FGeometry *, FArrangedChildren *>(this, "SCompoundWidget.OnArrangeChildren", AllottedGeometry, ArrangedChildren); }
	int OnPaint(const FPaintArgs * Args, const FGeometry * AllottedGeometry, const FSlateRect * MyClippingRect, const FSlateRect * MyClippingRectRenderTransform, FSlateWindowElementList * OutDrawElements, int LayerId, const FWidgetStyle * InWidgetStyle, bool bParentEnabled) { return NativeCall<int, const FPaintArgs *, const FGeometry *, const FSlateRect *, const FSlateRect *, FSlateWindowElementList *, int, const FWidgetStyle *, bool>(this, "SCompoundWidget.OnPaint", Args, AllottedGeometry, MyClippingRect, MyClippingRectRenderTransform, OutDrawElements, LayerId, InWidgetStyle, bParentEnabled); }
	void SetVisibility(TAttribute<EVisibility> InVisibility) { NativeCall<void, TAttribute<EVisibility>>(this, "SCompoundWidget.SetVisibility", InVisibility); }
};

