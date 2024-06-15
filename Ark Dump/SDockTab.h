#pragma once

#include "BaseDeclarations.h"
#include "SBorder.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"
#include "SDockingArea.h"
#include "SDockingTabWell.h"
#include "SWindow.h"

struct SDockTab : SBorder
{
	char __padding[0x190L];
	FTabId& LayoutIdentifierField() { return *GetNativePointerField<FTabId*>(this, "SDockTab.LayoutIdentifier"); }
	ETabRole::Type& TabRoleField() { return *GetNativePointerField<ETabRole::Type*>(this, "SDockTab.TabRole"); }
	TWeakPtr<SDockingTabWell,0>& ParentPtrField() { return *GetNativePointerField<TWeakPtr<SDockingTabWell,0>*>(this, "SDockTab.ParentPtr"); }
	TAttribute<FText>& TabLabelField() { return *GetNativePointerField<TAttribute<FText>*>(this, "SDockTab.TabLabel"); }
	const FDockTabStyle * MajorTabStyleField() { return GetNativePointerField<const FDockTabStyle *>(this, "SDockTab.MajorTabStyle"); }
	const FDockTabStyle * GenericTabStyleField() { return GetNativePointerField<const FDockTabStyle *>(this, "SDockTab.GenericTabStyle"); }
	TAttribute<FMargin>& ContentAreaPaddingField() { return *GetNativePointerField<TAttribute<FMargin>*>(this, "SDockTab.ContentAreaPadding"); }
	bool& bShouldAutosizeField() { return *GetNativePointerField<bool*>(this, "SDockTab.bShouldAutosize"); }
	FLinearColor& TabColorScaleField() { return *GetNativePointerField<FLinearColor*>(this, "SDockTab.TabColorScale"); }
	FCurveSequence& SpawnAnimCurveField() { return *GetNativePointerField<FCurveSequence*>(this, "SDockTab.SpawnAnimCurve"); }
	FCurveSequence& FlashTabCurveField() { return *GetNativePointerField<FCurveSequence*>(this, "SDockTab.FlashTabCurve"); }
	TSharedPtr<SDockingArea,0>& DraggedOverDockingAreaField() { return *GetNativePointerField<TSharedPtr<SDockingArea,0>*>(this, "SDockTab.DraggedOverDockingArea"); }
	TSharedPtr<STextBlock,0>& LabelWidgetField() { return *GetNativePointerField<TSharedPtr<STextBlock,0>*>(this, "SDockTab.LabelWidget"); }
	float& DragTimerField() { return *GetNativePointerField<float*>(this, "SDockTab.DragTimer"); }

	// Functions

