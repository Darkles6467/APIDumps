#pragma once

#include "BaseDeclarations.h"
#include "SWindow.h"
#include "FKey.h"

struct FViewportFrame
{
	char __padding[0x8L];
};

struct FSceneViewport : FViewportFrame
{
	char __padding[0x270L];
	FReply& CurrentReplyStateField() { return *GetNativePointerField<FReply*>(this, "FSceneViewport.CurrentReplyState"); }
	FIntPoint& CachedMousePosField() { return *GetNativePointerField<FIntPoint*>(this, "FSceneViewport.CachedMousePos"); }
	FGeometry& CachedGeometryField() { return *GetNativePointerField<FGeometry*>(this, "FSceneViewport.CachedGeometry"); }
	FIntPoint& PreCaptureMousePosField() { return *GetNativePointerField<FIntPoint*>(this, "FSceneViewport.PreCaptureMousePos"); }
	FVector2D& SoftwareCursorPositionField() { return *GetNativePointerField<FVector2D*>(this, "FSceneViewport.SoftwareCursorPosition"); }
	bool& bIsSoftwareCursorVisibleField() { return *GetNativePointerField<bool*>(this, "FSceneViewport.bIsSoftwareCursorVisible"); }
	TSharedPtr<FDebugCanvasDrawer,1>& DebugCanvasDrawerField() { return *GetNativePointerField<TSharedPtr<FDebugCanvasDrawer,1>*>(this, "FSceneViewport.DebugCanvasDrawer"); }
	int& NumMouseSamplesXField() { return *GetNativePointerField<int*>(this, "FSceneViewport.NumMouseSamplesX"); }
	int& NumMouseSamplesYField() { return *GetNativePointerField<int*>(this, "FSceneViewport.NumMouseSamplesY"); }
	FIntPoint& MouseDeltaField() { return *GetNativePointerField<FIntPoint*>(this, "FSceneViewport.MouseDelta"); }
	bool& bIsCursorVisibleField() { return *GetNativePointerField<bool*>(this, "FSceneViewport.bIsCursorVisible"); }
	bool& bRequiresVsyncField() { return *GetNativePointerField<bool*>(this, "FSceneViewport.bRequiresVsync"); }
	bool& bUseSeparateRenderTargetField() { return *GetNativePointerField<bool*>(this, "FSceneViewport.bUseSeparateRenderTarget"); }
	bool& bIsResizingField() { return *GetNativePointerField<bool*>(this, "FSceneViewport.bIsResizing"); }
	bool& bPlayInEditorGetsMouseControlField() { return *GetNativePointerField<bool*>(this, "FSceneViewport.bPlayInEditorGetsMouseControl"); }
	bool& bPlayInEditorIsSimulateField() { return *GetNativePointerField<bool*>(this, "FSceneViewport.bPlayInEditorIsSimulate"); }
	FIntPoint& RTTSizeField() { return *GetNativePointerField<FIntPoint*>(this, "FSceneViewport.RTTSize"); }

	// Functions

