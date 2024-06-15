#pragma once

#include "BaseDeclarations.h"
#include "SWindow.h"
#include "EVisibility.h"
#include "SWidget.h"
#include "SAutoRefreshViewport.h"
#include "IVirtualKeyboardEntry.h"
#include "IToolTip.h"
#include "FWidgetPath.h"
#include "IWidgetReflector.h"

struct FSlateApplicationBase
{
	char __padding[0x18L];
	TSharedPtr<FSlateRenderer,0>& RendererField() { return *GetNativePointerField<TSharedPtr<FSlateRenderer,0>*>(this, "FSlateApplicationBase.Renderer"); }
};

struct FSlateApplication : FSlateApplicationBase
{
	char __padding[0x578L];
	int& RecentEventControllerIdField() { return *GetNativePointerField<int*>(this, "FSlateApplication.RecentEventControllerId"); }
	bool& AllowOnlyInputFromSpecificControllerField() { return *GetNativePointerField<bool*>(this, "FSlateApplication.AllowOnlyInputFromSpecificController"); }
	int& AllowedControllerIdField() { return *GetNativePointerField<int*>(this, "FSlateApplication.AllowedControllerId"); }
	bool& bVirtualKeyboardOpenField() { return *GetNativePointerField<bool*>(this, "FSlateApplication.bVirtualKeyboardOpen"); }
	bool& bAppIsActiveField() { return *GetNativePointerField<bool*>(this, "FSlateApplication.bAppIsActive"); }
	bool& bSlateWindowActiveField() { return *GetNativePointerField<bool*>(this, "FSlateApplication.bSlateWindowActive"); }
	float& ScaleField() { return *GetNativePointerField<float*>(this, "FSlateApplication.Scale"); }
	TArray<TSharedRef<SWindow,0>>& SlateWindowsField() { return *GetNativePointerField<TArray<TSharedRef<SWindow,0>>*>(this, "FSlateApplication.SlateWindows"); }
	TWeakPtr<SWindow,0>& ActiveTopLevelWindowField() { return *GetNativePointerField<TWeakPtr<SWindow,0>*>(this, "FSlateApplication.ActiveTopLevelWindow"); }
	TArray<TSharedPtr<SWindow,0>>& ActiveModalWindowsField() { return *GetNativePointerField<TArray<TSharedPtr<SWindow,0>>*>(this, "FSlateApplication.ActiveModalWindows"); }
	TArray<TSharedRef<SWindow,0>>& WindowDestroyQueueField() { return *GetNativePointerField<TArray<TSharedRef<SWindow,0>>*>(this, "FSlateApplication.WindowDestroyQueue"); }
	FMenuStack& MenuStackField() { return *GetNativePointerField<FMenuStack*>(this, "FSlateApplication.MenuStack"); }
	FWeakWidgetPath& WidgetsUnderCursorLastEventField() { return *GetNativePointerField<FWeakWidgetPath*>(this, "FSlateApplication.WidgetsUnderCursorLastEvent"); }
	FSlateApplication::MouseCaptorHelper& MouseCaptorField() { return *GetNativePointerField<FSlateApplication::MouseCaptorHelper*>(this, "FSlateApplication.MouseCaptor"); }
	FieldArray<FWeakWidgetPath, 8> JoystickCaptorWeakPathsField() { return {this, "FSlateApplication.JoystickCaptorWeakPaths"}; }
	FThrottleRequest& MouseButtonDownResponsivnessThrottleField() { return *GetNativePointerField<FThrottleRequest*>(this, "FSlateApplication.MouseButtonDownResponsivnessThrottle"); }
	FThrottleRequest& UserInteractionResponsivnessThrottleField() { return *GetNativePointerField<FThrottleRequest*>(this, "FSlateApplication.UserInteractionResponsivnessThrottle"); }
	long double& LastUserInteractionTimeField() { return *GetNativePointerField<long double*>(this, "FSlateApplication.LastUserInteractionTime"); }
	long double& LastUserInteractionTimeForThrottlingField() { return *GetNativePointerField<long double*>(this, "FSlateApplication.LastUserInteractionTimeForThrottling"); }
	FSlateApplication::FDragDetector& DragDetectorField() { return *GetNativePointerField<FSlateApplication::FDragDetector*>(this, "FSlateApplication.DragDetector"); }
	FPopupSupport& PopupSupportField() { return *GetNativePointerField<FPopupSupport*>(this, "FSlateApplication.PopupSupport"); }
	FWeakWidgetPath& FocusedWidgetPathField() { return *GetNativePointerField<FWeakWidgetPath*>(this, "FSlateApplication.FocusedWidgetPath"); }
	EKeyboardFocusCause::Type& FocusCauseField() { return *GetNativePointerField<EKeyboardFocusCause::Type*>(this, "FSlateApplication.FocusCause"); }
	long double& CurrentTimeField() { return *GetNativePointerField<long double*>(this, "FSlateApplication.CurrentTime"); }
	long double& LastTickTimeField() { return *GetNativePointerField<long double*>(this, "FSlateApplication.LastTickTime"); }
	float& AverageDeltaTimeField() { return *GetNativePointerField<float*>(this, "FSlateApplication.AverageDeltaTime"); }
	float& AverageDeltaTimeForResponsivenessField() { return *GetNativePointerField<float*>(this, "FSlateApplication.AverageDeltaTimeForResponsiveness"); }
	TWeakPtr<IWidgetReflector,0>& WidgetReflectorPtrField() { return *GetNativePointerField<TWeakPtr<IWidgetReflector,0>*>(this, "FSlateApplication.WidgetReflectorPtr"); }
	int& NumExternalModalWindowsActiveField() { return *GetNativePointerField<int*>(this, "FSlateApplication.NumExternalModalWindowsActive"); }
	TWeakPtr<SWindow,0>& ToolTipWindowField() { return *GetNativePointerField<TWeakPtr<SWindow,0>*>(this, "FSlateApplication.ToolTipWindow"); }
	TWeakPtr<IToolTip,0>& ActiveToolTipField() { return *GetNativePointerField<TWeakPtr<IToolTip,0>*>(this, "FSlateApplication.ActiveToolTip"); }
	int& bAllowToolTipsField() { return *GetNativePointerField<int*>(this, "FSlateApplication.bAllowToolTips"); }
	float& ToolTipDelayField() { return *GetNativePointerField<float*>(this, "FSlateApplication.ToolTipDelay"); }
	float& ToolTipFadeInDurationField() { return *GetNativePointerField<float*>(this, "FSlateApplication.ToolTipFadeInDuration"); }
	long double& ToolTipSummonTimeField() { return *GetNativePointerField<long double*>(this, "FSlateApplication.ToolTipSummonTime"); }
	FVector2D& DesiredToolTipLocationField() { return *GetNativePointerField<FVector2D*>(this, "FSlateApplication.DesiredToolTipLocation"); }
	FSlateApplication::EToolTipOffsetDirection::Type& ToolTipOffsetDirectionField() { return *GetNativePointerField<FSlateApplication::EToolTipOffsetDirection::Type*>(this, "FSlateApplication.ToolTipOffsetDirection"); }
	const struct FStyleNode * RootStyleNodeField() { return GetNativePointerField<const struct FStyleNode *>(this, "FSlateApplication.RootStyleNode"); }
	bool& bRequestLeaveDebugModeField() { return *GetNativePointerField<bool*>(this, "FSlateApplication.bRequestLeaveDebugMode"); }
	bool& bLeaveDebugForSingleStepField() { return *GetNativePointerField<bool*>(this, "FSlateApplication.bLeaveDebugForSingleStep"); }
	TAttribute<bool>& NormalExecutionGetterField() { return *GetNativePointerField<TAttribute<bool>*>(this, "FSlateApplication.NormalExecutionGetter"); }
	FAutoConsoleVariableRef& CVarAllowToolTipsField() { return *GetNativePointerField<FAutoConsoleVariableRef*>(this, "FSlateApplication.CVarAllowToolTips"); }
	FAutoConsoleVariableRef& CVarToolTipDelayField() { return *GetNativePointerField<FAutoConsoleVariableRef*>(this, "FSlateApplication.CVarToolTipDelay"); }
	FAutoConsoleVariableRef& CVarToolTipFadeInDurationField() { return *GetNativePointerField<FAutoConsoleVariableRef*>(this, "FSlateApplication.CVarToolTipFadeInDuration"); }
	bool& bIsExternalUIOpenedField() { return *GetNativePointerField<bool*>(this, "FSlateApplication.bIsExternalUIOpened"); }
	FThrottleRequest& ThrottleHandleField() { return *GetNativePointerField<FThrottleRequest*>(this, "FSlateApplication.ThrottleHandle"); }
	bool& DragIsHandledField() { return *GetNativePointerField<bool*>(this, "FSlateApplication.DragIsHandled"); }
	bool& bAllowVirtualizedShowKeyboardField() { return *GetNativePointerField<bool*>(this, "FSlateApplication.bAllowVirtualizedShowKeyboard"); }
	bool& bAllowForcedVirtualizedShowKeyboardField() { return *GetNativePointerField<bool*>(this, "FSlateApplication.bAllowForcedVirtualizedShowKeyboard"); }
	bool& bIsFakingTouchField() { return *GetNativePointerField<bool*>(this, "FSlateApplication.bIsFakingTouch"); }
	bool& bIsGameFakingTouchField() { return *GetNativePointerField<bool*>(this, "FSlateApplication.bIsGameFakingTouch"); }
	bool& bIsFakingTouchedField() { return *GetNativePointerField<bool*>(this, "FSlateApplication.bIsFakingTouched"); }
	bool& bTouchFallbackToMouseField() { return *GetNativePointerField<bool*>(this, "FSlateApplication.bTouchFallbackToMouse"); }
	bool& bMenuAnimationsEnabledField() { return *GetNativePointerField<bool*>(this, "FSlateApplication.bMenuAnimationsEnabled"); }
	FSlateRect& VirtualDesktopRectField() { return *GetNativePointerField<FSlateRect*>(this, "FSlateApplication.VirtualDesktopRect"); }
	TSharedRef<FHittestGrid,0>& HittestGridField() { return *GetNativePointerField<TSharedRef<FHittestGrid,0>*>(this, "FSlateApplication.HittestGrid"); }
	bool& bRedirectedControllerMouseField() { return *GetNativePointerField<bool*>(this, "FSlateApplication.bRedirectedControllerMouse"); }
	bool& bWasCapturingField() { return *GetNativePointerField<bool*>(this, "FSlateApplication.bWasCapturing"); }
	FVector2D& ControllerMouseField() { return *GetNativePointerField<FVector2D*>(this, "FSlateApplication.ControllerMouse"); }

