#pragma once

#include "BaseDeclarations.h"
#include "SButton.h"
#include "SBorder.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SCustomCanvasWidget : SButton
{
	char __padding[0x48L];
	TSharedPtr<FCustomCanvasWidgetElement,1>& CustomElementField() { return *GetNativePointerField<TSharedPtr<FCustomCanvasWidgetElement,1>*>(this, "SCustomCanvasWidget.CustomElement"); }
	bool& bLeftMouseButtonClickedField() { return *GetNativePointerField<bool*>(this, "SCustomCanvasWidget.bLeftMouseButtonClicked"); }

	// Functions

	void FArguments() { NativeCall<void>(this, "SCustomCanvasWidget.FArguments"); }
	void FArguments() { NativeCall<void>(this, "SCustomCanvasWidget.FArguments"); }
	void Construct(const SCustomCanvasWidget::FArguments * InArgs, UCustomCanvasWidget * InCustomCanvasWidget) { NativeCall<void, const SCustomCanvasWidget::FArguments *, UCustomCanvasWidget *>(this, "SCustomCanvasWidget.Construct", InArgs, InCustomCanvasWidget); }
	FReply * OnDragDetected(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SCustomCanvasWidget.OnDragDetected", result, MyGeometry, MouseEvent); }
	FReply * OnDragOver(FReply * result, const FGeometry * MyGeometry, const FDragDropEvent * DragDropEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FDragDropEvent *>(this, "SCustomCanvasWidget.OnDragOver", result, MyGeometry, DragDropEvent); }
	FReply * OnDrop(FReply * result, const FGeometry * MyGeometry, const FDragDropEvent * DragDropEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FDragDropEvent *>(this, "SCustomCanvasWidget.OnDrop", result, MyGeometry, DragDropEvent); }
	FReply * OnMouseButtonDown(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SCustomCanvasWidget.OnMouseButtonDown", result, MyGeometry, MouseEvent); }
	FReply * OnMouseButtonUp(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SCustomCanvasWidget.OnMouseButtonUp", result, MyGeometry, MouseEvent); }
	FReply * OnMouseMove(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SCustomCanvasWidget.OnMouseMove", result, MyGeometry, MouseEvent); }
	FReply * OnMouseWheel(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SCustomCanvasWidget.OnMouseWheel", result, MyGeometry, MouseEvent); }
	int OnPaint(const FPaintArgs * Args, const FGeometry * AllottedGeometry, const FSlateRect * MyClippingRect, const FSlateRect * MyClippingRectRenderTransform, FSlateWindowElementList * OutDrawElements, int LayerId, const FWidgetStyle * InWidgetStyle, bool bParentEnabled) { return NativeCall<int, const FPaintArgs *, const FGeometry *, const FSlateRect *, const FSlateRect *, FSlateWindowElementList *, int, const FWidgetStyle *, bool>(this, "SCustomCanvasWidget.OnPaint", Args, AllottedGeometry, MyClippingRect, MyClippingRectRenderTransform, OutDrawElements, LayerId, InWidgetStyle, bParentEnabled); }
	void Tick(const FGeometry * AllottedGeometry, const long double InCurrentTime, const float InDeltaTime) { NativeCall<void, const FGeometry *, const long double, const float>(this, "SCustomCanvasWidget.Tick", AllottedGeometry, InCurrentTime, InDeltaTime); }
};

