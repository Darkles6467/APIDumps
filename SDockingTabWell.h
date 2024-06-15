#pragma once

#include "BaseDeclarations.h"
#include "SPanel.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"
#include "SDockTab.h"
#include "SDockingArea.h"
#include "SDockingTabStack.h"

struct SDockingTabWell : SPanel
{
	char __padding[0x48L];
	TSlotlessChildren<SDockTab>& TabsField() { return *GetNativePointerField<TSlotlessChildren<SDockTab>*>(this, "SDockingTabWell.Tabs"); }
	TWeakPtr<SDockingTabStack,0>& ParentTabStackPtrField() { return *GetNativePointerField<TWeakPtr<SDockingTabStack,0>*>(this, "SDockingTabWell.ParentTabStackPtr"); }
	TSharedPtr<SDockTab,0>& TabBeingDraggedPtrField() { return *GetNativePointerField<TSharedPtr<SDockTab,0>*>(this, "SDockingTabWell.TabBeingDraggedPtr"); }
	float& ChildBeingDraggedOffsetField() { return *GetNativePointerField<float*>(this, "SDockingTabWell.ChildBeingDraggedOffset"); }
	FVector2D& TabGrabOffsetFractionField() { return *GetNativePointerField<FVector2D*>(this, "SDockingTabWell.TabGrabOffsetFraction"); }
	int& ForegroundTabIndexField() { return *GetNativePointerField<int*>(this, "SDockingTabWell.ForegroundTabIndex"); }

	// Functions

	void FArguments() { NativeCall<void>(this, "SDockingTabWell.FArguments"); }
	void FArguments() { NativeCall<void>(this, "SDockingTabWell.FArguments"); }
	void AddTab(const TSharedRef<SDockTab,0> * InTab, int AtIndex) { NativeCall<void, const TSharedRef<SDockTab,0> *, int>(this, "SDockingTabWell.AddTab", InTab, AtIndex); }
	void BringTabToFront(int TabIndexToActivate) { NativeCall<void, int>(this, "SDockingTabWell.BringTabToFront", TabIndexToActivate); }
	void BringTabToFront(TSharedPtr<SDockTab,0> TabToActivate) { NativeCall<void, TSharedPtr<SDockTab,0>>(this, "SDockingTabWell.BringTabToFront", TabToActivate); }
	FVector2D * ComputeChildSize(FVector2D * result, const FGeometry * AllottedGeometry) { return NativeCall<FVector2D *, FVector2D *, const FGeometry *>(this, "SDockingTabWell.ComputeChildSize", result, AllottedGeometry); }
	FVector2D * ComputeDesiredSize(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "SDockingTabWell.ComputeDesiredSize", result); }
	void Construct(const SDockingTabWell::FArguments * InArgs) { NativeCall<void, const SDockingTabWell::FArguments *>(this, "SDockingTabWell.Construct", InArgs); }
	TSharedPtr<SDockingArea,0> * GetDockArea(TSharedPtr<SDockingArea,0> * result) { return NativeCall<TSharedPtr<SDockingArea,0> *, TSharedPtr<SDockingArea,0> *>(this, "SDockingTabWell.GetDockArea", result); }
	TSharedPtr<SDockTab,0> * GetForegroundTab(TSharedPtr<SDockTab,0> * result) { return NativeCall<TSharedPtr<SDockTab,0> *, TSharedPtr<SDockTab,0> *>(this, "SDockingTabWell.GetForegroundTab", result); }
	TSharedPtr<SDockingTabStack,0> * GetParentDockTabStack(TSharedPtr<SDockingTabStack,0> * result) { return NativeCall<TSharedPtr<SDockingTabStack,0> *, TSharedPtr<SDockingTabStack,0> *>(this, "SDockingTabWell.GetParentDockTabStack", result); }
	void OnArrangeChildren(const FGeometry * AllottedGeometry, FArrangedChildren * ArrangedChildren) { NativeCall<void, const FGeometry *, FArrangedChildren *>(this, "SDockingTabWell.OnArrangeChildren", AllottedGeometry, ArrangedChildren); }
	void OnDragEnter(const FGeometry * MyGeometry, const FDragDropEvent * DragDropEvent) { NativeCall<void, const FGeometry *, const FDragDropEvent *>(this, "SDockingTabWell.OnDragEnter", MyGeometry, DragDropEvent); }
	void OnDragLeave(const FDragDropEvent * DragDropEvent) { NativeCall<void, const FDragDropEvent *>(this, "SDockingTabWell.OnDragLeave", DragDropEvent); }
	FReply * OnDragOver(FReply * result, const FGeometry * MyGeometry, const FDragDropEvent * DragDropEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FDragDropEvent *>(this, "SDockingTabWell.OnDragOver", result, MyGeometry, DragDropEvent); }
	FReply * OnDrop(FReply * result, const FGeometry * MyGeometry, const FDragDropEvent * DragDropEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FDragDropEvent *>(this, "SDockingTabWell.OnDrop", result, MyGeometry, DragDropEvent); }
	FReply * OnMouseButtonUp(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SDockingTabWell.OnMouseButtonUp", result, MyGeometry, MouseEvent); }
	FReply * OnMouseMove(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SDockingTabWell.OnMouseMove", result, MyGeometry, MouseEvent); }
	int OnPaint(const FPaintArgs * Args, const FGeometry * AllottedGeometry, const FSlateRect * MyClippingRect, const FSlateRect * MyClippingRectRenderTransform, FSlateWindowElementList * OutDrawElements, int LayerId, const FWidgetStyle * InWidgetStyle, bool bParentEnabled) { return NativeCall<int, const FPaintArgs *, const FGeometry *, const FSlateRect *, const FSlateRect *, FSlateWindowElementList *, int, const FWidgetStyle *, bool>(this, "SDockingTabWell.OnPaint", Args, AllottedGeometry, MyClippingRect, MyClippingRectRenderTransform, OutDrawElements, LayerId, InWidgetStyle, bParentEnabled); }
	void RefreshParentContent() { NativeCall<void>(this, "SDockingTabWell.RefreshParentContent"); }
	void RemoveAndDestroyTab(const TSharedRef<SDockTab,0> * TabToRemove, SDockingNode::ELayoutModification RemovalMethod) { NativeCall<void, const TSharedRef<SDockTab,0> *, SDockingNode::ELayoutModification>(this, "SDockingTabWell.RemoveAndDestroyTab", TabToRemove, RemovalMethod); }
	FReply * StartDraggingTab(FReply * result, TSharedRef<SDockTab,0> TabToStartDragging, FVector2D InTabGrabOffsetFraction, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, TSharedRef<SDockTab,0>, FVector2D, const FPointerEvent *>(this, "SDockingTabWell.StartDraggingTab", result, TabToStartDragging, InTabGrabOffsetFraction, MouseEvent); }
};

