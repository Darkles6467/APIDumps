#pragma once

#include "BaseDeclarations.h"
#include "SDockingNode.h"
#include "SCompoundWidget.h"
#include "SWidget.h"
#include "FSlateControlledConstruction.h"
#include "SDockingArea.h"
#include "SWindow.h"
#include "SDockTab.h"
#include "SDockingTabStack.h"

struct SDockingSplitter : SDockingNode
{
	enum ETabStackToFind
	{
		UpperLeft = 0x0,
		UpperRight = 0x1,
	};

	char __padding[0x20L];
	TSharedPtr<SSplitter,0>& SplitterField() { return *GetNativePointerField<TSharedPtr<SSplitter,0>*>(this, "SDockingSplitter.Splitter"); }

	// Functions

	void FArguments() { NativeCall<void>(this, "SDockingSplitter.FArguments"); }
	void AddChildNode(const TSharedRef<SDockingNode,0> * InChild, int InLocation) { NativeCall<void, const TSharedRef<SDockingNode,0> *, int>(this, "SDockingSplitter.AddChildNode", InChild, InLocation); }
	float ComputeChildCoefficientTotal() { return NativeCall<float>(this, "SDockingSplitter.ComputeChildCoefficientTotal"); }
	void Construct(const SDockingSplitter::FArguments * InArgs, const TSharedRef<FTabManager::FSplitter,0> * PersistentNode) { NativeCall<void, const SDockingSplitter::FArguments *, const TSharedRef<FTabManager::FSplitter,0> *>(this, "SDockingSplitter.Construct", InArgs, PersistentNode); }
	TSharedRef<SDockingTabStack,0> * FindTabStackToHouseWindowControls(TSharedRef<SDockingTabStack,0> * result) { return NativeCall<TSharedRef<SDockingTabStack,0> *, TSharedRef<SDockingTabStack,0> *>(this, "SDockingSplitter.FindTabStackToHouseWindowControls", result); }
	TSharedRef<SDockingTabStack,0> * FindTabStackToHouseWindowIcon(TSharedRef<SDockingTabStack,0> * result) { return NativeCall<TSharedRef<SDockingTabStack,0> *, TSharedRef<SDockingTabStack,0> *>(this, "SDockingSplitter.FindTabStackToHouseWindowIcon", result); }
	TArray<TSharedRef<SDockTab,0>> * GetAllChildTabs(TArray<TSharedRef<SDockTab,0>> * result) { return NativeCall<TArray<TSharedRef<SDockTab,0>> *, TArray<TSharedRef<SDockTab,0>> *>(this, "SDockingSplitter.GetAllChildTabs", result); }
	void PlaceNode(const TSharedRef<SDockingNode,0> * NodeToPlace, SDockingNode::RelativeDirection Direction, const TSharedRef<SDockingNode,0> * RelativeToMe) { NativeCall<void, const TSharedRef<SDockingNode,0> *, SDockingNode::RelativeDirection, const TSharedRef<SDockingNode,0> *>(this, "SDockingSplitter.PlaceNode", NodeToPlace, Direction, RelativeToMe); }
	void ReplaceChild(const TSharedRef<SDockingNode,0> * InChildToReplace, const TSharedRef<SDockingNode,0> * Replacement) { NativeCall<void, const TSharedRef<SDockingNode,0> *, const TSharedRef<SDockingNode,0> *>(this, "SDockingSplitter.ReplaceChild", InChildToReplace, Replacement); }
};

struct SDockingArea : SDockingSplitter
{
	char __padding[0x38L];
	TWeakPtr<SWindow,0>& ParentWindowPtrField() { return *GetNativePointerField<TWeakPtr<SWindow,0>*>(this, "SDockingArea.ParentWindowPtr"); }
	SOverlay::FOverlaySlot * WindowControlsAreaField() { return GetNativePointerField<SOverlay::FOverlaySlot *>(this, "SDockingArea.WindowControlsArea"); }
	bool& bManageParentWindowField() { return *GetNativePointerField<bool*>(this, "SDockingArea.bManageParentWindow"); }
	bool& bIsOverlayVisibleField() { return *GetNativePointerField<bool*>(this, "SDockingArea.bIsOverlayVisible"); }
	bool& bIsCenterTargetVisibleField() { return *GetNativePointerField<bool*>(this, "SDockingArea.bIsCenterTargetVisible"); }
	bool& bCleanUpUponTabRelocationField() { return *GetNativePointerField<bool*>(this, "SDockingArea.bCleanUpUponTabRelocation"); }

	// Functions

