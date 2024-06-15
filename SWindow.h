#pragma once

#include "BaseDeclarations.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"
#include "SWindow.h"
#include "FWindowsWindow.h"
#include "IWindowTitleBar.h"

struct SWindow : SCompoundWidget
{
	char __padding[0x1e8L];
	EWindowZone::Type& MoveResizeZoneField() { return *GetNativePointerField<EWindowZone::Type*>(this, "SWindow.MoveResizeZone"); }
	FVector2D& MoveResizeStartField() { return *GetNativePointerField<FVector2D*>(this, "SWindow.MoveResizeStart"); }
	FSlateRect& MoveResizeRectField() { return *GetNativePointerField<FSlateRect*>(this, "SWindow.MoveResizeRect"); }
	TAttribute<FText>& TitleField() { return *GetNativePointerField<TAttribute<FText>*>(this, "SWindow.Title"); }
	bool& bDragAnywhereField() { return *GetNativePointerField<bool*>(this, "SWindow.bDragAnywhere"); }
	float& OpacityField() { return *GetNativePointerField<float*>(this, "SWindow.Opacity"); }
	ESizingRule::Type& SizingRuleField() { return *GetNativePointerField<ESizingRule::Type*>(this, "SWindow.SizingRule"); }
	EAutoCenter::Type& AutoCenterRuleField() { return *GetNativePointerField<EAutoCenter::Type*>(this, "SWindow.AutoCenterRule"); }
	FVector2D& InitialDesiredScreenPositionField() { return *GetNativePointerField<FVector2D*>(this, "SWindow.InitialDesiredScreenPosition"); }
	FVector2D& InitialDesiredSizeField() { return *GetNativePointerField<FVector2D*>(this, "SWindow.InitialDesiredSize"); }
	FVector2D& ScreenPositionField() { return *GetNativePointerField<FVector2D*>(this, "SWindow.ScreenPosition"); }
	FVector2D& PreFullscreenPositionField() { return *GetNativePointerField<FVector2D*>(this, "SWindow.PreFullscreenPosition"); }
	FVector2D& SizeField() { return *GetNativePointerField<FVector2D*>(this, "SWindow.Size"); }
	FVector2D& ViewportSizeField() { return *GetNativePointerField<FVector2D*>(this, "SWindow.ViewportSize"); }
	float& TitleBarSizeField() { return *GetNativePointerField<float*>(this, "SWindow.TitleBarSize"); }
	SWindow::FMorpher& MorpherField() { return *GetNativePointerField<SWindow::FMorpher*>(this, "SWindow.Morpher"); }
	EWindowZone::Type& WindowZoneField() { return *GetNativePointerField<EWindowZone::Type*>(this, "SWindow.WindowZone"); }
	SVerticalBox::FSlot * ContentSlotField() { return GetNativePointerField<SVerticalBox::FSlot *>(this, "SWindow.ContentSlot"); }
	const FWindowStyle * StyleField() { return GetNativePointerField<const FWindowStyle *>(this, "SWindow.Style"); }
	TSharedPtr<SOverlay,0>& WindowOverlayField() { return *GetNativePointerField<TSharedPtr<SOverlay,0>*>(this, "SWindow.WindowOverlay"); }
	TSharedPtr<SPopupLayer,0>& PopupLayerField() { return *GetNativePointerField<TSharedPtr<SPopupLayer,0>*>(this, "SWindow.PopupLayer"); }
	TWeakPtr<SWindow,0>& ParentWindowPtrField() { return *GetNativePointerField<TWeakPtr<SWindow,0>*>(this, "SWindow.ParentWindowPtr"); }
	TArray<TSharedRef<SWindow,0>>& ChildWindowsField() { return *GetNativePointerField<TArray<TSharedRef<SWindow,0>>*>(this, "SWindow.ChildWindows"); }
	bool& bShouldShowWindowContentDuringOverlayField() { return *GetNativePointerField<bool*>(this, "SWindow.bShouldShowWindowContentDuringOverlay"); }
	int& ExpectedMaxWidthField() { return *GetNativePointerField<int*>(this, "SWindow.ExpectedMaxWidth"); }
	int& ExpectedMaxHeightField() { return *GetNativePointerField<int*>(this, "SWindow.ExpectedMaxHeight"); }
	TSharedPtr<IWindowTitleBar,0>& TitleBarField() { return *GetNativePointerField<TSharedPtr<IWindowTitleBar,0>*>(this, "SWindow.TitleBar"); }

	// Functions

