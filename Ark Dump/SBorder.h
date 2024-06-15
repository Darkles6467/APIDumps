#pragma once

#include "BaseDeclarations.h"
#include "SCompoundWidget.h"
#include "FSlateColor.h"
#include "FMargin.h"

struct SBorder : SCompoundWidget
{
	char __padding[0xa0L];
	TAttribute<FSlateColor>& BorderBackgroundColorField() { return *GetNativePointerField<TAttribute<FSlateColor>*>(this, "SBorder.BorderBackgroundColor"); }
	TAttribute<FVector2D>& DesiredSizeScaleField() { return *GetNativePointerField<TAttribute<FVector2D>*>(this, "SBorder.DesiredSizeScale"); }
	TAttribute<bool>& ShowDisabledEffectField() { return *GetNativePointerField<TAttribute<bool>*>(this, "SBorder.ShowDisabledEffect"); }

	// Functions

	void FArguments() { NativeCall<void>(this, "SBorder.FArguments"); }
	void FArguments() { NativeCall<void>(this, "SBorder.FArguments"); }
	FVector2D * ComputeDesiredSize(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "SBorder.ComputeDesiredSize", result); }
	void Construct(const SBorder::FArguments * InArgs) { NativeCall<void, const SBorder::FArguments *>(this, "SBorder.Construct", InArgs); }
	FReply * OnMouseButtonDoubleClick(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SBorder.OnMouseButtonDoubleClick", result, MyGeometry, MouseEvent); }
	FReply * OnMouseButtonDown(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SBorder.OnMouseButtonDown", result, MyGeometry, MouseEvent); }
	FReply * OnMouseButtonUp(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SBorder.OnMouseButtonUp", result, MyGeometry, MouseEvent); }
	FReply * OnMouseMove(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SBorder.OnMouseMove", result, MyGeometry, MouseEvent); }
	int OnPaint(const FPaintArgs * Args, const FGeometry * AllottedGeometry, const FSlateRect * MyClippingRect, const FSlateRect * MyClippingRectRenderTransform, FSlateWindowElementList * OutDrawElements, int LayerId, const FWidgetStyle * InWidgetStyle, bool bParentEnabled) { return NativeCall<int, const FPaintArgs *, const FGeometry *, const FSlateRect *, const FSlateRect *, FSlateWindowElementList *, int, const FWidgetStyle *, bool>(this, "SBorder.OnPaint", Args, AllottedGeometry, MyClippingRect, MyClippingRectRenderTransform, OutDrawElements, LayerId, InWidgetStyle, bParentEnabled); }
	void SetBorderBackgroundColor(const TAttribute<FSlateColor> * InColorAndOpacity) { NativeCall<void, const TAttribute<FSlateColor> *>(this, "SBorder.SetBorderBackgroundColor", InColorAndOpacity); }
	void SetPadding(const TAttribute<FMargin> * InPadding) { NativeCall<void, const TAttribute<FMargin> *>(this, "SBorder.SetPadding", InPadding); }
	void SetShowEffectWhenDisabled(const TAttribute<bool> * InShowEffectWhenDisabled) { NativeCall<void, const TAttribute<bool> *>(this, "SBorder.SetShowEffectWhenDisabled", InShowEffectWhenDisabled); }
	void SetBorderImage(const TAttribute<FSlateBrush const *> * InBorderImage) { NativeCall<void, const TAttribute<FSlateBrush const *> *>(this, "SBorder.SetBorderImage", InBorderImage); }
};

