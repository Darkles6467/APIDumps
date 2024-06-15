#pragma once

#include "BaseDeclarations.h"
#include "SDockingNode.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"
#include "SDockTab.h"
#include "SDockingTabStack.h"
#include "SDockingArea.h"

struct SDockingTabStack : SDockingNode
{
	enum EChromeElement
	{
		Icon = 0x0,
		Controls = 0x1,
	};

	enum ETabsToClose
	{
		CloseDocumentTabs = 0x0,
		CloseDocumentAndMajorTabs = 0x1,
		CloseAllTabs = 0x2,
	};

	char __padding[0xe0L];
	FGeometry& TabStackGeometryField() { return *GetNativePointerField<FGeometry*>(this, "SDockingTabStack.TabStackGeometry"); }
	TSharedPtr<SDockingTabWell,0>& TabWellField() { return *GetNativePointerField<TSharedPtr<SDockingTabWell,0>*>(this, "SDockingTabStack.TabWell"); }
	SVerticalBox::FSlot * TitleBarSlotField() { return GetNativePointerField<SVerticalBox::FSlot *>(this, "SDockingTabStack.TitleBarSlot"); }
	bool& bIsDocumentAreaField() { return *GetNativePointerField<bool*>(this, "SDockingTabStack.bIsDocumentArea"); }
	FCurveSequence& ShowHideTabWellField() { return *GetNativePointerField<FCurveSequence*>(this, "SDockingTabStack.ShowHideTabWell"); }
	TSharedPtr<SDockTab,0>& ActiveTabField() { return *GetNativePointerField<TSharedPtr<SDockTab,0>*>(this, "SDockingTabStack.ActiveTab"); }

	// Functions

