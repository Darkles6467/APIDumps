#pragma once

#include "BaseDeclarations.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UInventoryStatsPanel : UPrimalUI
{
	char __padding[0xe8L];
	FName& TabBgSwitcherNameField() { return *GetNativePointerField<FName*>(this, "UInventoryStatsPanel.TabBgSwitcherName"); }
	FName& PlayerStatsTabButtonNameField() { return *GetNativePointerField<FName*>(this, "UInventoryStatsPanel.PlayerStatsTabButtonName"); }
	FName& RemoteStatsTabButtonNameField() { return *GetNativePointerField<FName*>(this, "UInventoryStatsPanel.RemoteStatsTabButtonName"); }
	FName& RemoteStatsTabTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UInventoryStatsPanel.RemoteStatsTabTextBlockName"); }
	FName& PlayerEnabledEffectNameField() { return *GetNativePointerField<FName*>(this, "UInventoryStatsPanel.PlayerEnabledEffectName"); }
	FName& RemoteEnabledEffectNameField() { return *GetNativePointerField<FName*>(this, "UInventoryStatsPanel.RemoteEnabledEffectName"); }
	FName& StatsWidgetSwitcherNameField() { return *GetNativePointerField<FName*>(this, "UInventoryStatsPanel.StatsWidgetSwitcherName"); }
	FName& PlayerStatsPanelNameField() { return *GetNativePointerField<FName*>(this, "UInventoryStatsPanel.PlayerStatsPanelName"); }
	FName& HeaderPanelNameField() { return *GetNativePointerField<FName*>(this, "UInventoryStatsPanel.HeaderPanelName"); }
	FName& RootSizeBoxNameField() { return *GetNativePointerField<FName*>(this, "UInventoryStatsPanel.RootSizeBoxName"); }
	FLinearColor& SwitcherTextActiveColorField() { return *GetNativePointerField<FLinearColor*>(this, "UInventoryStatsPanel.SwitcherTextActiveColor"); }
	FLinearColor& SwitcherTextInactiveColorField() { return *GetNativePointerField<FLinearColor*>(this, "UInventoryStatsPanel.SwitcherTextInactiveColor"); }
	UUI_Inventory * InventoryUIField() { return GetNativePointerField<UUI_Inventory *>(this, "UInventoryStatsPanel.InventoryUI"); }
	UTextBlock * RemoteStatsTabNameField() { return GetNativePointerField<UTextBlock *>(this, "UInventoryStatsPanel.RemoteStatsTabName"); }
	USizeBox * RootSizeBoxField() { return GetNativePointerField<USizeBox *>(this, "UInventoryStatsPanel.RootSizeBox"); }

	// Functions

	void ClickedButton(UWidget * clickedButton) { NativeCall<void, UWidget *>(this, "UInventoryStatsPanel.ClickedButton", clickedButton); }
	void GotoNextTab() { NativeCall<void>(this, "UInventoryStatsPanel.GotoNextTab"); }
	void Init(UUI_Inventory * InInventory) { NativeCall<void, UUI_Inventory *>(this, "UInventoryStatsPanel.Init", InInventory); }
	void RefreshItemLists() { NativeCall<void>(this, "UInventoryStatsPanel.RefreshItemLists"); }
	void RefreshPanelHeight() { NativeCall<void>(this, "UInventoryStatsPanel.RefreshPanelHeight"); }
	void SetRemoteInventoryComp(UPrimalInventoryComponent * InRemoteInventoryComponent) { NativeCall<void, UPrimalInventoryComponent *>(this, "UInventoryStatsPanel.SetRemoteInventoryComp", InRemoteInventoryComponent); }
	void SetupSpecialWidgetAdjacents(UWidget * InWidget) { NativeCall<void, UWidget *>(this, "UInventoryStatsPanel.SetupSpecialWidgetAdjacents", InWidget); }
	void ShowLocalStats() { NativeCall<void>(this, "UInventoryStatsPanel.ShowLocalStats"); }
	void ShowRemoteStats() { NativeCall<void>(this, "UInventoryStatsPanel.ShowRemoteStats"); }
};

