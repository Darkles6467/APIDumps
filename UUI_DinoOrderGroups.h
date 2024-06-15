#pragma once

#include "BaseDeclarations.h"
#include "UPrimalSubMenuUI.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UUI_DinoOrderGroups : UPrimalSubMenuUI
{
	char __padding[0xe8L];
	TSubclassOf<UDinoListButtonWidget>& DinoOrderGroupEntryTemplateField() { return *GetNativePointerField<TSubclassOf<UDinoListButtonWidget>*>(this, "UUI_DinoOrderGroups.DinoOrderGroupEntryTemplate"); }
	bool& bForceRefreshField() { return *GetNativePointerField<bool*>(this, "UUI_DinoOrderGroups.bForceRefresh"); }
	bool& bNextRefreshOnlyEntriesField() { return *GetNativePointerField<bool*>(this, "UUI_DinoOrderGroups.bNextRefreshOnlyEntries"); }
	UTextBlock * CurrentlySelectedGroupNameTextBlockField() { return GetNativePointerField<UTextBlock *>(this, "UUI_DinoOrderGroups.CurrentlySelectedGroupNameTextBlock"); }
	UTextBlock * GroupSizeValueBlockField() { return GetNativePointerField<UTextBlock *>(this, "UUI_DinoOrderGroups.GroupSizeValueBlock"); }
	UTextBlock * ClassSizeValueBlockField() { return GetNativePointerField<UTextBlock *>(this, "UUI_DinoOrderGroups.ClassSizeValueBlock"); }
	UTextBlock * CurrentGroupStatLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_DinoOrderGroups.CurrentGroupStatLabel"); }
	TArray<UDinoListButtonWidget *>& DinoOrderGroupsWidgetsField() { return *GetNativePointerField<TArray<UDinoListButtonWidget *>*>(this, "UUI_DinoOrderGroups.DinoOrderGroupsWidgets"); }
	TArray<UDinoListButtonWidget *>& DinoCharsWidgetsField() { return *GetNativePointerField<TArray<UDinoListButtonWidget *>*>(this, "UUI_DinoOrderGroups.DinoCharsWidgets"); }
	TArray<UDinoListButtonWidget *>& DinoClassWidgetsField() { return *GetNativePointerField<TArray<UDinoListButtonWidget *>*>(this, "UUI_DinoOrderGroups.DinoClassWidgets"); }
	UProgressBar * GroupSizeBarField() { return GetNativePointerField<UProgressBar *>(this, "UUI_DinoOrderGroups.GroupSizeBar"); }
	UProgressBar * ClassSizeBarField() { return GetNativePointerField<UProgressBar *>(this, "UUI_DinoOrderGroups.ClassSizeBar"); }
	int& LastSelectedGroupIndexField() { return *GetNativePointerField<int*>(this, "UUI_DinoOrderGroups.LastSelectedGroupIndex"); }
	int& LastActiveGroupField() { return *GetNativePointerField<int*>(this, "UUI_DinoOrderGroups.LastActiveGroup"); }
	long double& LastButtonClickedTimeField() { return *GetNativePointerField<long double*>(this, "UUI_DinoOrderGroups.LastButtonClickedTime"); }

	// Functions

	void ClickedButton(UWidget * clickedWidget) { NativeCall<void, UWidget *>(this, "UUI_DinoOrderGroups.ClickedButton", clickedWidget); }
	void DinoCharSelected(UWidget * theWidget) { NativeCall<void, UWidget *>(this, "UUI_DinoOrderGroups.DinoCharSelected", theWidget); }
	void DinoClassSelected(UWidget * theWidget) { NativeCall<void, UWidget *>(this, "UUI_DinoOrderGroups.DinoClassSelected", theWidget); }
	void DinoOrderGroupSelected(UWidget * theWidget) { NativeCall<void, UWidget *>(this, "UUI_DinoOrderGroups.DinoOrderGroupSelected", theWidget); }
	void HandleActionRemoveClass() { NativeCall<void>(this, "UUI_DinoOrderGroups.HandleActionRemoveClass"); }
	void HandleActionRemoveDino() { NativeCall<void>(this, "UUI_DinoOrderGroups.HandleActionRemoveDino"); }
	void HandleActionSetGroup() { NativeCall<void>(this, "UUI_DinoOrderGroups.HandleActionSetGroup"); }
	void HighlightDefaultWidget(UPanelWidget * RestrictToPanel) { NativeCall<void, UPanelWidget *>(this, "UUI_DinoOrderGroups.HighlightDefaultWidget", RestrictToPanel); }
	void InitializeSubMenu(UUI_Hub * Hub) { NativeCall<void, UUI_Hub *>(this, "UUI_DinoOrderGroups.InitializeSubMenu", Hub); }
	void OnShow() { NativeCall<void>(this, "UUI_DinoOrderGroups.OnShow"); }
	void RefreshDinoGroupWidgets() { NativeCall<void>(this, "UUI_DinoOrderGroups.RefreshDinoGroupWidgets"); }
	void RefreshEntries() { NativeCall<void>(this, "UUI_DinoOrderGroups.RefreshEntries"); }
	bool SubMenuClickedButtonWithController(UWidget * clickedWidget, int ControllerId) { return NativeCall<bool, UWidget *, int>(this, "UUI_DinoOrderGroups.SubMenuClickedButtonWithController", clickedWidget, ControllerId); }
	void Tick_Implementation(FGeometry MyGeometry, float InDeltaTime) { NativeCall<void, FGeometry, float>(this, "UUI_DinoOrderGroups.Tick_Implementation", MyGeometry, InDeltaTime); }
};