	void FArguments() { NativeCall<void>(this, "SDockingTabStack.FArguments"); }
	void FArguments() { NativeCall<void>(this, "SDockingTabStack.FArguments"); }
	void AddTabWidget(const TSharedRef<SDockTab,0> * InTab, int AtLocation) { NativeCall<void, const TSharedRef<SDockTab,0> *, int>(this, "SDockingTabStack.AddTabWidget", InTab, AtLocation); }
	bool CanCloseAllButForegroundTab() { return NativeCall<bool>(this, "SDockingTabStack.CanCloseAllButForegroundTab"); }
	bool CanCloseForegroundTab() { return NativeCall<bool>(this, "SDockingTabStack.CanCloseForegroundTab"); }
	bool CanHideTabWell() { return NativeCall<bool>(this, "SDockingTabStack.CanHideTabWell"); }
	void CloseAllButForegroundTab(SDockingTabStack::ETabsToClose TabsToClose) { NativeCall<void, SDockingTabStack::ETabsToClose>(this, "SDockingTabStack.CloseAllButForegroundTab", TabsToClose); }
	void CloseForegroundTab() { NativeCall<void>(this, "SDockingTabStack.CloseForegroundTab"); }
	int ClosePersistentTab(const FTabId * TabId) { return NativeCall<int, const FTabId *>(this, "SDockingTabStack.ClosePersistentTab", TabId); }
	void Construct(const SDockingTabStack::FArguments * InArgs, const TSharedRef<FTabManager::FStack,0> * PersistentNode) { NativeCall<void, const SDockingTabStack::FArguments *, const TSharedRef<FTabManager::FStack,0> *>(this, "SDockingTabStack.Construct", InArgs, PersistentNode); }
	TSharedRef<SDockingTabStack,0> * CreateNewTabStackBySplitting(TSharedRef<SDockingTabStack,0> * result, const SDockingNode::RelativeDirection Direction) { return NativeCall<TSharedRef<SDockingTabStack,0> *, TSharedRef<SDockingTabStack,0> *, const SDockingNode::RelativeDirection>(this, "SDockingTabStack.CreateNewTabStackBySplitting", result, Direction); }
	TArray<TSharedRef<SDockTab,0>> * GetAllChildTabs(TArray<TSharedRef<SDockTab,0>> * result) { return NativeCall<TArray<TSharedRef<SDockTab,0>> *, TArray<TSharedRef<SDockTab,0>> *>(this, "SDockingTabStack.GetAllChildTabs", result); }
	FMargin * GetContentPadding(FMargin * result) { return NativeCall<FMargin *, FMargin *>(this, "SDockingTabStack.GetContentPadding", result); }
	EVisibility * GetMaximizeSpacerVisibility(EVisibility * result) { return NativeCall<EVisibility *, EVisibility *>(this, "SDockingTabStack.GetMaximizeSpacerVisibility", result); }
	SSplitter::ESizeRule GetSizeRule() { return NativeCall<SSplitter::ESizeRule>(this, "SDockingTabStack.GetSizeRule"); }
	FVector2D * GetTabWellScale(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "SDockingTabStack.GetTabWellScale", result); }
	EVisibility * GetTabWellVisibility(EVisibility * result) { return NativeCall<EVisibility *, EVisibility *>(this, "SDockingTabStack.GetTabWellVisibility", result); }
	EVisibility * GetUnhideButtonVisibility(EVisibility * result) { return NativeCall<EVisibility *, EVisibility *>(this, "SDockingTabStack.GetUnhideButtonVisibility", result); }
	FSlateColor * GetUnhideTabWellButtonOpacity(FSlateColor * result) { return NativeCall<FSlateColor *, FSlateColor *>(this, "SDockingTabStack.GetUnhideTabWellButtonOpacity", result); }
	FVector2D * GetUnhideTabWellButtonScale(FVector2D * result) { return NativeCall<FVector2D *, FVector2D *>(this, "SDockingTabStack.GetUnhideTabWellButtonScale", result); }
	EWindowZone::Type GetWindowZoneOverride() { return NativeCall<EWindowZone::Type>(this, "SDockingTabStack.GetWindowZoneOverride"); }
	void OnDragLeave(const FDragDropEvent * DragDropEvent) { NativeCall<void, const FDragDropEvent *>(this, "SDockingTabStack.OnDragLeave", DragDropEvent); }
	FReply * OnDragOver(FReply * result, const FGeometry * MyGeometry, const FDragDropEvent * DragDropEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FDragDropEvent *>(this, "SDockingTabStack.OnDragOver", result, MyGeometry, DragDropEvent); }
	FReply * OnDrop(FReply * result, const FGeometry * MyGeometry, const FDragDropEvent * DragDropEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FDragDropEvent *>(this, "SDockingTabStack.OnDrop", result, MyGeometry, DragDropEvent); }
	void OnKeyboardFocusChanging(const FWeakWidgetPath * PreviousFocusPath, const FWidgetPath * NewWidgetPath) { NativeCall<void, const FWeakWidgetPath *, const FWidgetPath *>(this, "SDockingTabStack.OnKeyboardFocusChanging", PreviousFocusPath, NewWidgetPath); }
	void OnLastTabRemoved() { NativeCall<void>(this, "SDockingTabStack.OnLastTabRemoved"); }
	FReply * OnMouseButtonDown(FReply * result, const FGeometry * MyGeometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SDockingTabStack.OnMouseButtonDown", result, MyGeometry, MouseEvent); }
	FReply * OnUserAttemptingDock(FReply * result, SDockingNode::RelativeDirection Direction, const FDragDropEvent * DragDropEvent) { return NativeCall<FReply *, FReply *, SDockingNode::RelativeDirection, const FDragDropEvent *>(this, "SDockingTabStack.OnUserAttemptingDock", result, Direction, DragDropEvent); }
	int OpenPersistentTab(const FTabId * TabId, int OpenLocationAmongActiveTabs) { return NativeCall<int, const FTabId *, int>(this, "SDockingTabStack.OpenPersistentTab", TabId, OpenLocationAmongActiveTabs); }
	void OpenTab(const TSharedRef<SDockTab,0> * InTab, int InsertLocationAmongActiveTabs) { NativeCall<void, const TSharedRef<SDockTab,0> *, int>(this, "SDockingTabStack.OpenTab", InTab, InsertLocationAmongActiveTabs); }
	void RemovePersistentTab(const FTabId * TabId) { NativeCall<void, const FTabId *>(this, "SDockingTabStack.RemovePersistentTab", TabId); }
	void ReserveSpaceForWindowChrome(SDockingTabStack::EChromeElement Element) { NativeCall<void, SDockingTabStack::EChromeElement>(this, "SDockingTabStack.ReserveSpaceForWindowChrome", Element); }
	void SetNodeContent(const TSharedRef<SWidget,0> * InContent, const TSharedRef<SWidget,0> * ContentLeft, const TSharedRef<SWidget,0> * ContentRight) { NativeCall<void, const TSharedRef<SWidget,0> *, const TSharedRef<SWidget,0> *, const TSharedRef<SWidget,0> *>(this, "SDockingTabStack.SetNodeContent", InContent, ContentLeft, ContentRight); }
	void SetParentNode(TSharedRef<SDockingSplitter,0> InParent) { NativeCall<void, TSharedRef<SDockingSplitter,0>>(this, "SDockingTabStack.SetParentNode", InParent); }
	void ShowCross() { NativeCall<void>(this, "SDockingTabStack.ShowCross"); }
	FReply * TabWellRightClicked(FReply * result, const FGeometry * TabWellGeometry, const FPointerEvent * MouseEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FPointerEvent *>(this, "SDockingTabStack.TabWellRightClicked", result, TabWellGeometry, MouseEvent); }
	void Tick(const FGeometry * AllottedGeometry, const long double InCurrentTime, const float InDeltaTime) { NativeCall<void, const FGeometry *, const long double, const float>(this, "SDockingTabStack.Tick", AllottedGeometry, InCurrentTime, InDeltaTime); }
	void ToggleTabWellVisibility() { NativeCall<void>(this, "SDockingTabStack.ToggleTabWellVisibility"); }
	FReply * UnhideTabWell(FReply * result) { return NativeCall<FReply *, FReply *>(this, "SDockingTabStack.UnhideTabWell", result); }
};