	void ApplyModifierKeys(const FModifierKeysState * InKeysState) { NativeCall<void, const FModifierKeysState *>(this, "FSceneViewport.ApplyModifierKeys", InKeysState); }
	void BeginRenderFrame(FRHICommandListImmediate * RHICmdList) { NativeCall<void, FRHICommandListImmediate *>(this, "FSceneViewport.BeginRenderFrame", RHICmdList); }
	bool CaptureJoystickInput(bool Capture) { return NativeCall<bool, bool>(this, "FSceneViewport.CaptureJoystickInput", Capture); }
	void CaptureMouse(bool bCapture) { NativeCall<void, bool>(this, "FSceneViewport.CaptureMouse", bCapture); }
	void DeferInvalidateHitProxy() { NativeCall<void>(this, "FSceneViewport.DeferInvalidateHitProxy"); }
	void Destroy() { NativeCall<void>(this, "FSceneViewport.Destroy"); }
	void EndRenderFrame(FRHICommandListImmediate * RHICmdList, bool bPresent, bool bLockToVsync) { NativeCall<void, FRHICommandListImmediate *, bool, bool>(this, "FSceneViewport.EndRenderFrame", RHICmdList, bPresent, bLockToVsync); }
	void EnqueueBeginRenderFrame() { NativeCall<void>(this, "FSceneViewport.EnqueueBeginRenderFrame"); }
	TSharedPtr<SWindow,0> * FindWindowW(TSharedPtr<SWindow,0> * result) { return NativeCall<TSharedPtr<SWindow,0> *, TSharedPtr<SWindow,0> *>(this, "FSceneViewport.FindWindowW", result); }
	FCanvas * GetDebugCanvas() { return NativeCall<FCanvas *>(this, "FSceneViewport.GetDebugCanvas"); }
	FString * GetFriendlyName(FString * result) { return NativeCall<FString *, FString *>(this, "FSceneViewport.GetFriendlyName", result); }
	void GetMousePos(FIntPoint * MousePosition, const bool bLocalPosition) { NativeCall<void, FIntPoint *, const bool>(this, "FSceneViewport.GetMousePos", MousePosition, bLocalPosition); }
	int GetMouseX() { return NativeCall<int>(this, "FSceneViewport.GetMouseX"); }
	int GetMouseY() { return NativeCall<int>(this, "FSceneViewport.GetMouseY"); }
	FIntPoint * GetRenderTargetTextureSizeXY(FIntPoint * result) { return NativeCall<FIntPoint *, FIntPoint *>(this, "FSceneViewport.GetRenderTargetTextureSizeXY", result); }
	FIntPoint * GetSize(FIntPoint * result) { return NativeCall<FIntPoint *, FIntPoint *>(this, "FSceneViewport.GetSize", result); }
	FVector2D * GetSoftwareCursorPosition(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "FSceneViewport.GetSoftwareCursorPosition", result); }
	bool HasFocus() { return NativeCall<bool>(this, "FSceneViewport.HasFocus"); }
	bool HasMouseCapture() { return NativeCall<bool>(this, "FSceneViewport.HasMouseCapture"); }
	void InitDynamicRHI() { NativeCall<void>(this, "FSceneViewport.InitDynamicRHI"); }
	void InvalidateDisplay() { NativeCall<void>(this, "FSceneViewport.InvalidateDisplay"); }
	bool IsCursorVisible() { return NativeCall<bool>(this, "FSceneViewport.IsCursorVisible"); }
	bool IsForegroundWindow() { return NativeCall<bool>(this, "FSceneViewport.IsForegroundWindow"); }
	bool IsSoftwareCursorVisible() { return NativeCall<bool>(this, "FSceneViewport.IsSoftwareCursorVisible"); }
	bool KeyState(FKey Key) { return NativeCall<bool, FKey>(this, "FSceneViewport.KeyState", Key); }
	void LockMouseToViewport(bool bLock) { NativeCall<void, bool>(this, "FSceneViewport.LockMouseToViewport", bLock); }
	FReply * OnControllerAnalogValueChanged(FReply * result, const FGeometry * MyGeometry, const FControllerEvent * ControllerEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FControllerEvent *>(this, "FSceneViewport.OnControllerAnalogValueChanged", result, MyGeometry, ControllerEvent); }
	FReply * OnControllerButtonPressed(FReply * result, const FGeometry * MyGeometry, const FControllerEvent * ControllerEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FControllerEvent *>(this, "FSceneViewport.OnControllerButtonPressed", result, MyGeometry, ControllerEvent); }
	FReply * OnControllerButtonReleased(FReply * result, const FGeometry * MyGeometry, const FControllerEvent * ControllerEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FControllerEvent *>(this, "FSceneViewport.OnControllerButtonReleased", result, MyGeometry, ControllerEvent); }
	FCursorReply * OnCursorQuery(FCursorReply * result, const FGeometry * MyGeometry, const FPointerEvent * CursorEvent) { return NativeCall<FCursorReply *, FCursorReply *, const FGeometry *, const FPointerEvent *>(this, "FSceneViewport.OnCursorQuery", result, MyGeometry, CursorEvent); }
	void OnDrawViewport(const FGeometry * AllottedGeometry, const FSlateRect * MyClippingRect, FSlateWindowElementList * OutDrawElements, int LayerId, const FWidgetStyle * InWidgetStyle, bool bParentEnabled) { NativeCall<void, const FGeometry *, const FSlateRect *, FSlateWindowElementList *, int, const FWidgetStyle *, bool>(this, "FSceneViewport.OnDrawViewport", AllottedGeometry, MyClippingRect, OutDrawElements, LayerId, InWidgetStyle, bParentEnabled); }
	FReply * OnKeyChar(FReply * result, const FGeometry * InGeometry, const FCharacterEvent * InCharacterEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FCharacterEvent *>(this, "FSceneViewport.OnKeyChar", result, InGeometry, InCharacterEvent); }
	FReply * OnKeyDown(FReply * result, const FGeometry * InGeometry, const FKeyboardEvent * InKeyboardEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FKeyboardEvent *>(this, "FSceneViewport.OnKeyDown", result, InGeometry, InKeyboardEvent); }
	FReply * OnKeyUp(FReply * result, const FGeometry * InGeometry, const FKeyboardEvent * InKeyboardEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FKeyboardEvent *>(this, "FSceneViewport.OnKeyUp", result, InGeometry, InKeyboardEvent); }
	void OnKeyboardFocusLost(const FKeyboardFocusEvent * InKeyboardFocusEvent) { NativeCall<void, const FKeyboardFocusEvent *>(this, "FSceneViewport.OnKeyboardFocusLost", InKeyboardFocusEvent); }
	FReply * OnKeyboardFocusReceived(FReply * result, const FKeyboardFocusEvent * InKeyboardFocusEvent) { return NativeCall<FReply *, FReply *, const FKeyboardFocusEvent *>(this, "FSceneViewport.OnKeyboardFocusReceived", result, InKeyboardFocusEvent); }
	FReply * OnMotionDetected(FReply * result, const FGeometry * MyGeometry, const FMotionEvent * MotionEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FMotionEvent *>(this, "FSceneViewport.OnMotionDetected", result, MyGeometry, MotionEvent); }
	FReply * OnMouseButtonDoubleClick(FReply * result, const FGeometry * InGeometry, const FPointerEvent * InMouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "FSceneViewport.OnMouseButtonDoubleClick", result, InGeometry, InMouseEvent); }
	FReply * OnMouseButtonDown(FReply * result, const FGeometry * InGeometry, const FPointerEvent * InMouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "FSceneViewport.OnMouseButtonDown", result, InGeometry, InMouseEvent); }
	FReply * OnMouseButtonUp(FReply * result, const FGeometry * InGeometry, const FPointerEvent * InMouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "FSceneViewport.OnMouseButtonUp", result, InGeometry, InMouseEvent); }
	void OnMouseEnter(const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { NativeCall<void, const FGeometry *, const FPointerEvent *>(this, "FSceneViewport.OnMouseEnter", MyGeometry, MouseEvent); }
	void OnMouseLeave(const FPointerEvent * MouseEvent) { NativeCall<void, const FPointerEvent *>(this, "FSceneViewport.OnMouseLeave", MouseEvent); }
	FReply * OnMouseMove(FReply * result, const FGeometry * InGeometry, const FPointerEvent * InMouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "FSceneViewport.OnMouseMove", result, InGeometry, InMouseEvent); }
	FReply * OnMouseWheel(FReply * result, const FGeometry * InGeometry, const FPointerEvent * InMouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "FSceneViewport.OnMouseWheel", result, InGeometry, InMouseEvent); }
	FReply * OnTouchEnded(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * TouchEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "FSceneViewport.OnTouchEnded", result, MyGeometry, TouchEvent); }
	FReply * OnTouchGesture(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * GestureEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "FSceneViewport.OnTouchGesture", result, MyGeometry, GestureEvent); }
	FReply * OnTouchMoved(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * TouchEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "FSceneViewport.OnTouchMoved", result, MyGeometry, TouchEvent); }
	FReply * OnTouchStarted(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * TouchEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "FSceneViewport.OnTouchStarted", result, MyGeometry, TouchEvent); }
	void OnViewportClosed() { NativeCall<void>(this, "FSceneViewport.OnViewportClosed"); }
	void ProcessInput(float DeltaTime) { NativeCall<void, float>(this, "FSceneViewport.ProcessInput", DeltaTime); }
	void ReleaseDynamicRHI() { NativeCall<void>(this, "FSceneViewport.ReleaseDynamicRHI"); }
	void ReleaseResource() { NativeCall<void>(this, "FSceneViewport.ReleaseResource"); }
	bool RequiresVsync() { return NativeCall<bool>(this, "FSceneViewport.RequiresVsync"); }
	void ResizeFrame(unsigned int NewSizeX, unsigned int NewSizeY, EWindowMode::Type NewWindowMode, int InPosX, int InPosY) { NativeCall<void, unsigned int, unsigned int, EWindowMode::Type, int, int>(this, "FSceneViewport.ResizeFrame", NewSizeX, NewSizeY, NewWindowMode, InPosX, InPosY); }
	void ResizeViewport(unsigned int NewSizeX, unsigned int NewSizeY, EWindowMode::Type NewWindowMode, int InPosX, int InPosY) { NativeCall<void, unsigned int, unsigned int, EWindowMode::Type, int, int>(this, "FSceneViewport.ResizeViewport", NewSizeX, NewSizeY, NewWindowMode, InPosX, InPosY); }
	void SetMouse(int X, int Y) { NativeCall<void, int, int>(this, "FSceneViewport.SetMouse", X, Y); }
	void SetPreCaptureMousePosFromSlateCursor() { NativeCall<void>(this, "FSceneViewport.SetPreCaptureMousePosFromSlateCursor"); }
	void SetRequiresVsync(bool bShouldVsync) { NativeCall<void, bool>(this, "FSceneViewport.SetRequiresVsync", bShouldVsync); }
	void SetSoftwareCursorPosition(FVector2D Position) { NativeCall<void, FVector2D>(this, "FSceneViewport.SetSoftwareCursorPosition", Position); }
	void SetViewportSize(unsigned int NewViewportSizeX, unsigned int NewViewportSizeY) { NativeCall<void, unsigned int, unsigned int>(this, "FSceneViewport.SetViewportSize", NewViewportSizeX, NewViewportSizeY); }
	void ShowCursor(bool bVisible) { NativeCall<void, bool>(this, "FSceneViewport.ShowCursor", bVisible); }
	void ShowSoftwareCursor(bool bVisible) { NativeCall<void, bool>(this, "FSceneViewport.ShowSoftwareCursor", bVisible); }
	void Tick(float DeltaTime) { NativeCall<void, float>(this, "FSceneViewport.Tick", DeltaTime); }
	void UpdateCachedMousePos(const FGeometry * InGeometry, const FPointerEvent * InMouseEvent) { NativeCall<void, const FGeometry *, const FPointerEvent *>(this, "FSceneViewport.UpdateCachedMousePos", InGeometry, InMouseEvent); }
	void UpdateModifierKeys(const FPointerEvent * InMouseEvent) { NativeCall<void, const FPointerEvent *>(this, "FSceneViewport.UpdateModifierKeys", InMouseEvent); }
	void UpdateViewportRHI(bool bDestroyed, unsigned int NewSizeX, unsigned int NewSizeY, EWindowMode::Type NewWindowMode) { NativeCall<void, bool, unsigned int, unsigned int, EWindowMode::Type>(this, "FSceneViewport.UpdateViewportRHI", bDestroyed, NewSizeX, NewSizeY, NewWindowMode); }
	FIntPoint * ViewportToVirtualDesktopPixel(FIntPoint * result, FVector2D ViewportCoordinate) { return NativeCall<FIntPoint *, FIntPoint *, FVector2D>(this, "FSceneViewport.ViewportToVirtualDesktopPixel", result, ViewportCoordinate); }
	FVector2D * VirtualDesktopPixelToViewport(FVector2D * result, FIntPoint VirtualDesktopPointPx) { return NativeCall<FVector2D *, FVector2D *, FIntPoint>(this, "FSceneViewport.VirtualDesktopPixelToViewport", result, VirtualDesktopPointPx); }
};

