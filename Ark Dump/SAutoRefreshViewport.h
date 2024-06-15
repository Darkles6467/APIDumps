#pragma once

#include "BaseDeclarations.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"
#include "SDockingArea.h"

struct SViewport : SCompoundWidget
{
	char __padding[0x58L];
	TAttribute<bool>& ShowDisabledEffectField() { return *GetNativePointerField<TAttribute<bool>*>(this, "SViewport.ShowDisabledEffect"); }
	TAttribute<FVector2D>& ViewportSizeField() { return *GetNativePointerField<TAttribute<FVector2D>*>(this, "SViewport.ViewportSize"); }
	bool& bRenderDirectlyToWindowField() { return *GetNativePointerField<bool*>(this, "SViewport.bRenderDirectlyToWindow"); }
	bool& bEnableGammaCorrectionField() { return *GetNativePointerField<bool*>(this, "SViewport.bEnableGammaCorrection"); }
	bool& bEnableBlendingField() { return *GetNativePointerField<bool*>(this, "SViewport.bEnableBlending"); }
	bool& bIgnoreTextureAlphaField() { return *GetNativePointerField<bool*>(this, "SViewport.bIgnoreTextureAlpha"); }

	// Functions

	void SetViewportInterface(TSharedRef<SDockingSplitter,0> InParent) { NativeCall<void, TSharedRef<SDockingSplitter,0>>(this, "SViewport.SetViewportInterface", InParent); }
	FVector2D * ComputeDesiredSize(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "SViewport.ComputeDesiredSize", result); }
	void Construct(const SViewport::FArguments * InArgs) { NativeCall<void, const SViewport::FArguments *>(this, "SViewport.Construct", InArgs); }
	FReply * OnControllerAnalogValueChanged(FReply * result, const FGeometry * MyGeometry, const FControllerEvent * ControllerEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FControllerEvent *>(this, "SViewport.OnControllerAnalogValueChanged", result, MyGeometry, ControllerEvent); }
	FReply * OnControllerButtonPressed(FReply * result, const FGeometry * MyGeometry, const FControllerEvent * ControllerEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FControllerEvent *>(this, "SViewport.OnControllerButtonPressed", result, MyGeometry, ControllerEvent); }
	FReply * OnControllerButtonReleased(FReply * result, const FGeometry * MyGeometry, const FControllerEvent * ControllerEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FControllerEvent *>(this, "SViewport.OnControllerButtonReleased", result, MyGeometry, ControllerEvent); }
	FCursorReply * OnCursorQuery(FCursorReply * result, const FGeometry * MyGeometry, const FPointerEvent * CursorEvent) { return NativeCall<FCursorReply *, FCursorReply *, const FGeometry *, const FPointerEvent *>(this, "SViewport.OnCursorQuery", result, MyGeometry, CursorEvent); }
	FReply * OnKeyChar(FReply * result, const FGeometry * MyGeometry, const FCharacterEvent * CharacterEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FCharacterEvent *>(this, "SViewport.OnKeyChar", result, MyGeometry, CharacterEvent); }
	FReply * OnKeyDown(FReply * result, const FGeometry * MyGeometry, const FKeyboardEvent * KeyboardEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FKeyboardEvent *>(this, "SViewport.OnKeyDown", result, MyGeometry, KeyboardEvent); }
	FReply * OnKeyUp(FReply * result, const FGeometry * MyGeometry, const FKeyboardEvent * KeyboardEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FKeyboardEvent *>(this, "SViewport.OnKeyUp", result, MyGeometry, KeyboardEvent); }
	void OnKeyboardFocusLost(const FKeyboardFocusEvent * InKeyboardFocusEvent) { NativeCall<void, const FKeyboardFocusEvent *>(this, "SViewport.OnKeyboardFocusLost", InKeyboardFocusEvent); }
	FReply * OnKeyboardFocusReceived(FReply * result, const FGeometry * MyGeometry, const FKeyboardFocusEvent * InKeyboardFocusEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FKeyboardFocusEvent *>(this, "SViewport.OnKeyboardFocusReceived", result, MyGeometry, InKeyboardFocusEvent); }
	FReply * OnMotionDetected(FReply * result, const FGeometry * MyGeometry, const FMotionEvent * MotionEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FMotionEvent *>(this, "SViewport.OnMotionDetected", result, MyGeometry, MotionEvent); }
	FReply * OnMouseButtonDoubleClick(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SViewport.OnMouseButtonDoubleClick", result, MyGeometry, MouseEvent); }
	FReply * OnMouseButtonDown(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SViewport.OnMouseButtonDown", result, MyGeometry, MouseEvent); }
	FReply * OnMouseButtonUp(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SViewport.OnMouseButtonUp", result, MyGeometry, MouseEvent); }
	void OnMouseEnter(const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { NativeCall<void, const FGeometry *, const FPointerEvent *>(this, "SViewport.OnMouseEnter", MyGeometry, MouseEvent); }
	void OnMouseLeave(const FPointerEvent * MouseEvent) { NativeCall<void, const FPointerEvent *>(this, "SViewport.OnMouseLeave", MouseEvent); }
	FReply * OnMouseMove(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SViewport.OnMouseMove", result, MyGeometry, MouseEvent); }
	FReply * OnMouseWheel(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SViewport.OnMouseWheel", result, MyGeometry, MouseEvent); }
	int OnPaint(const FPaintArgs * Args, const FGeometry * AllottedGeometry, const FSlateRect * MyClippingRect, const FSlateRect * MyClippingRectRenderTransform, FSlateWindowElementList * OutDrawElements, int LayerId, const FWidgetStyle * InWidgetStyle, bool bParentEnabled) { return NativeCall<int, const FPaintArgs *, const FGeometry *, const FSlateRect *, const FSlateRect *, FSlateWindowElementList *, int, const FWidgetStyle *, bool>(this, "SViewport.OnPaint", Args, AllottedGeometry, MyClippingRect, MyClippingRectRenderTransform, OutDrawElements, LayerId, InWidgetStyle, bParentEnabled); }
	FReply * OnTouchEnded(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * TouchEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SViewport.OnTouchEnded", result, MyGeometry, TouchEvent); }
	FReply * OnTouchGesture(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * GestureEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SViewport.OnTouchGesture", result, MyGeometry, GestureEvent); }
	FReply * OnTouchMoved(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * TouchEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SViewport.OnTouchMoved", result, MyGeometry, TouchEvent); }
	FReply * OnTouchStarted(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * TouchEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SViewport.OnTouchStarted", result, MyGeometry, TouchEvent); }
	void Tick(const FGeometry * AllottedGeometry, const long double InCurrentTime, const float InDeltaTime) { NativeCall<void, const FGeometry *, const long double, const float>(this, "SViewport.Tick", AllottedGeometry, InCurrentTime, InDeltaTime); }
	void FArguments() { NativeCall<void>(this, "SViewport.FArguments"); }
	void FArguments() { NativeCall<void>(this, "SViewport.FArguments"); }
	void SetContent(TSharedPtr<SWidget,0> InContent) { NativeCall<void, TSharedPtr<SWidget,0>>(this, "SViewport.SetContent", InContent); }
};

struct SAutoRefreshViewport : SViewport
{
	char __padding[0x58L];
	TSharedPtr<FUMGViewportClient,0>& ViewportClientField() { return *GetNativePointerField<TSharedPtr<FUMGViewportClient,0>*>(this, "SAutoRefreshViewport.ViewportClient"); }
	FPreviewScene& PreviewSceneField() { return *GetNativePointerField<FPreviewScene*>(this, "SAutoRefreshViewport.PreviewScene"); }

	// Functions

	void FArguments() { NativeCall<void>(this, "SAutoRefreshViewport.FArguments"); }
	void Construct(const SAutoRefreshViewport::FArguments * InArgs) { NativeCall<void, const SAutoRefreshViewport::FArguments *>(this, "SAutoRefreshViewport.Construct", InArgs); }
	void Tick(const FGeometry * AllottedGeometry, const long double InCurrentTime, const float InDeltaTime) { NativeCall<void, const FGeometry *, const long double, const float>(this, "SAutoRefreshViewport.Tick", AllottedGeometry, InCurrentTime, InDeltaTime); }
};

