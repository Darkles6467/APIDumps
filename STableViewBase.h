#pragma once

#include "BaseDeclarations.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"
#include "ITableRow.h"
#include "SHeaderRow.h"
#include "SScrollBar.h"

struct STableViewBase : SCompoundWidget
{
	char __padding[0x108L];
	const ETableViewMode::Type& TableViewModeField() { return *GetNativePointerField<const ETableViewMode::Type*>(this, "STableViewBase.TableViewMode"); }
	TSharedPtr<SListPanel,0>& ItemsPanelField() { return *GetNativePointerField<TSharedPtr<SListPanel,0>*>(this, "STableViewBase.ItemsPanel"); }
	TSharedPtr<SScrollBar,0>& ScrollBarField() { return *GetNativePointerField<TSharedPtr<SScrollBar,0>*>(this, "STableViewBase.ScrollBar"); }
	long double& ScrollOffsetField() { return *GetNativePointerField<long double*>(this, "STableViewBase.ScrollOffset"); }
	bool& bStartedTouchInteractionField() { return *GetNativePointerField<bool*>(this, "STableViewBase.bStartedTouchInteraction"); }
	float& AmountScrolledWhileRightMouseDownField() { return *GetNativePointerField<float*>(this, "STableViewBase.AmountScrolledWhileRightMouseDown"); }
	float& TickScrollDeltaField() { return *GetNativePointerField<float*>(this, "STableViewBase.TickScrollDelta"); }
	STableViewBase::FReGenerateResults& LastGenerateResultsField() { return *GetNativePointerField<STableViewBase::FReGenerateResults*>(this, "STableViewBase.LastGenerateResults"); }
	bool& bWasAtEndOfListField() { return *GetNativePointerField<bool*>(this, "STableViewBase.bWasAtEndOfList"); }
	FGeometry& PanelGeometryLastTickField() { return *GetNativePointerField<FGeometry*>(this, "STableViewBase.PanelGeometryLastTick"); }
	TAttribute<enum ESelectionMode::Type>& SelectionModeField() { return *GetNativePointerField<TAttribute<enum ESelectionMode::Type>*>(this, "STableViewBase.SelectionMode"); }
	TSharedPtr<SHeaderRow,0>& HeaderRowField() { return *GetNativePointerField<TSharedPtr<SHeaderRow,0>*>(this, "STableViewBase.HeaderRow"); }
	FInertialScrollManager& InertialScrollManagerField() { return *GetNativePointerField<FInertialScrollManager*>(this, "STableViewBase.InertialScrollManager"); }
	FVector2D& SoftwareCursorPositionField() { return *GetNativePointerField<FVector2D*>(this, "STableViewBase.SoftwareCursorPosition"); }
	bool& bShowSoftwareCursorField() { return *GetNativePointerField<bool*>(this, "STableViewBase.bShowSoftwareCursor"); }
	STableViewBase::FOverscroll& OverscrollField() { return *GetNativePointerField<STableViewBase::FOverscroll*>(this, "STableViewBase.Overscroll"); }
	bool& bItemsNeedRefreshField() { return *GetNativePointerField<bool*>(this, "STableViewBase.bItemsNeedRefresh"); }

	// Functions