	void FArguments() { NativeCall<void>(this, "SWindow.FArguments"); }
	void FArguments() { NativeCall<void>(this, "SWindow.FArguments"); }
	bool AcceptsInput() { return NativeCall<bool>(this, "SWindow.AcceptsInput"); }
	bool ActivateWhenFirstShown() { return NativeCall<bool>(this, "SWindow.ActivateWhenFirstShown"); }
	void AddChildWindow(const TSharedRef<SWindow,0> * ChildWindow) { NativeCall<void, const TSharedRef<SWindow,0> *>(this, "SWindow.AddChildWindow", ChildWindow); }
	FVector2D * ComputeDesiredSize(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "SWindow.ComputeDesiredSize", result); }
	static FVector2D * ComputeWindowSizeForContent(FVector2D * result, FVector2D ContentSize) { return NativeCall<FVector2D *, FVector2D *, FVector2D>(nullptr, "SWindow.ComputeWindowSizeForContent", result, ContentSize); }
	void Construct(const SWindow::FArguments * InArgs) { NativeCall<void, const SWindow::FArguments *>(this, "SWindow.Construct", InArgs); }
	void ConstructWindowInternals(const bool bCreateTitleBar) { NativeCall<void, const bool>(this, "SWindow.ConstructWindowInternals", bCreateTitleBar); }
	void DestroyWindowImmediately() { NativeCall<void>(this, "SWindow.DestroyWindowImmediately"); }
	void EnableWindow(bool bEnable) { NativeCall<void, bool>(this, "SWindow.EnableWindow", bEnable); }
	TArray<TSharedRef<SWindow,0>> * GetChildWindows() { return NativeCall<TArray<TSharedRef<SWindow,0>> *>(this, "SWindow.GetChildWindows"); }
	FSlateRect * GetClientRectInScreen(FSlateRect * result) { return NativeCall<FSlateRect *, FSlateRect *>(this, "SWindow.GetClientRectInScreen", result); }
	FSlateRect * GetClippingRectangleInWindow(FSlateRect * result) { return NativeCall<FSlateRect *, FSlateRect *>(this, "SWindow.GetClippingRectangleInWindow", result); }
	int GetCornerRadius() { return NativeCall<int>(this, "SWindow.GetCornerRadius"); }
	FVector2D * GetInitialDesiredPositionInScreen(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "SWindow.GetInitialDesiredPositionInScreen", result); }
	FVector2D * GetInitialDesiredSizeInScreen(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "SWindow.GetInitialDesiredSizeInScreen", result); }
	FSlateRect * GetMorphTargetShape(FSlateRect * result) { return NativeCall<FSlateRect *, FSlateRect *>(this, "SWindow.GetMorphTargetShape", result); }
	FSlateRect * GetNonMaximizedRectInScreen(FSlateRect * result) { return NativeCall<FSlateRect *, FSlateRect *>(this, "SWindow.GetNonMaximizedRectInScreen", result); }
	float GetOpacity() { return NativeCall<float>(this, "SWindow.GetOpacity"); }
	TSharedPtr<SWindow,0> * GetParentWindow(TSharedPtr<SWindow,0> * result) { return NativeCall<TSharedPtr<SWindow,0> *, TSharedPtr<SWindow,0> *>(this, "SWindow.GetParentWindow", result); }
	FVector2D * GetPositionInScreen(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "SWindow.GetPositionInScreen", result); }
	FSlateRect * GetRectInScreen(FSlateRect * result) { return NativeCall<FSlateRect *, FSlateRect *>(this, "SWindow.GetRectInScreen", result); }
	FVector2D * GetSizeInScreen(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "SWindow.GetSizeInScreen", result); }
	FText * GetTitle(FText * result) { return NativeCall<FText *, FText *>(this, "SWindow.GetTitle", result); }
	FMargin * GetWindowBorderSize(FMargin * result) { return NativeCall<FMargin *, FMargin *>(this, "SWindow.GetWindowBorderSize", result); }
	EVisibility * GetWindowContentVisibility(EVisibility * result) { return NativeCall<EVisibility *, EVisibility *>(this, "SWindow.GetWindowContentVisibility", result); }
	FGeometry * GetWindowGeometryInScreen(FGeometry * result) { return NativeCall<FGeometry *, FGeometry *>(this, "SWindow.GetWindowGeometryInScreen", result); }
	FGeometry * GetWindowGeometryInWindow(FGeometry * result) { return NativeCall<FGeometry *, FGeometry *>(this, "SWindow.GetWindowGeometryInWindow", result); }
	FSlateColor * GetWindowOutlineColor(FSlateColor * result) { return NativeCall<FSlateColor *, FSlateColor *>(this, "SWindow.GetWindowOutlineColor", result); }
	EVisibility * GetWindowVisibility(EVisibility * result) { return NativeCall<EVisibility *, EVisibility *>(this, "SWindow.GetWindowVisibility", result); }
	bool HasMaximizeBox() { return NativeCall<bool>(this, "SWindow.HasMaximizeBox"); }
	bool HasMinimizeBox() { return NativeCall<bool>(this, "SWindow.HasMinimizeBox"); }
	bool HasSizingFrame() { return NativeCall<bool>(this, "SWindow.HasSizingFrame"); }
	void HideWindow() { NativeCall<void>(this, "SWindow.HideWindow"); }
	bool IsAutosized() { return NativeCall<bool>(this, "SWindow.IsAutosized"); }
	bool IsDescendantOf(const TSharedPtr<SWindow,0> * ParentWindow) { return NativeCall<bool, const TSharedPtr<SWindow,0> *>(this, "SWindow.IsDescendantOf", ParentWindow); }
	bool IsMorphing() { return NativeCall<bool>(this, "SWindow.IsMorphing"); }
	bool IsMorphingSize() { return NativeCall<bool>(this, "SWindow.IsMorphingSize"); }
	bool IsRegularWindow() { return NativeCall<bool>(this, "SWindow.IsRegularWindow"); }
	bool IsTopmostWindow() { return NativeCall<bool>(this, "SWindow.IsTopmostWindow"); }
	bool IsVisible() { return NativeCall<bool>(this, "SWindow.IsVisible"); }
	bool IsWindowMaximized() { return NativeCall<bool>(this, "SWindow.IsWindowMaximized"); }
	bool IsWindowMinimized() { return NativeCall<bool>(this, "SWindow.IsWindowMinimized"); }
	static TSharedRef<SWindow,0> * MakeCursorDecorator(TSharedRef<SWindow,0> * result) { return NativeCall<TSharedRef<SWindow,0> *, TSharedRef<SWindow,0> *>(nullptr, "SWindow.MakeCursorDecorator", result); }
	static TSharedRef<SWindow,0> * MakeToolTipWindow(TSharedRef<SWindow,0> * result) { return NativeCall<TSharedRef<SWindow,0> *, TSharedRef<SWindow,0> *>(nullptr, "SWindow.MakeToolTipWindow", result); }
	void MorphToPosition(const FCurveSequence * Sequence, const float TargetOpacity, const FVector2D * TargetPosition) { NativeCall<void, const FCurveSequence *, const float, const FVector2D *>(this, "SWindow.MorphToPosition", Sequence, TargetOpacity, TargetPosition); }
	void MorphToShape(const FCurveSequence * Sequence, const float TargetOpacity, const FSlateRect * TargetShape) { NativeCall<void, const FCurveSequence *, const float, const FSlateRect *>(this, "SWindow.MorphToShape", Sequence, TargetOpacity, TargetShape); }
	void MoveWindowTo(FVector2D NewPosition) { NativeCall<void, FVector2D>(this, "SWindow.MoveWindowTo", NewPosition); }
	void NotifyWindowBeingDestroyed() { NativeCall<void>(this, "SWindow.NotifyWindowBeingDestroyed"); }
	FReply * OnControllerButtonPressed(FReply * result, const FGeometry * MyGeometry, const FControllerEvent * ControllerEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FControllerEvent *>(this, "SWindow.OnControllerButtonPressed", result, MyGeometry, ControllerEvent); }
	FReply * OnControllerButtonReleased(FReply * result, const FGeometry * MyGeometry, const FControllerEvent * ControllerEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FControllerEvent *>(this, "SWindow.OnControllerButtonReleased", result, MyGeometry, ControllerEvent); }
	FCursorReply * OnCursorQuery(FCursorReply * result, const FGeometry * MyGeometry, const FPointerEvent * CursorEvent) { return NativeCall<FCursorReply *, FCursorReply *, const FGeometry *, const FPointerEvent *>(this, "SWindow.OnCursorQuery", result, MyGeometry, CursorEvent); }
	bool OnIsActiveChanged(const FWindowActivateEvent * ActivateEvent) { return NativeCall<bool, const FWindowActivateEvent *>(this, "SWindow.OnIsActiveChanged", ActivateEvent); }
	FReply * OnKeyboardFocusReceived(FReply * result, const FGeometry * MyGeometry, const FKeyboardFocusEvent * InKeyboardFocusEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FKeyboardFocusEvent *>(this, "SWindow.OnKeyboardFocusReceived", result, MyGeometry, InKeyboardFocusEvent); }
	FReply * OnMouseButtonDown(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SWindow.OnMouseButtonDown", result, MyGeometry, MouseEvent); }
	FReply * OnMouseButtonUp(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SWindow.OnMouseButtonUp", result, MyGeometry, MouseEvent); }
	FReply * OnMouseMove(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SWindow.OnMouseMove", result, MyGeometry, MouseEvent); }
	int PaintWindow(const FPaintArgs * Args, const FGeometry * AllottedGeometry, const FSlateRect * MyClippingRect, FSlateWindowElementList * OutDrawElements, int LayerId, const FWidgetStyle * InWidgetStyle, bool bParentEnabled) { return NativeCall<int, const FPaintArgs *, const FGeometry *, const FSlateRect *, FSlateWindowElementList *, int, const FWidgetStyle *, bool>(this, "SWindow.PaintWindow", Args, AllottedGeometry, MyClippingRect, OutDrawElements, LayerId, InWidgetStyle, bParentEnabled); }
	bool RemoveDescendantWindow(const TSharedRef<SWindow,0> * DescendantToRemove) { return NativeCall<bool, const TSharedRef<SWindow,0> *>(this, "SWindow.RemoveDescendantWindow", DescendantToRemove); }
	void RequestDestroyWindow() { NativeCall<void>(this, "SWindow.RequestDestroyWindow"); }
	void ReshapeWindow(const FSlateRect * InNewShape) { NativeCall<void, const FSlateRect *>(this, "SWindow.ReshapeWindow", InNewShape); }
	void ReshapeWindow(FVector2D NewPosition, FVector2D NewSize) { NativeCall<void, FVector2D, FVector2D>(this, "SWindow.ReshapeWindow", NewPosition, NewSize); }
	void Resize(FVector2D NewSize) { NativeCall<void, FVector2D>(this, "SWindow.Resize", NewSize); }
	void SetCachedScreenPosition(FVector2D NewPosition) { NativeCall<void, FVector2D>(this, "SWindow.SetCachedScreenPosition", NewPosition); }
	void SetCachedSize(FVector2D NewSize) { NativeCall<void, FVector2D>(this, "SWindow.SetCachedSize", NewSize); }
	void SetContent(TSharedRef<SWidget,0> InContent) { NativeCall<void, TSharedRef<SWidget,0>>(this, "SWindow.SetContent", InContent); }
	void SetNativeWindow(TSharedRef<FGenericWindow,0> InNativeWindow) { NativeCall<void, TSharedRef<FGenericWindow,0>>(this, "SWindow.SetNativeWindow", InNativeWindow); }
	void SetOpacity(const float InOpacity) { NativeCall<void, const float>(this, "SWindow.SetOpacity", InOpacity); }
	void SetSizingRule(ESizingRule::Type InSizingRule) { NativeCall<void, ESizingRule::Type>(this, "SWindow.SetSizingRule", InSizingRule); }
	void SetWindowMode(EWindowMode::Type NewWindowMode) { NativeCall<void, EWindowMode::Type>(this, "SWindow.SetWindowMode", NewWindowMode); }
	void ShowWindow() { NativeCall<void>(this, "SWindow.ShowWindow"); }
	void StartMorph() { NativeCall<void>(this, "SWindow.StartMorph"); }
	bool SupportsKeyboardFocus() { return NativeCall<bool>(this, "SWindow.SupportsKeyboardFocus"); }
	bool SupportsTransparency() { return NativeCall<bool>(this, "SWindow.SupportsTransparency"); }
	int SwitchWorlds(int WorldId) { return NativeCall<int, int>(this, "SWindow.SwitchWorlds", WorldId); }
	void Tick(const FGeometry * AllottedGeometry, const long double InCurrentTime, const float InDeltaTime) { NativeCall<void, const FGeometry *, const long double, const float>(this, "SWindow.Tick", AllottedGeometry, InCurrentTime, InDeltaTime); }
	FString * ToString(FString * result) { return NativeCall<FString *, FString *>(this, "SWindow.ToString", result); }
	void UpdateMorphTargetShape(const FSlateRect * TargetShape) { NativeCall<void, const FSlateRect *>(this, "SWindow.UpdateMorphTargetShape", TargetShape); }
	SWindow::FArguments * FArguments(const TSharedRef<SWidget,0> InChild) { return NativeCall<SWindow::FArguments *, const TSharedRef<SWidget,0>>(this, "SWindow.FArguments", InChild); }
	void SetTitle(const FText * InTitle) { NativeCall<void, const FText *>(this, "SWindow.SetTitle", InTitle); }
	void SetTitleBar(const TSharedPtr<IWindowTitleBar,0> InTitleBar) { NativeCall<void, const TSharedPtr<IWindowTitleBar,0>>(this, "SWindow.SetTitleBar", InTitleBar); }
	void SetWidgetToFocusOnActivate(TSharedPtr<SWidget,0> InWidget) { NativeCall<void, TSharedPtr<SWidget,0>>(this, "SWindow.SetWidgetToFocusOnActivate", InWidget); }
};

