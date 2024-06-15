#pragma once

#include "BaseDeclarations.h"
#include "SPanel.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"
#include "FMargin.h"

struct SOverlay : SPanel
{
	char __padding[0x18L];
	TPanelChildren<SOverlay::FOverlaySlot>& ChildrenField() { return *GetNativePointerField<TPanelChildren<SOverlay::FOverlaySlot>*>(this, "SOverlay.Children"); }

	// Functions

	void FArguments() { NativeCall<void>(this, "SOverlay.FArguments"); }
	void FArguments() { NativeCall<void>(this, "SOverlay.FArguments"); }
	SOverlay::FArguments * FArguments(SOverlay::FOverlaySlot * SlotToAdd) { return NativeCall<SOverlay::FArguments *, SOverlay::FOverlaySlot *>(this, "SOverlay.FArguments", SlotToAdd); }
	SOverlay::FOverlaySlot * FOverlaySlot(EHorizontalAlignment InHAlignment) { return NativeCall<SOverlay::FOverlaySlot *, EHorizontalAlignment>(this, "SOverlay.FOverlaySlot", InHAlignment); }
	static SOverlay::FOverlaySlot * Slot() { return NativeCall<SOverlay::FOverlaySlot *>(nullptr, "SOverlay.Slot"); }
	SOverlay::FOverlaySlot * FOverlaySlot(EVerticalAlignment InVAlignment) { return NativeCall<SOverlay::FOverlaySlot *, EVerticalAlignment>(this, "SOverlay.FOverlaySlot", InVAlignment); }
	SOverlay::FOverlaySlot * AddSlot(int ZOrder) { return NativeCall<SOverlay::FOverlaySlot *, int>(this, "SOverlay.AddSlot", ZOrder); }
	FVector2D * ComputeDesiredSize(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "SOverlay.ComputeDesiredSize", result); }
	void Construct(const SOverlay::FArguments * InArgs) { NativeCall<void, const SOverlay::FArguments *>(this, "SOverlay.Construct", InArgs); }
	int GetNumWidgets() { return NativeCall<int>(this, "SOverlay.GetNumWidgets"); }
	void OnArrangeChildren(const FGeometry * AllottedGeometry, FArrangedChildren * ArrangedChildren) { NativeCall<void, const FGeometry *, FArrangedChildren *>(this, "SOverlay.OnArrangeChildren", AllottedGeometry, ArrangedChildren); }
	int OnPaint(const FPaintArgs * Args, const FGeometry * AllottedGeometry, const FSlateRect * MyClippingRect, const FSlateRect * MyClippingRectRenderTransform, FSlateWindowElementList * OutDrawElements, int LayerId, const FWidgetStyle * InWidgetStyle, bool bParentEnabled) { return NativeCall<int, const FPaintArgs *, const FGeometry *, const FSlateRect *, const FSlateRect *, FSlateWindowElementList *, int, const FWidgetStyle *, bool>(this, "SOverlay.OnPaint", Args, AllottedGeometry, MyClippingRect, MyClippingRectRenderTransform, OutDrawElements, LayerId, InWidgetStyle, bParentEnabled); }
	void RemoveSlot(int ZOrder) { NativeCall<void, int>(this, "SOverlay.RemoveSlot", ZOrder); }
	void RemoveSlot(TSharedRef<SWidget,0> Widget) { NativeCall<void, TSharedRef<SWidget,0>>(this, "SOverlay.RemoveSlot", Widget); }
	SOverlay::FOverlaySlot * FOverlaySlot(const TAttribute<FMargin> InPadding) { return NativeCall<SOverlay::FOverlaySlot *, const TAttribute<FMargin>>(this, "SOverlay.FOverlaySlot", InPadding); }
};