	void AppendWidget(const TSharedRef<ITableRow,0> * WidgetToAppend) { NativeCall<void, const TSharedRef<ITableRow,0> *>(this, "STableViewBase.AppendWidget", WidgetToAppend); }
	void ClearWidgets() { NativeCall<void>(this, "STableViewBase.ClearWidgets"); }
	void ConstructChildren(const TAttribute<float> * InItemWidth, const TAttribute<float> * InItemHeight, const TSharedPtr<SHeaderRow,0> * InHeaderRow, const TSharedPtr<SScrollBar,0> * InScrollBar) { NativeCall<void, const TAttribute<float> *, const TAttribute<float> *, const TSharedPtr<SHeaderRow,0> *, const TSharedPtr<SScrollBar,0> *>(this, "STableViewBase.ConstructChildren", InItemWidth, InItemHeight, InHeaderRow, InScrollBar); }
	float GetItemHeight() { return NativeCall<float>(this, "STableViewBase.GetItemHeight"); }
	float GetItemWidth() { return NativeCall<float>(this, "STableViewBase.GetItemWidth"); }
	float GetNumLiveWidgets() { return NativeCall<float>(this, "STableViewBase.GetNumLiveWidgets"); }
	FVector2D * GetScrollDistance(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "STableViewBase.GetScrollDistance", result); }
	FVector2D * GetScrollDistanceRemaining(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "STableViewBase.GetScrollDistanceRemaining", result); }
	void InsertWidget(const TSharedRef<ITableRow,0> * WidgetToInset) { NativeCall<void, const TSharedRef<ITableRow,0> *>(this, "STableViewBase.InsertWidget", WidgetToInset); }
	bool IsPendingRefresh() { return NativeCall<bool>(this, "STableViewBase.IsPendingRefresh"); }
	bool IsRightClickScrolling() { return NativeCall<bool>(this, "STableViewBase.IsRightClickScrolling"); }
	FCursorReply * OnCursorQuery(FCursorReply * result, const FGeometry * MyGeometry, const FPointerEvent * CursorEvent) { return NativeCall<FCursorReply *, FCursorReply *, const FGeometry *, const FPointerEvent *>(this, "STableViewBase.OnCursorQuery", result, MyGeometry, CursorEvent); }
	FReply * OnKeyDown(FReply * result, const FGeometry * MyGeometry, const FKeyboardEvent * InKeyboardEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FKeyboardEvent *>(this, "STableViewBase.OnKeyDown", result, MyGeometry, InKeyboardEvent); }
	FReply * OnMouseButtonDoubleClick(FReply * result, const FGeometry * InMyGeometry, const FPointerEvent * InMouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "STableViewBase.OnMouseButtonDoubleClick", result, InMyGeometry, InMouseEvent); }
	FReply * OnMouseButtonDown(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "STableViewBase.OnMouseButtonDown", result, MyGeometry, MouseEvent); }
	FReply * OnMouseButtonUp(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "STableViewBase.OnMouseButtonUp", result, MyGeometry, MouseEvent); }
	void OnMouseCaptureLost() { NativeCall<void>(this, "STableViewBase.OnMouseCaptureLost"); }
	void OnMouseLeave(const FPointerEvent * MouseEvent) { NativeCall<void, const FPointerEvent *>(this, "STableViewBase.OnMouseLeave", MouseEvent); }
	FReply * OnMouseMove(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "STableViewBase.OnMouseMove", result, MyGeometry, MouseEvent); }
	FReply * OnMouseWheel(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "STableViewBase.OnMouseWheel", result, MyGeometry, MouseEvent); }
	int OnPaint(const FPaintArgs * Args, const FGeometry * AllottedGeometry, const FSlateRect * MyClippingRect, const FSlateRect * MyClippingRectRenderTransform, FSlateWindowElementList * OutDrawElements, int LayerId, const FWidgetStyle * InWidgetStyle, bool bParentEnabled) { return NativeCall<int, const FPaintArgs *, const FGeometry *, const FSlateRect *, const FSlateRect *, FSlateWindowElementList *, int, const FWidgetStyle *, bool>(this, "STableViewBase.OnPaint", Args, AllottedGeometry, MyClippingRect, MyClippingRectRenderTransform, OutDrawElements, LayerId, InWidgetStyle, bParentEnabled); }
	FReply * OnPreviewMouseButtonDown(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "STableViewBase.OnPreviewMouseButtonDown", result, MyGeometry, MouseEvent); }
	void OnRightMouseButtonUp(const FVector2D * SummonLocation) { NativeCall<void, const FVector2D *>(this, "STableViewBase.OnRightMouseButtonUp", SummonLocation); }
	FReply * OnTouchEnded(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * InTouchEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "STableViewBase.OnTouchEnded", result, MyGeometry, InTouchEvent); }
	FReply * OnTouchMoved(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * InTouchEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "STableViewBase.OnTouchMoved", result, MyGeometry, InTouchEvent); }
	void RequestListRefresh() { NativeCall<void>(this, "STableViewBase.RequestListRefresh"); }
	void ScrollBar_OnUserScrolled(float InScrollOffsetFraction) { NativeCall<void, float>(this, "STableViewBase.ScrollBar_OnUserScrolled", InScrollOffsetFraction); }
	float FOverscroll(float Delta) { return NativeCall<float, float>(this, "STableViewBase.FOverscroll", Delta); }
	float ScrollBy(const FGeometry * MyGeometry, float ScrollByAmountInSlateUnits, EAllowOverscroll AllowOverscroll) { return NativeCall<float, const FGeometry *, float, EAllowOverscroll>(this, "STableViewBase.ScrollBy", MyGeometry, ScrollByAmountInSlateUnits, AllowOverscroll); }
	float ScrollTo(float InScrollOffset) { return NativeCall<float, float>(this, "STableViewBase.ScrollTo", InScrollOffset); }
	void SetItemHeight(TAttribute<float> Height) { NativeCall<void, TAttribute<float>>(this, "STableViewBase.SetItemHeight", Height); }
	void SetItemWidth(TAttribute<float> Width) { NativeCall<void, TAttribute<float>>(this, "STableViewBase.SetItemWidth", Width); }
	bool FOverscroll(const bool bIsAtStartOfList, const bool bIsAtEndOfList, const float ScrollDelta) { return NativeCall<bool, const bool, const bool, const float>(this, "STableViewBase.FOverscroll", bIsAtStartOfList, bIsAtEndOfList, ScrollDelta); }
	void Tick(const FGeometry * AllottedGeometry, const long double InCurrentTime, const float InDeltaTime) { NativeCall<void, const FGeometry *, const long double, const float>(this, "STableViewBase.Tick", AllottedGeometry, InCurrentTime, InDeltaTime); }
	void TickInertialScroll(const FGeometry * AllottedGeometry, const long double InCurrentTime, const float InDeltaTime) { NativeCall<void, const FGeometry *, const long double, const float>(this, "STableViewBase.TickInertialScroll", AllottedGeometry, InCurrentTime, InDeltaTime); }
};

