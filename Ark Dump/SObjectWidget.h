#pragma once

#include "BaseDeclarations.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"

struct SObjectWidget : SCompoundWidget
{
	char __padding[0x20L];
	FVector2D& SplitScreenScalerField() { return *GetNativePointerField<FVector2D*>(this, "SObjectWidget.SplitScreenScaler"); }

	// Functions

	void FArguments() { NativeCall<void>(this, "SObjectWidget.FArguments"); }
	void FArguments() { NativeCall<void>(this, "SObjectWidget.FArguments"); }
	SObjectWidget::FArguments * FArguments(const TSharedRef<SWidget,0> InChild) { return NativeCall<SObjectWidget::FArguments *, const TSharedRef<SWidget,0>>(this, "SObjectWidget.FArguments", InChild); }
	void AddReferencedObjects(FReferenceCollector * Collector) { NativeCall<void, FReferenceCollector *>(this, "SObjectWidget.AddReferencedObjects", Collector); }
	FReply * OnControllerAnalogValueChanged(FReply * result, const FGeometry * MyGeometry, const FControllerEvent * ControllerEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FControllerEvent *>(this, "SObjectWidget.OnControllerAnalogValueChanged", result, MyGeometry, ControllerEvent); }
	FReply * OnControllerButtonPressed(FReply * result, const FGeometry * MyGeometry, const FControllerEvent * ControllerEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FControllerEvent *>(this, "SObjectWidget.OnControllerButtonPressed", result, MyGeometry, ControllerEvent); }
	FReply * OnControllerButtonReleased(FReply * result, const FGeometry * MyGeometry, const FControllerEvent * ControllerEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FControllerEvent *>(this, "SObjectWidget.OnControllerButtonReleased", result, MyGeometry, ControllerEvent); }
	FCursorReply * OnCursorQuery(FCursorReply * result, const FGeometry * MyGeometry, const FPointerEvent * CursorEvent) { return NativeCall<FCursorReply *, FCursorReply *, const FGeometry *, const FPointerEvent *>(this, "SObjectWidget.OnCursorQuery", result, MyGeometry, CursorEvent); }
	void OnDragCancelled(const FDragDropEvent * DragDropEvent, UDragDropOperation * Operation) { NativeCall<void, const FDragDropEvent *, UDragDropOperation *>(this, "SObjectWidget.OnDragCancelled", DragDropEvent, Operation); }
	FReply * OnDragDetected(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * PointerEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SObjectWidget.OnDragDetected", result, MyGeometry, PointerEvent); }
	void OnDragEnter(const FGeometry * MyGeometry, const FDragDropEvent * DragDropEvent) { NativeCall<void, const FGeometry *, const FDragDropEvent *>(this, "SObjectWidget.OnDragEnter", MyGeometry, DragDropEvent); }
	void OnDragLeave(const FDragDropEvent * DragDropEvent) { NativeCall<void, const FDragDropEvent *>(this, "SObjectWidget.OnDragLeave", DragDropEvent); }
	FReply * OnDragOver(FReply * result, const FGeometry * MyGeometry, const FDragDropEvent * DragDropEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FDragDropEvent *>(this, "SObjectWidget.OnDragOver", result, MyGeometry, DragDropEvent); }
	FReply * OnDrop(FReply * result, const FGeometry * MyGeometry, const FDragDropEvent * DragDropEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FDragDropEvent *>(this, "SObjectWidget.OnDrop", result, MyGeometry, DragDropEvent); }
	FReply * OnKeyChar(FReply * result, const FGeometry * MyGeometry, const FCharacterEvent * InCharacterEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FCharacterEvent *>(this, "SObjectWidget.OnKeyChar", result, MyGeometry, InCharacterEvent); }
	FReply * OnKeyDown(FReply * result, const FGeometry * MyGeometry, const FKeyboardEvent * InKeyboardEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FKeyboardEvent *>(this, "SObjectWidget.OnKeyDown", result, MyGeometry, InKeyboardEvent); }
	FReply * OnKeyUp(FReply * result, const FGeometry * MyGeometry, const FKeyboardEvent * InKeyboardEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FKeyboardEvent *>(this, "SObjectWidget.OnKeyUp", result, MyGeometry, InKeyboardEvent); }
	void OnKeyboardFocusLost(const FKeyboardFocusEvent * InKeyboardFocusEvent) { NativeCall<void, const FKeyboardFocusEvent *>(this, "SObjectWidget.OnKeyboardFocusLost", InKeyboardFocusEvent); }
	FReply * OnKeyboardFocusReceived(FReply * result, const FGeometry * MyGeometry, const FKeyboardFocusEvent * InKeyboardFocusEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FKeyboardFocusEvent *>(this, "SObjectWidget.OnKeyboardFocusReceived", result, MyGeometry, InKeyboardFocusEvent); }
	FReply * OnMotionDetected(FReply * result, const FGeometry * MyGeometry, const FMotionEvent * InMotionEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FMotionEvent *>(this, "SObjectWidget.OnMotionDetected", result, MyGeometry, InMotionEvent); }
	FReply * OnMouseButtonDoubleClick(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SObjectWidget.OnMouseButtonDoubleClick", result, MyGeometry, MouseEvent); }
	FReply * OnMouseButtonDown(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SObjectWidget.OnMouseButtonDown", result, MyGeometry, MouseEvent); }
	FReply * OnMouseButtonUp(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SObjectWidget.OnMouseButtonUp", result, MyGeometry, MouseEvent); }
	void OnMouseEnter(const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { NativeCall<void, const FGeometry *, const FPointerEvent *>(this, "SObjectWidget.OnMouseEnter", MyGeometry, MouseEvent); }
	void OnMouseLeave(const FPointerEvent * MouseEvent) { NativeCall<void, const FPointerEvent *>(this, "SObjectWidget.OnMouseLeave", MouseEvent); }
	FReply * OnMouseMove(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SObjectWidget.OnMouseMove", result, MyGeometry, MouseEvent); }
	FReply * OnMouseWheel(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SObjectWidget.OnMouseWheel", result, MyGeometry, MouseEvent); }
	int OnPaint(const FPaintArgs * Args, const FGeometry * AllottedGeometry, const FSlateRect * MyClippingRect, const FSlateRect * MyClippingRectRenderTransform, FSlateWindowElementList * OutDrawElements, int LayerId, const FWidgetStyle * InWidgetStyle, bool bParentEnabled) { return NativeCall<int, const FPaintArgs *, const FGeometry *, const FSlateRect *, const FSlateRect *, FSlateWindowElementList *, int, const FWidgetStyle *, bool>(this, "SObjectWidget.OnPaint", Args, AllottedGeometry, MyClippingRect, MyClippingRectRenderTransform, OutDrawElements, LayerId, InWidgetStyle, bParentEnabled); }
	FReply * OnPreviewKeyDown(FReply * result, const FGeometry * MyGeometry, const FKeyboardEvent * InKeyboardEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FKeyboardEvent *>(this, "SObjectWidget.OnPreviewKeyDown", result, MyGeometry, InKeyboardEvent); }
	FReply * OnPreviewMouseButtonDown(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SObjectWidget.OnPreviewMouseButtonDown", result, MyGeometry, MouseEvent); }
	FReply * OnTouchEnded(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * InTouchEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SObjectWidget.OnTouchEnded", result, MyGeometry, InTouchEvent); }
	FReply * OnTouchGesture(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * GestureEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SObjectWidget.OnTouchGesture", result, MyGeometry, GestureEvent); }
	FReply * OnTouchMoved(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * InTouchEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SObjectWidget.OnTouchMoved", result, MyGeometry, InTouchEvent); }
	FReply * OnTouchStarted(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * InTouchEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SObjectWidget.OnTouchStarted", result, MyGeometry, InTouchEvent); }
	bool SupportsKeyboardFocus() { return NativeCall<bool>(this, "SObjectWidget.SupportsKeyboardFocus"); }
	void Tick(const FGeometry * AllottedGeometry, const long double InCurrentTime, const float InDeltaTime) { NativeCall<void, const FGeometry *, const long double, const float>(this, "SObjectWidget.Tick", AllottedGeometry, InCurrentTime, InDeltaTime); }
};