	// Functions

	static FSlateApplication * Get() { return NativeCall<FSlateApplication *>(nullptr, "FSlateApplication.Get"); }
	float GetDeltaTime() { return NativeCall<float>(this, "FSlateApplication.GetDeltaTime"); }
	bool InvalidateAllViewports(const wchar_t * To, const wchar_t * From) { return NativeCall<bool, const wchar_t *, const wchar_t *>(this, "FSlateApplication.InvalidateAllViewports", To, From); }
	TSharedRef<SWindow,0> * AddWindowAsNativeChild(TSharedRef<SWindow,0> * result, TSharedRef<SWindow,0> InSlateWindow, TSharedRef<SWindow,0> InParentWindow, const bool bShowImmediately) { return NativeCall<TSharedRef<SWindow,0> *, TSharedRef<SWindow,0> *, TSharedRef<SWindow,0>, TSharedRef<SWindow,0>, const bool>(this, "FSlateApplication.AddWindowAsNativeChild", result, InSlateWindow, InParentWindow, bShowImmediately); }
	void ClearKeyboardFocus(const EKeyboardFocusCause::Type InCause) { NativeCall<void, const EKeyboardFocusCause::Type>(this, "FSlateApplication.ClearKeyboardFocus", InCause); }
	void CloseToolTip() { NativeCall<void>(this, "FSlateApplication.CloseToolTip"); }
	void DestroyWindowsImmediately() { NativeCall<void>(this, "FSlateApplication.DestroyWindowsImmediately"); }
	void DismissAllMenus() { NativeCall<void>(this, "FSlateApplication.DismissAllMenus"); }
	void DismissMenu(TSharedRef<SWindow,0> MenuWindowToDismiss) { NativeCall<void, TSharedRef<SWindow,0>>(this, "FSlateApplication.DismissMenu", MenuWindowToDismiss); }
	int DrawKeyboardFocus(const FWidgetPath * FocusPath, FSlateWindowElementList * WindowElementList, int InLayerId) { return NativeCall<int, const FWidgetPath *, FSlateWindowElementList *, int>(this, "FSlateApplication.DrawKeyboardFocus", FocusPath, WindowElementList, InLayerId); }
	void DrawPrepass(TSharedPtr<SWindow,0> DrawOnlyThisWindow) { NativeCall<void, TSharedPtr<SWindow,0>>(this, "FSlateApplication.DrawPrepass", DrawOnlyThisWindow); }
	void DrawWindowAndChildren(const TSharedRef<SWindow,0> * WindowToDraw, FDrawWindowArgs * DrawWindowArgs) { NativeCall<void, const TSharedRef<SWindow,0> *, FDrawWindowArgs *>(this, "FSlateApplication.DrawWindowAndChildren", WindowToDraw, DrawWindowArgs); }
	TSharedPtr<SWindow,0> * FindWidgetWindow(TSharedPtr<SWindow,0> * result, TSharedRef<SWidget const ,0> InWidget) { return NativeCall<TSharedPtr<SWindow,0> *, TSharedPtr<SWindow,0> *, TSharedRef<SWidget const ,0>>(this, "FSlateApplication.FindWidgetWindow", result, InWidget); }
	TSharedPtr<SWindow,0> * FindWidgetWindow(TSharedPtr<SWindow,0> * result, TSharedRef<SWidget const ,0> InWidget, FWidgetPath * OutWidgetPath) { return NativeCall<TSharedPtr<SWindow,0> *, TSharedPtr<SWindow,0> *, TSharedRef<SWidget const ,0>, FWidgetPath *>(this, "FSlateApplication.FindWidgetWindow", result, InWidget, OutWidgetPath); }
	void ForceRedrawWindow(TSharedRef<SWindow,0> * InWindowToDraw) { NativeCall<void, TSharedRef<SWindow,0> *>(this, "FSlateApplication.ForceRedrawWindow", InWindowToDraw); }
	void GeneratePathToWidgetChecked(TSharedRef<SWidget const ,0> InWidget, FWidgetPath * OutWidgetPath, EVisibility VisibilityFilter) { NativeCall<void, TSharedRef<SWidget const ,0>, FWidgetPath *, EVisibility>(this, "FSlateApplication.GeneratePathToWidgetChecked", InWidget, OutWidgetPath, VisibilityFilter); }
	bool GeneratePathToWidgetUnchecked(TSharedRef<SWidget const ,0> InWidget, FWidgetPath * OutWidgetPath, EVisibility VisibilityFilter) { return NativeCall<bool, TSharedRef<SWidget const ,0>, FWidgetPath *, EVisibility>(this, "FSlateApplication.GeneratePathToWidgetUnchecked", InWidget, OutWidgetPath, VisibilityFilter); }
	TSharedPtr<SWindow,0> * GetActiveModalWindow(TSharedPtr<SWindow,0> * result) { return NativeCall<TSharedPtr<SWindow,0> *, TSharedPtr<SWindow,0> *>(this, "FSlateApplication.GetActiveModalWindow", result); }
	bool GetControllerActive(int ControllerId) { return NativeCall<bool, int>(this, "FSlateApplication.GetControllerActive", ControllerId); }
	TArray<TSharedRef<SWindow,0>> * GetInteractiveTopLevelWindows(TArray<TSharedRef<SWindow,0>> * result) { return NativeCall<TArray<TSharedRef<SWindow,0>> *, TArray<TSharedRef<SWindow,0>> *>(this, "FSlateApplication.GetInteractiveTopLevelWindows", result); }
	float GetLastGamepadRightY(int ControllerId) { return NativeCall<float, int>(this, "FSlateApplication.GetLastGamepadRightY", ControllerId); }
	FModifierKeysState * GetModifierKeys(FModifierKeysState * result) { return NativeCall<FModifierKeysState *, FModifierKeysState *>(this, "FSlateApplication.GetModifierKeys", result); }
	FSlateRect * GetWorkArea(FSlateRect * result, const FSlateRect * InRect) { return NativeCall<FSlateRect *, FSlateRect *, const FSlateRect *>(this, "FSlateApplication.GetWorkArea", result, InRect); }
	bool MouseCaptorHelper() { return NativeCall<bool>(this, "FSlateApplication.MouseCaptorHelper"); }
	bool MouseCaptorHelper(unsigned int PointerIndex) { return NativeCall<bool, unsigned int>(this, "FSlateApplication.MouseCaptorHelper", PointerIndex); }
	void MouseCaptorHelper(unsigned int PointerIndex) { NativeCall<void, unsigned int>(this, "FSlateApplication.MouseCaptorHelper", PointerIndex); }
	void MouseCaptorHelper() { NativeCall<void>(this, "FSlateApplication.MouseCaptorHelper"); }
	bool IsFakingTouchEvents() { return NativeCall<bool>(this, "FSlateApplication.IsFakingTouchEvents"); }
	bool IsRunningAtTargetFrameRate() { return NativeCall<bool>(this, "FSlateApplication.IsRunningAtTargetFrameRate"); }
	bool IsWindowInDestroyQueue(TSharedRef<SWindow,0> Window) { return NativeCall<bool, TSharedRef<SWindow,0>>(this, "FSlateApplication.IsWindowInDestroyQueue", Window); }
	void LockCursor(const TSharedPtr<SWidget,0> * Widget) { NativeCall<void, const TSharedPtr<SWidget,0> *>(this, "FSlateApplication.LockCursor", Widget); }
	void OnShutdown() { NativeCall<void>(this, "FSlateApplication.OnShutdown"); }
	void PlaySound(const FSlateSound * SoundToPlay, int UserIndex) { NativeCall<void, const FSlateSound *, int>(this, "FSlateApplication.PlaySound", SoundToPlay, UserIndex); }
	void PollGameDeviceState() { NativeCall<void>(this, "FSlateApplication.PollGameDeviceState"); }
	void PrivateDestroyWindow(const TSharedRef<SWindow,0> * DestroyedWindow) { NativeCall<void, const TSharedRef<SWindow,0> *>(this, "FSlateApplication.PrivateDestroyWindow", DestroyedWindow); }
	void PrivateDrawWindows(TSharedPtr<SWindow,0> DrawOnlyThisWindow) { NativeCall<void, TSharedPtr<SWindow,0>>(this, "FSlateApplication.PrivateDrawWindows", DrawOnlyThisWindow); }
	void ProcessReply(const FWidgetPath * CurrentEventPath, const FReply TheReply, const FWidgetPath * WidgetsUnderMouse, const FPointerEvent * InMouseEvent, unsigned int UserIndex) { NativeCall<void, const FWidgetPath *, const FReply, const FWidgetPath *, const FPointerEvent *, unsigned int>(this, "FSlateApplication.ProcessReply", CurrentEventPath, TheReply, WidgetsUnderMouse, InMouseEvent, UserIndex); }
	TSharedRef<SWindow,0> * PushMenu(TSharedRef<SWindow,0> * result, const TSharedRef<SWidget,0> * InParentContent, const TSharedRef<SWidget,0> * InContent, const FVector2D * SummonLocation, const FPopupTransitionEffect * TransitionEffect, const bool bFocusImmediately, const bool bShouldAutoSize, const FVector2D * WindowSize, const FVector2D * SummonLocationSize) { return NativeCall<TSharedRef<SWindow,0> *, TSharedRef<SWindow,0> *, const TSharedRef<SWidget,0> *, const TSharedRef<SWidget,0> *, const FVector2D *, const FPopupTransitionEffect *, const bool, const bool, const FVector2D *, const FVector2D *>(this, "FSlateApplication.PushMenu", result, InParentContent, InContent, SummonLocation, TransitionEffect, bFocusImmediately, bShouldAutoSize, WindowSize, SummonLocationSize); }
	void QueryCursor() { NativeCall<void>(this, "FSlateApplication.QueryCursor"); }
	void RegisterGameViewport(TSharedRef<SViewport,0> InViewport) { NativeCall<void, TSharedRef<SViewport,0>>(this, "FSlateApplication.RegisterGameViewport", InViewport); }
	void ReleaseJoystickCapture(unsigned int UserIndex) { NativeCall<void, unsigned int>(this, "FSlateApplication.ReleaseJoystickCapture", UserIndex); }
	void ResetToDefaultInputSettings() { NativeCall<void>(this, "FSlateApplication.ResetToDefaultInputSettings"); }
	void SetControllerActive(int ControllerId, bool bIsActive) { NativeCall<void, int, bool>(this, "FSlateApplication.SetControllerActive", ControllerId, bIsActive); }
	void SetCursorPos(const FVector2D * MouseCoordinate) { NativeCall<void, const FVector2D *>(this, "FSlateApplication.SetCursorPos", MouseCoordinate); }
	void SetFocusToGameViewport() { NativeCall<void>(this, "FSlateApplication.SetFocusToGameViewport"); }
	void SetGameIsFakingTouchEvents(const bool bIsFaking) { NativeCall<void, const bool>(this, "FSlateApplication.SetGameIsFakingTouchEvents", bIsFaking); }
	void SetJoystickCaptorToGameViewport() { NativeCall<void>(this, "FSlateApplication.SetJoystickCaptorToGameViewport"); }
	void SetKeyboardFocus(const TSharedPtr<SWidget,0> * OptionalWidgetToFocus, EKeyboardFocusCause::Type ReasonFocusIsChanging) { NativeCall<void, const TSharedPtr<SWidget,0> *, EKeyboardFocusCause::Type>(this, "FSlateApplication.SetKeyboardFocus", OptionalWidgetToFocus, ReasonFocusIsChanging); }
	void MouseCaptorHelper(unsigned int PointerIndex, const FWidgetPath * EventPath, TSharedPtr<SWidget,0> Widget) { NativeCall<void, unsigned int, const FWidgetPath *, TSharedPtr<SWidget,0>>(this, "FSlateApplication.MouseCaptorHelper", PointerIndex, EventPath, Widget); }
	void ShowVirtualKeyboard(bool bShow, TSharedPtr<IVirtualKeyboardEntry,0> TextEntryWidget) { NativeCall<void, bool, TSharedPtr<IVirtualKeyboardEntry,0>>(this, "FSlateApplication.ShowVirtualKeyboard", bShow, TextEntryWidget); }
	void SpawnToolTip(const TSharedRef<IToolTip,0> * InToolTip, const FVector2D * InSpawnLocation) { NativeCall<void, const TSharedRef<IToolTip,0> *, const FVector2D *>(this, "FSlateApplication.SpawnToolTip", InToolTip, InSpawnLocation); }
	void ThrottleApplicationBasedOnMouseMovement() { NativeCall<void>(this, "FSlateApplication.ThrottleApplicationBasedOnMouseMovement"); }
	void Tick(bool bFromMainThread) { NativeCall<void, bool>(this, "FSlateApplication.Tick", bFromMainThread); }
	void TickWindowAndChildren(TSharedRef<SWindow,0> WindowToTick) { NativeCall<void, TSharedRef<SWindow,0>>(this, "FSlateApplication.TickWindowAndChildren", WindowToTick); }
	FWeakWidgetPath * MouseCaptorHelper(FWeakWidgetPath * result, unsigned int PointerIndex) { return NativeCall<FWeakWidgetPath *, FWeakWidgetPath *, unsigned int>(this, "FSlateApplication.MouseCaptorHelper", result, PointerIndex); }
	FWidgetPath * MouseCaptorHelper(FWidgetPath * result, unsigned int PointerIndex, FWeakWidgetPath::EInterruptedPathHandling::Type InterruptedPathHandling) { return NativeCall<FWidgetPath *, FWidgetPath *, unsigned int, FWeakWidgetPath::EInterruptedPathHandling::Type>(this, "FSlateApplication.MouseCaptorHelper", result, PointerIndex, InterruptedPathHandling); }
	TArray<FWidgetPath> * MouseCaptorHelper(TArray<FWidgetPath> * result) { return NativeCall<TArray<FWidgetPath> *, TArray<FWidgetPath> *>(this, "FSlateApplication.MouseCaptorHelper", result); }
	void UnregisterGameViewport() { NativeCall<void>(this, "FSlateApplication.UnregisterGameViewport"); }
	void UpdateToolTip(bool AllowSpawningOfNewToolTips) { NativeCall<void, bool>(this, "FSlateApplication.UpdateToolTip", AllowSpawningOfNewToolTips); }
	void SetWidgetReflector(const TSharedRef<IWidgetReflector,0> * WidgetReflector) { NativeCall<void, const TSharedRef<IWidgetReflector,0> *>(this, "FSlateApplication.SetWidgetReflector", WidgetReflector); }
};