	void FArguments() { NativeCall<void>(this, "SDockingArea.FArguments"); }
	void FArguments() { NativeCall<void>(this, "SDockingArea.FArguments"); }
	void CleanUp(SDockingNode::ELayoutModification RemovalMethod) { NativeCall<void, SDockingNode::ELayoutModification>(this, "SDockingArea.CleanUp", RemovalMethod); }
	void Construct(const SDockingArea::FArguments * InArgs, const TSharedRef<FTabManager,0> * InTabManager, const TSharedRef<FTabManager::FArea,0> * PersistentNode) { NativeCall<void, const SDockingArea::FArguments *, const TSharedRef<FTabManager,0> *, const TSharedRef<FTabManager::FArea,0> *>(this, "SDockingArea.Construct", InArgs, InTabManager, PersistentNode); }
	void DockFromOutside(SDockingNode::RelativeDirection Direction, const FDragDropEvent * DragDropEvent) { NativeCall<void, SDockingNode::RelativeDirection, const FDragDropEvent *>(this, "SDockingArea.DockFromOutside", Direction, DragDropEvent); }
	TSharedPtr<SDockingArea,0> * GetDockArea(TSharedPtr<SDockingArea,0> * result) { return NativeCall<TSharedPtr<SDockingArea,0> *, TSharedPtr<SDockingArea,0> *>(this, "SDockingArea.GetDockArea", result); }
	TSharedPtr<SDockingArea const ,0> * GetDockArea(TSharedPtr<SDockingArea const ,0> * result) { return NativeCall<TSharedPtr<SDockingArea const ,0> *, TSharedPtr<SDockingArea const ,0> *>(this, "SDockingArea.GetDockArea", result); }
	TSharedPtr<SWindow,0> * GetParentWindow(TSharedPtr<SWindow,0> * result) { return NativeCall<TSharedPtr<SWindow,0> *, TSharedPtr<SWindow,0> *>(this, "SDockingArea.GetParentWindow", result); }
	SDockingArea::FArguments * FArguments(TSharedPtr<SDockingNode,0> InArg) { return NativeCall<SDockingArea::FArguments *, TSharedPtr<SDockingNode,0>>(this, "SDockingArea.FArguments", InArg); }
	void MakeRoomForWindowChrome() { NativeCall<void>(this, "SDockingArea.MakeRoomForWindowChrome"); }
	void OnDragEnter(const FGeometry * MyGeometry, const FDragDropEvent * DragDropEvent) { NativeCall<void, const FGeometry *, const FDragDropEvent *>(this, "SDockingArea.OnDragEnter", MyGeometry, DragDropEvent); }
	void OnDragLeave(const FDragDropEvent * DragDropEvent) { NativeCall<void, const FDragDropEvent *>(this, "SDockingArea.OnDragLeave", DragDropEvent); }
	FReply * OnDrop(FReply * result, const FGeometry * MyGeometry, const FDragDropEvent * DragDropEvent) { return NativeCall<FReply *, FReply *, const FGeometry *, const FDragDropEvent *>(this, "SDockingArea.OnDrop", result, MyGeometry, DragDropEvent); }
	void OnLiveTabAdded() { NativeCall<void>(this, "SDockingArea.OnLiveTabAdded"); }
	void OnOwningWindowActivated() { NativeCall<void>(this, "SDockingArea.OnOwningWindowActivated"); }
	void OnOwningWindowBeingDestroyed(const TSharedRef<SWindow,0> * WindowBeingDestroyed) { NativeCall<void, const TSharedRef<SWindow,0> *>(this, "SDockingArea.OnOwningWindowBeingDestroyed", WindowBeingDestroyed); }
	void OnTabFoundNewHome(const TSharedRef<SDockTab,0> * RelocatedTab, const TSharedRef<SWindow,0> * NewOwnerWindow) { NativeCall<void, const TSharedRef<SDockTab,0> *, const TSharedRef<SWindow,0> *>(this, "SDockingArea.OnTabFoundNewHome", RelocatedTab, NewOwnerWindow); }
	FReply * OnUserAttemptingDock(FReply * result, SDockingNode::RelativeDirection Direction, const FDragDropEvent * DragDropEvent) { return NativeCall<FReply *, FReply *, SDockingNode::RelativeDirection, const FDragDropEvent *>(this, "SDockingArea.OnUserAttemptingDock", result, Direction, DragDropEvent); }
	SDockingArea::FArguments * FArguments(TSharedPtr<SWindow,0> InArg) { return NativeCall<SDockingArea::FArguments *, TSharedPtr<SWindow,0>>(this, "SDockingArea.FArguments", InArg); }
	void SetParentWindow(const TSharedRef<SWindow,0> * NewParentWindow) { NativeCall<void, const TSharedRef<SWindow,0> *>(this, "SDockingArea.SetParentWindow", NewParentWindow); }
	EVisibility * TargetCrossCenterVisibility(EVisibility * result) { return NativeCall<EVisibility *, EVisibility *>(this, "SDockingArea.TargetCrossCenterVisibility", result); }
	EVisibility * TargetCrossVisibility(EVisibility * result) { return NativeCall<EVisibility *, EVisibility *>(this, "SDockingArea.TargetCrossVisibility", result); }
};