	void FArguments() { NativeCall<void>(this, "SDockTab.FArguments"); }
	void FArguments() { NativeCall<void>(this, "SDockTab.FArguments"); }
	SDockTab::FArguments * FArguments(const TSharedRef<SWidget,0> InChild) { return NativeCall<SDockTab::FArguments *, const TSharedRef<SWidget,0>>(this, "SDockTab.FArguments", InChild); }
	void ActivateInParent(ETabActivationCause::Type InActivationCause) { NativeCall<void, ETabActivationCause::Type>(this, "SDockTab.ActivateInParent", InActivationCause); }
	bool CanCloseTab() { return NativeCall<bool>(this, "SDockTab.CanCloseTab"); }
	void Construct(const SDockTab::FArguments * InArgs) { NativeCall<void, const SDockTab::FArguments *>(this, "SDockTab.Construct", InArgs); }
	FVector2D * GetAnimatedScale(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "SDockTab.GetAnimatedScale", result); }
	FMargin * GetContentPadding(FMargin * result) { return NativeCall<FMargin *, FMargin *>(this, "SDockTab.GetContentPadding", result); }
	TSharedPtr<SDockingArea,0> * GetDockArea(TSharedPtr<SDockingArea,0> * result) { return NativeCall<TSharedPtr<SDockingArea,0> *, TSharedPtr<SDockingArea,0> *>(this, "SDockTab.GetDockArea", result); }
	FSlateColor * GetFlashColor(FSlateColor * result) { return NativeCall<FSlateColor *, FSlateColor *>(this, "SDockTab.GetFlashColor", result); }
	float GetFlashValue() { return NativeCall<float>(this, "SDockTab.GetFlashValue"); }
	float GetOverlapWidth() { return NativeCall<float>(this, "SDockTab.GetOverlapWidth"); }
	TSharedPtr<SDockingTabWell,0> * GetParent(TSharedPtr<SDockingTabWell,0> * result) { return NativeCall<TSharedPtr<SDockingTabWell,0> *, TSharedPtr<SDockingTabWell,0> *>(this, "SDockTab.GetParent", result); }
	TSharedPtr<SWindow,0> * GetParentWindow(TSharedPtr<SWindow,0> * result) { return NativeCall<TSharedPtr<SWindow,0> *, TSharedPtr<SWindow,0> *>(this, "SDockTab.GetParentWindow", result); }
	FSlateColor * GetTabColor(FSlateColor * result) { return NativeCall<FSlateColor *, FSlateColor *>(this, "SDockTab.GetTabColor", result); }
	FText * GetTabLabel(FText * result) { return NativeCall<FText *, FText *>(this, "SDockTab.GetTabLabel", result); }
	FMargin * GetTabPadding(FMargin * result) { return NativeCall<FMargin *, FMargin *>(this, "SDockTab.GetTabPadding", result); }
	ETabRole::Type GetTabRole() { return NativeCall<ETabRole::Type>(this, "SDockTab.GetTabRole"); }
	EVisibility * HandleIsCloseButtonVisible(EVisibility * result) { return NativeCall<EVisibility *, EVisibility *>(this, "SDockTab.HandleIsCloseButtonVisible", result); }
	bool IsActive() { return NativeCall<bool>(this, "SDockTab.IsActive"); }
	bool IsForeground() { return NativeCall<bool>(this, "SDockTab.IsForeground"); }
	bool IsNomadTabWithMajorTabStyle() { return NativeCall<bool>(this, "SDockTab.IsNomadTabWithMajorTabStyle"); }
	FReply * OnCloseButtonClicked(FReply * result) { return NativeCall<FReply *, FReply *>(this, "SDockTab.OnCloseButtonClicked", result); }
	FReply * OnDragDetected(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SDockTab.OnDragDetected", result, MyGeometry, MouseEvent); }
	void OnDragEnter(const FGeometry * MyGeometry, const FDragDropEvent * DragDropEvent) { NativeCall<void, const FGeometry *, const FDragDropEvent *>(this, "SDockTab.OnDragEnter", MyGeometry, DragDropEvent); }
	void OnDragLeave(const FDragDropEvent * DragDropEvent) { NativeCall<void, const FDragDropEvent *>(this, "SDockTab.OnDragLeave", DragDropEvent); }
	FReply * OnDrop(FReply * result, const FGeometry * MyGeometry, const FDragDropEvent * DragDropEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FDragDropEvent *>(this, "SDockTab.OnDrop", result, MyGeometry, DragDropEvent); }
	FReply * OnMouseButtonDoubleClick(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SDockTab.OnMouseButtonDoubleClick", result, MyGeometry, MouseEvent); }
	FReply * OnMouseButtonDown(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SDockTab.OnMouseButtonDown", result, MyGeometry, MouseEvent); }
	FReply * OnMouseButtonUp(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SDockTab.OnMouseButtonUp", result, MyGeometry, MouseEvent); }
	FReply * OnTouchEnded(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * InTouchEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SDockTab.OnTouchEnded", result, MyGeometry, InTouchEvent); }
	FReply * OnTouchStarted(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * InTouchEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SDockTab.OnTouchStarted", result, MyGeometry, InTouchEvent); }
	void PersistVisualState() { NativeCall<void>(this, "SDockTab.PersistVisualState"); }
	void RemoveTabFromParent() { NativeCall<void>(this, "SDockTab.RemoveTabFromParent"); }
	bool RequestCloseTab() { return NativeCall<bool>(this, "SDockTab.RequestCloseTab"); }
	void SetDraggedOverDockArea(const TSharedPtr<SDockingArea,0> * Area) { NativeCall<void, const TSharedPtr<SDockingArea,0> *>(this, "SDockTab.SetDraggedOverDockArea", Area); }
	void SetParent(TSharedPtr<SDockingTabWell,0> Parent) { NativeCall<void, TSharedPtr<SDockingTabWell,0>>(this, "SDockTab.SetParent", Parent); }
	void SetTabManager(const TSharedPtr<FTabManager,0> * InTabManager) { NativeCall<void, const TSharedPtr<FTabManager,0> *>(this, "SDockTab.SetTabManager", InTabManager); }
	bool ShouldAutosize() { return NativeCall<bool>(this, "SDockTab.ShouldAutosize"); }
	void Tick(const FGeometry * AllottedGeometry, const long double InCurrentTime, const float InDeltaTime) { NativeCall<void, const FGeometry *, const long double, const float>(this, "SDockTab.Tick", AllottedGeometry, InCurrentTime, InDeltaTime); }
};

