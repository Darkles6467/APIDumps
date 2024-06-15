#pragma once

#include "BaseDeclarations.h"
#include "SPanel.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SConstraintCanvas : SPanel
{
	char __padding[0x78L];
	FShortRect& AdditionalScissorRectField() { return *GetNativePointerField<FShortRect*>(this, "SConstraintCanvas.AdditionalScissorRect"); }
	TAttribute<FLinearColor>& ColorAndOpacityField() { return *GetNativePointerField<TAttribute<FLinearColor>*>(this, "SConstraintCanvas.ColorAndOpacity"); }
	TPanelChildren<SConstraintCanvas::FSlot>& ChildrenField() { return *GetNativePointerField<TPanelChildren<SConstraintCanvas::FSlot>*>(this, "SConstraintCanvas.Children"); }
	FGeometry& CachedGeometryField() { return *GetNativePointerField<FGeometry*>(this, "SConstraintCanvas.CachedGeometry"); }

	// Functions

	FGeometry * GetCachedGeometry(FGeometry * result) { return NativeCall<FGeometry *, FGeometry *>(this, "SConstraintCanvas.GetCachedGeometry", result); }
	void FArguments() { NativeCall<void>(this, "SConstraintCanvas.FArguments"); }
	void FSlot() { NativeCall<void>(this, "SConstraintCanvas.FSlot"); }
	void FArguments() { NativeCall<void>(this, "SConstraintCanvas.FArguments"); }
	void FSlot() { NativeCall<void>(this, "SConstraintCanvas.FSlot"); }
	FVector2D * ComputeDesiredSize(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "SConstraintCanvas.ComputeDesiredSize", result); }
	void Construct(const SConstraintCanvas::FArguments * InArgs) { NativeCall<void, const SConstraintCanvas::FArguments *>(this, "SConstraintCanvas.Construct", InArgs); }
	void OnArrangeChildren(const FGeometry * AllottedGeometry, FArrangedChildren * ArrangedChildren) { NativeCall<void, const FGeometry *, FArrangedChildren *>(this, "SConstraintCanvas.OnArrangeChildren", AllottedGeometry, ArrangedChildren); }
	int OnPaint(const FPaintArgs * Args, const FGeometry * AllottedGeometry, const FSlateRect * MyClippingRect, const FSlateRect * MyClippingRectRenderTransform, FSlateWindowElementList * OutDrawElements, int LayerId, const FWidgetStyle * InWidgetStyle, bool bParentEnabled) { return NativeCall<int, const FPaintArgs *, const FGeometry *, const FSlateRect *, const FSlateRect *, FSlateWindowElementList *, int, const FWidgetStyle *, bool>(this, "SConstraintCanvas.OnPaint", Args, AllottedGeometry, MyClippingRect, MyClippingRectRenderTransform, OutDrawElements, LayerId, InWidgetStyle, bParentEnabled); }
	int RemoveSlot(const TSharedRef<SWidget,0> * SlotWidget) { return NativeCall<int, const TSharedRef<SWidget,0> *>(this, "SConstraintCanvas.RemoveSlot", SlotWidget); }
};

