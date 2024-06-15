#pragma once

#include "BaseDeclarations.h"
#include "SLeafWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SDockingCross : SLeafWidget
{
	char __padding[0x10L];

	// Functions

	void FArguments() { NativeCall<void>(this, "SDockingCross.FArguments"); }
	FVector2D * ComputeDesiredSize(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "SDockingCross.ComputeDesiredSize", result); }
	void OnDragLeave(const FDragDropEvent * DragDropEvent) { NativeCall<void, const FDragDropEvent *>(this, "SDockingCross.OnDragLeave", DragDropEvent); }
	FReply * OnDragOver(FReply * result, const FGeometry * MyGeometry, const FDragDropEvent * DragDropEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FDragDropEvent *>(this, "SDockingCross.OnDragOver", result, MyGeometry, DragDropEvent); }
	FReply * OnDrop(FReply * result, const FGeometry * MyGeometry, const FDragDropEvent * DragDropEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FDragDropEvent *>(this, "SDockingCross.OnDrop", result, MyGeometry, DragDropEvent); }
	int OnPaint(const FPaintArgs * Args, const FGeometry * AllottedGeometry, const FSlateRect * MyClippingRect, const FSlateRect * MyClippingRectRenderTransform, FSlateWindowElementList * OutDrawElements, int LayerId, const FWidgetStyle * InWidgetStyle, bool bParentEnabled) { return NativeCall<int, const FPaintArgs *, const FGeometry *, const FSlateRect *, const FSlateRect *, FSlateWindowElementList *, int, const FWidgetStyle *, bool>(this, "SDockingCross.OnPaint", Args, AllottedGeometry, MyClippingRect, MyClippingRectRenderTransform, OutDrawElements, LayerId, InWidgetStyle, bParentEnabled); }
};

