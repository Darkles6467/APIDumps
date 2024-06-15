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
#include "FDragDropEvent.h"
#include "FARKTributeDinoListing.h"

struct UUI_Inventory : UPrimalSubMenuUI
{
	char __padding[0x388L];
	FName& PanelContainerLeftNameField() { return *GetNativePointerField<FName*>(this, "UUI_Inventory.PanelContainerLeftName"); }
	FName& PanelContainerCenterNameField() { return *GetNativePointerField<FName*>(this, "UUI_Inventory.PanelContainerCenterName"); }
	FName& PanelContainerRightNameField() { return *GetNativePointerField<FName*>(this, "UUI_Inventory.PanelContainerRightName"); }
	FName& WidgetSwitcherRightNameField() { return *GetNativePointerField<FName*>(this, "UUI_Inventory.WidgetSwitcherRightName"); }
	FName& QuickActionSlotPanelNameField() { return *GetNativePointerField<FName*>(this, "UUI_Inventory.QuickActionSlotPanelName"); }
	FName& QuickActionSlotDataListNameField() { return *GetNativePointerField<FName*>(this, "UUI_Inventory.QuickActionSlotDataListName"); }
	FName& PlayerCharacterPanelNameField() { return *GetNativePointerField<FName*>(this, "UUI_Inventory.PlayerCharacterPanelName"); }
	FName& PlayerInventoryPanelNameField() { return *GetNativePointerField<FName*>(this, "UUI_Inventory.PlayerInventoryPanelName"); }
	FName& RemoteInventoryPanelNameField() { return *GetNativePointerField<FName*>(this, "UUI_Inventory.RemoteInventoryPanelName"); }
	FName& StatsPanelNameField() { return *GetNativePointerField<FName*>(this, "UUI_Inventory.StatsPanelName"); }
	FName& DinoAncestryOverlayNameField() { return *GetNativePointerField<FName*>(this, "UUI_Inventory.DinoAncestryOverlayName"); }
	TSubclassOf<UUI_SteamInventoryStatusPopup>& SteamInventoryStatusUITemplateField() { return *GetNativePointerField<TSubclassOf<UUI_SteamInventoryStatusPopup>*>(this, "UUI_Inventory.SteamInventoryStatusUITemplate"); }
	USoundCue * ErrorSoundField() { return GetNativePointerField<USoundCue *>(this, "UUI_Inventory.ErrorSound"); }
	bool& bCloseRemoteInventoryOnHideField() { return *GetNativePointerField<bool*>(this, "UUI_Inventory.bCloseRemoteInventoryOnHide"); }
	bool& bHasRemoteInventoryField() { return *GetNativePointerField<bool*>(this, "UUI_Inventory.bHasRemoteInventory"); }
	int& MaxTributeItemsField() { return *GetNativePointerField<int*>(this, "UUI_Inventory.MaxTributeItems"); }
	int& MaxTributeDinosField() { return *GetNativePointerField<int*>(this, "UUI_Inventory.MaxTributeDinos"); }
	int& MaxTributeCharactersField() { return *GetNativePointerField<int*>(this, "UUI_Inventory.MaxTributeCharacters"); }
	UDataListPanel * QuickActionSlotDataListField() { return GetNativePointerField<UDataListPanel *>(this, "UUI_Inventory.QuickActionSlotDataList"); }
	UInventoryStatsPanel * StatsPanelField() { return GetNativePointerField<UInventoryStatsPanel *>(this, "UUI_Inventory.StatsPanel"); }
	UCharacterViewPanelWidget * PlayerCharacterPanelField() { return GetNativePointerField<UCharacterViewPanelWidget *>(this, "UUI_Inventory.PlayerCharacterPanel"); }
	UInventoryPanelWidget * PlayerInventoryPanelField() { return GetNativePointerField<UInventoryPanelWidget *>(this, "UUI_Inventory.PlayerInventoryPanel"); }
	UInventoryPanelWidget * RemoteInventoryPanelField() { return GetNativePointerField<UInventoryPanelWidget *>(this, "UUI_Inventory.RemoteInventoryPanel"); }
	UInventoryDinoAncestryPanel * DinoAncestryOverlayField() { return GetNativePointerField<UInventoryDinoAncestryPanel *>(this, "UUI_Inventory.DinoAncestryOverlay"); }
	int& ConfirmationDialogTypeField() { return *GetNativePointerField<int*>(this, "UUI_Inventory.ConfirmationDialogType"); }
	bool& bIsShiftDownField() { return *GetNativePointerField<bool*>(this, "UUI_Inventory.bIsShiftDown"); }
	bool& bIsControlDownField() { return *GetNativePointerField<bool*>(this, "UUI_Inventory.bIsControlDown"); }
	bool& bPlayedDragSoundField() { return *GetNativePointerField<bool*>(this, "UUI_Inventory.bPlayedDragSound"); }
	FKey& ShowInventoryKeyField() { return *GetNativePointerField<FKey*>(this, "UUI_Inventory.ShowInventoryKey"); }
	FKey& ShowCraftablesKeyField() { return *GetNativePointerField<FKey*>(this, "UUI_Inventory.ShowCraftablesKey"); }
	FKey& DropItemKeyField() { return *GetNativePointerField<FKey*>(this, "UUI_Inventory.DropItemKey"); }
	FKey& TransferItemKeyField() { return *GetNativePointerField<FKey*>(this, "UUI_Inventory.TransferItemKey"); }
	FKey& ToggleTooltipKeyField() { return *GetNativePointerField<FKey*>(this, "UUI_Inventory.ToggleTooltipKey"); }
	FKey& AccessInventoryKeyField() { return *GetNativePointerField<FKey*>(this, "UUI_Inventory.AccessInventoryKey"); }
	FKey& UseKeyField() { return *GetNativePointerField<FKey*>(this, "UUI_Inventory.UseKey"); }
	FKey& CraftAllKeyField() { return *GetNativePointerField<FKey*>(this, "UUI_Inventory.CraftAllKey"); }
	FieldArray<FKey, 10> UseSlotsKeysField() { return {this, "UUI_Inventory.UseSlotsKeys"}; }
	FKey& ShowInventoryGamepadKeyField() { return *GetNativePointerField<FKey*>(this, "UUI_Inventory.ShowInventoryGamepadKey"); }
	FieldArray<long double, 10> UseSlotKeyTimesField() { return {this, "UUI_Inventory.UseSlotKeyTimes"}; }
	long double& LastUseItemTimeField() { return *GetNativePointerField<long double*>(this, "UUI_Inventory.LastUseItemTime"); }
	FItemNetID& LastUseItemIDField() { return *GetNativePointerField<FItemNetID*>(this, "UUI_Inventory.LastUseItemID"); }
	float& CurrentUIScalingField() { return *GetNativePointerField<float*>(this, "UUI_Inventory.CurrentUIScaling"); }
	float& CurrentUIQuickbarScalingField() { return *GetNativePointerField<float*>(this, "UUI_Inventory.CurrentUIQuickbarScaling"); }
	bool& bLastTickDidHighlightsField() { return *GetNativePointerField<bool*>(this, "UUI_Inventory.bLastTickDidHighlights"); }
	long double& ToggleItemLabelsTimeField() { return *GetNativePointerField<long double*>(this, "UUI_Inventory.ToggleItemLabelsTime"); }
	bool& bIsRefreshingDataListsField() { return *GetNativePointerField<bool*>(this, "UUI_Inventory.bIsRefreshingDataLists"); }
	bool& bLocalInventoryRefreshField() { return *GetNativePointerField<bool*>(this, "UUI_Inventory.bLocalInventoryRefresh"); }
	bool& bRemoteInventoryRefreshField() { return *GetNativePointerField<bool*>(this, "UUI_Inventory.bRemoteInventoryRefresh"); }
	bool& bFullItemRefreshField() { return *GetNativePointerField<bool*>(this, "UUI_Inventory.bFullItemRefresh"); }
	TWeakObjectPtr<UDataListPanel>& LastSelectedDataListField() { return *GetNativePointerField<TWeakObjectPtr<UDataListPanel>*>(this, "UUI_Inventory.LastSelectedDataList"); }

	// Functions

	bool IsShiftDown() { return NativeCall<bool>(this, "UUI_Inventory.IsShiftDown"); }
	bool IsTributeInventory() { return NativeCall<bool>(this, "UUI_Inventory.IsTributeInventory"); }
	UInventoryPanelWidget * GetPlayerInventoryPanel() { return NativeCall<UInventoryPanelWidget *>(this, "UUI_Inventory.GetPlayerInventoryPanel"); }
	void DraggingStopped() { NativeCall<void>(this, "UUI_Inventory.DraggingStopped"); }
	void AddItemToSlot(UDataListEntryWidget * Widget) { NativeCall<void, UDataListEntryWidget *>(this, "UUI_Inventory.AddItemToSlot", Widget); }
	void AttemptDownloadItemFromArk(UPrimalItem * Item) { NativeCall<void, UPrimalItem *>(this, "UUI_Inventory.AttemptDownloadItemFromArk", Item); }
	void AttemptUploadItemToArk(UPrimalItem * Item, int RequestedQuantity) { NativeCall<void, UPrimalItem *, int>(this, "UUI_Inventory.AttemptUploadItemToArk", Item, RequestedQuantity); }
	bool CanAddItemToSlot(UDataListEntryWidget * Widget) { return NativeCall<bool, UDataListEntryWidget *>(this, "UUI_Inventory.CanAddItemToSlot", Widget); }
	bool CanCraftAllItems(UDataListEntryWidget * Widget) { return NativeCall<bool, UDataListEntryWidget *>(this, "UUI_Inventory.CanCraftAllItems", Widget); }
	bool CanCraftOneItem(UDataListEntryWidget * Widget) { return NativeCall<bool, UDataListEntryWidget *>(this, "UUI_Inventory.CanCraftOneItem", Widget); }
	bool CanCraftSomeItems(UDataListEntryWidget * Widget, int num) { return NativeCall<bool, UDataListEntryWidget *, int>(this, "UUI_Inventory.CanCraftSomeItems", Widget, num); }
	bool CanDropItem(UDataListEntryWidget * Widget) { return NativeCall<bool, UDataListEntryWidget *>(this, "UUI_Inventory.CanDropItem", Widget); }
	bool CanDropWidgetOn(UWidget * DraggedWidget, UWidget * WidgetToDropOn, EDropItemIconAction::Type * DropAction, bool bForHighlight) { return NativeCall<bool, UWidget *, UWidget *, EDropItemIconAction::Type *, bool>(this, "UUI_Inventory.CanDropWidgetOn", DraggedWidget, WidgetToDropOn, DropAction, bForHighlight); }
	bool CanEquipItem(UDataListEntryWidget * Widget) { return NativeCall<bool, UDataListEntryWidget *>(this, "UUI_Inventory.CanEquipItem", Widget); }
	bool CanRemoveAmmo(UDataListEntryWidget * Widget) { return NativeCall<bool, UDataListEntryWidget *>(this, "UUI_Inventory.CanRemoveAmmo", Widget); }
	bool CanRemoveSkin(UDataListEntryWidget * Widget) { return NativeCall<bool, UDataListEntryWidget *>(this, "UUI_Inventory.CanRemoveSkin", Widget); }
	bool CanRemoveWeaponAccessory(UDataListEntryWidget * Widget) { return NativeCall<bool, UDataListEntryWidget *>(this, "UUI_Inventory.CanRemoveWeaponAccessory", Widget); }
	bool CanRepairItem(UDataListEntryWidget * Widget) { return NativeCall<bool, UDataListEntryWidget *>(this, "UUI_Inventory.CanRepairItem", Widget); }
	bool CanSplitItem(UDataListEntryWidget * Widget) { return NativeCall<bool, UDataListEntryWidget *>(this, "UUI_Inventory.CanSplitItem", Widget); }
	bool CanTransferItem(UDataListEntryWidget * Widget) { return NativeCall<bool, UDataListEntryWidget *>(this, "UUI_Inventory.CanTransferItem", Widget); }
	bool CanUnequipItem(UDataListEntryWidget * Widget) { return NativeCall<bool, UDataListEntryWidget *>(this, "UUI_Inventory.CanUnequipItem", Widget); }
	bool CanUseItem(UDataListEntryWidget * Widget) { return NativeCall<bool, UDataListEntryWidget *>(this, "UUI_Inventory.CanUseItem", Widget); }
	void ConfirmationDialogAccepted() { NativeCall<void>(this, "UUI_Inventory.ConfirmationDialogAccepted"); }
	void CraftAllItems(UDataListEntryWidget * Widget) { NativeCall<void, UDataListEntryWidget *>(this, "UUI_Inventory.CraftAllItems", Widget); }
	void CraftOneItem(UDataListEntryWidget * Widget) { NativeCall<void, UDataListEntryWidget *>(this, "UUI_Inventory.CraftOneItem", Widget); }
	void CraftSomeItems(UDataListEntryWidget * Widget, int num) { NativeCall<void, UDataListEntryWidget *, int>(this, "UUI_Inventory.CraftSomeItems", Widget, num); }
	void CustomItemOptionSelected(UDataListEntryWidget * Widget, const FName * SelectedOption) { NativeCall<void, UDataListEntryWidget *, const FName *>(this, "UUI_Inventory.CustomItemOptionSelected", Widget, SelectedOption); }
	void DelayedOnHighlightedWidget() { NativeCall<void>(this, "UUI_Inventory.DelayedOnHighlightedWidget"); }
	void DeleteFolder(UDataListEntryWidget * Widget) { NativeCall<void, UDataListEntryWidget *>(this, "UUI_Inventory.DeleteFolder", Widget); }
	bool DoDroppedWidget(UWidget * DroppedWidget, UWidget * DroppedOnWidget) { return NativeCall<bool, UWidget *, UWidget *>(this, "UUI_Inventory.DoDroppedWidget", DroppedWidget, DroppedOnWidget); }
	void DropAllItems(bool bFromRemoteInventory) { NativeCall<void, bool>(this, "UUI_Inventory.DropAllItems", bFromRemoteInventory); }
	void DropItem(UDataListEntryWidget * Widget) { NativeCall<void, UDataListEntryWidget *>(this, "UUI_Inventory.DropItem", Widget); }
	void EnableRefreshButton() { NativeCall<void>(this, "UUI_Inventory.EnableRefreshButton"); }
	void EquipAllInFolder(UDataListEntryWidget * Widget) { NativeCall<void, UDataListEntryWidget *>(this, "UUI_Inventory.EquipAllInFolder", Widget); }
	void EquipItem(UDataListEntryWidget * Widget) { NativeCall<void, UDataListEntryWidget *>(this, "UUI_Inventory.EquipItem", Widget); }
	int GetMaxCraftableQty(UDataListEntryWidget * Widget) { return NativeCall<int, UDataListEntryWidget *>(this, "UUI_Inventory.GetMaxCraftableQty", Widget); }
	UInventoryPanelWidget * GetRemoteInventoryPanel() { return NativeCall<UInventoryPanelWidget *>(this, "UUI_Inventory.GetRemoteInventoryPanel"); }
	bool HandleGamepadReleasedOnInventoryEntry(UWidget * Widget, const FKey * Key, const bool InKeyIsRepeat) { return NativeCall<bool, UWidget *, const FKey *, const bool>(this, "UUI_Inventory.HandleGamepadReleasedOnInventoryEntry", Widget, Key, InKeyIsRepeat); }
	void HideDinoAncestry() { NativeCall<void>(this, "UUI_Inventory.HideDinoAncestry"); }
	void HighlightDefaultWidget(UPanelWidget * RestrictToPanel) { NativeCall<void, UPanelWidget *>(this, "UUI_Inventory.HighlightDefaultWidget", RestrictToPanel); }
	bool HighlightPrevHighlightedWidget() { return NativeCall<bool>(this, "UUI_Inventory.HighlightPrevHighlightedWidget"); }
	void InitializeSubMenu(UUI_Hub * Hub) { NativeCall<void, UUI_Hub *>(this, "UUI_Inventory.InitializeSubMenu", Hub); }
	bool InternalCanCraftItemQty(UPrimalInventoryComponent * inventory, bool bInventoryIsRemote, UPrimalItem * item, int qty) { return NativeCall<bool, UPrimalInventoryComponent *, bool, UPrimalItem *, int>(this, "UUI_Inventory.InternalCanCraftItemQty", inventory, bInventoryIsRemote, item, qty); }
	int InternalDoCraftItemQty(UPrimalInventoryComponent * inventory, bool bInventoryIsRemote, UPrimalItem * item, int qty) { return NativeCall<int, UPrimalInventoryComponent *, bool, UPrimalItem *, int>(this, "UUI_Inventory.InternalDoCraftItemQty", inventory, bInventoryIsRemote, item, qty); }
	bool IsDataListOfType(UDataListPanel * Panel, int DataListType) { return NativeCall<bool, UDataListPanel *, int>(this, "UUI_Inventory.IsDataListOfType", Panel, DataListType); }
	bool IsWeaponItemActive(UPrimalItem * item) { return NativeCall<bool, UPrimalItem *>(this, "UUI_Inventory.IsWeaponItemActive", item); }
	void NewFolder(bool bFromRemoteInventory, int DataListType) { NativeCall<void, bool, int>(this, "UUI_Inventory.NewFolder", bFromRemoteInventory, DataListType); }
	void NotifyInventoryFolderAdded(UPrimalInventoryComponent * inventoryComp, FString CustomFolderName, int InventoryComp) { NativeCall<void, UPrimalInventoryComponent *, FString, int>(this, "UUI_Inventory.NotifyInventoryFolderAdded", inventoryComp, CustomFolderName, InventoryComp); }
	void NotifyInventoryPrimalArkItemAdded() { NativeCall<void>(this, "UUI_Inventory.NotifyInventoryPrimalArkItemAdded"); }
	void NotifyInventoryPrimalItemAdded(UPrimalInventoryComponent * inventoryComp, UPrimalItem * theItem, bool bEquippedItem) { NativeCall<void, UPrimalInventoryComponent *, UPrimalItem *, bool>(this, "UUI_Inventory.NotifyInventoryPrimalItemAdded", inventoryComp, theItem, bEquippedItem); }
	void NotifyInventoryPrimalItemRemoved(UPrimalInventoryComponent * inventoryComp, UPrimalItem * theItem) { NativeCall<void, UPrimalInventoryComponent *, UPrimalItem *>(this, "UUI_Inventory.NotifyInventoryPrimalItemRemoved", inventoryComp, theItem); }
	void NotifyInventoryPrimalItemStatus(UPrimalInventoryComponent * inventoryComp, UPrimalItem * theItem, UPrimalItem * theItem2, bool bEquippedItem, bool bRemovedItem, bool bOnlyUpdateQuantity, bool bOnlyUpdateDurability, bool bOnlyNotifyItemSwap, bool bUsedItem, bool bNotifyCraftQueue, bool ShowHUDNotification) { NativeCall<void, UPrimalInventoryComponent *, UPrimalItem *, UPrimalItem *, bool, bool, bool, bool, bool, bool, bool, bool>(this, "UUI_Inventory.NotifyInventoryPrimalItemStatus", inventoryComp, theItem, theItem2, bEquippedItem, bRemovedItem, bOnlyUpdateQuantity, bOnlyUpdateDurability, bOnlyNotifyItemSwap, bUsedItem, bNotifyCraftQueue, ShowHUDNotification); }
	void NotifyInventoryPrimalItemSwapped(UPrimalInventoryComponent * inventoryComp, UPrimalItem * Item1, UPrimalItem * Item2) { NativeCall<void, UPrimalInventoryComponent *, UPrimalItem *, UPrimalItem *>(this, "UUI_Inventory.NotifyInventoryPrimalItemSwapped", inventoryComp, Item1, Item2); }
	void OnDownloadDinoRequestFinished(bool Success) { NativeCall<void, bool>(this, "UUI_Inventory.OnDownloadDinoRequestFinished", Success); }
	bool OnDragOverEx(FGeometry MyGeometry, FDragDropEvent DragEvent) { return NativeCall<bool, FGeometry, FDragDropEvent>(this, "UUI_Inventory.OnDragOverEx", MyGeometry, DragEvent); }
	bool OnDropWidgetEx(FGeometry MyGeometry, FDragDropEvent DragEvent) { return NativeCall<bool, FGeometry, FDragDropEvent>(this, "UUI_Inventory.OnDropWidgetEx", MyGeometry, DragEvent); }
	void OnFolderNameCommited(FString FolderName) { NativeCall<void, FString>(this, "UUI_Inventory.OnFolderNameCommited", FolderName); }
	void OnHide() { NativeCall<void>(this, "UUI_Inventory.OnHide"); }
	void OnHighlightedWidget(UWidget * HighlightedWidget) { NativeCall<void, UWidget *>(this, "UUI_Inventory.OnHighlightedWidget", HighlightedWidget); }
	void OnHoldSelectButton() { NativeCall<void>(this, "UUI_Inventory.OnHoldSelectButton"); }
	bool OnMimickDroppedWidget(UWidget * DroppedWidget, UWidget * DroppedOnWidget) { return NativeCall<bool, UWidget *, UWidget *>(this, "UUI_Inventory.OnMimickDroppedWidget", DroppedWidget, DroppedOnWidget); }
	void OnShow() { NativeCall<void>(this, "UUI_Inventory.OnShow"); }
	void OnUploadedDinosChanged() { NativeCall<void>(this, "UUI_Inventory.OnUploadedDinosChanged"); }
	void OnUploadedDinosListingsLoaded(const TArray<FARKTributeDinoListing> * DinosListings) { NativeCall<void, const TArray<FARKTributeDinoListing> *>(this, "UUI_Inventory.OnUploadedDinosListingsLoaded", DinosListings); }
	void QuickActionItemSlotDoubleClicked(UDataListEntryButton * theButton) { NativeCall<void, UDataListEntryButton *>(this, "UUI_Inventory.QuickActionItemSlotDoubleClicked", theButton); }
	void RefreshArk() { NativeCall<void>(this, "UUI_Inventory.RefreshArk"); }
	void RefreshInventoryKeyBindings() { NativeCall<void>(this, "UUI_Inventory.RefreshInventoryKeyBindings"); }
	void RefreshItemLists() { NativeCall<void>(this, "UUI_Inventory.RefreshItemLists"); }
	void RefreshQuickSlots() { NativeCall<void>(this, "UUI_Inventory.RefreshQuickSlots"); }
	void RemoveAmmo(UDataListEntryWidget * Widget) { NativeCall<void, UDataListEntryWidget *>(this, "UUI_Inventory.RemoveAmmo", Widget); }
	void RemoveSkin(UDataListEntryWidget * Widget) { NativeCall<void, UDataListEntryWidget *>(this, "UUI_Inventory.RemoveSkin", Widget); }
	void RemoveWeaponAccessory(UDataListEntryWidget * Widget) { NativeCall<void, UDataListEntryWidget *>(this, "UUI_Inventory.RemoveWeaponAccessory", Widget); }
	void RenameFolder(UDataListEntryWidget * Widget) { NativeCall<void, UDataListEntryWidget *>(this, "UUI_Inventory.RenameFolder", Widget); }
	void RepairItem(UDataListEntryWidget * Widget) { NativeCall<void, UDataListEntryWidget *>(this, "UUI_Inventory.RepairItem", Widget); }
	bool RestoreHighlightedState() { return NativeCall<bool>(this, "UUI_Inventory.RestoreHighlightedState"); }
	void SetArkTributeLimits(bool LimitItems, bool LimitDinos, bool LimitCharacters, int MaxItems, int MaxDinos, int MaxCharacters) { NativeCall<void, bool, bool, bool, int, int, int>(this, "UUI_Inventory.SetArkTributeLimits", LimitItems, LimitDinos, LimitCharacters, MaxItems, MaxDinos, MaxCharacters); }
	void SetInventoryAnimVisible(bool bVisible) { NativeCall<void, bool>(this, "UUI_Inventory.SetInventoryAnimVisible", bVisible); }
	void SetInventoryVisibility(bool bVisible) { NativeCall<void, bool>(this, "UUI_Inventory.SetInventoryVisibility", bVisible); }
	void SetLastSelectedDataList(UDataListPanel * InDatalist) { NativeCall<void, UDataListPanel *>(this, "UUI_Inventory.SetLastSelectedDataList", InDatalist); }
	void SetupSpecialWidgetAdjacents(UWidget * InWidget) { NativeCall<void, UWidget *>(this, "UUI_Inventory.SetupSpecialWidgetAdjacents", InWidget); }
	void ShowBeforeUsingConfirmationDialog(UPrimalItem * Item) { NativeCall<void, UPrimalItem *>(this, "UUI_Inventory.ShowBeforeUsingConfirmationDialog", Item); }
	void ShowDinoAncestry() { NativeCall<void>(this, "UUI_Inventory.ShowDinoAncestry"); }
	void SplitStack_All(UDataListEntryWidget * Widget) { NativeCall<void, UDataListEntryWidget *>(this, "UUI_Inventory.SplitStack_All", Widget); }
	void SplitStack_Amount(UDataListEntryWidget * Widget, unsigned int Amount) { NativeCall<void, UDataListEntryWidget *, unsigned int>(this, "UUI_Inventory.SplitStack_Amount", Widget, Amount); }
	void SplitStack_Half(UDataListEntryWidget * Widget) { NativeCall<void, UDataListEntryWidget *>(this, "UUI_Inventory.SplitStack_Half", Widget); }
	void SplitStack_One(UDataListEntryWidget * Widget) { NativeCall<void, UDataListEntryWidget *>(this, "UUI_Inventory.SplitStack_One", Widget); }
	void StoreHighlightedState() { NativeCall<void>(this, "UUI_Inventory.StoreHighlightedState"); }
	void Tick_Implementation(FGeometry MyGeometry, float InDeltaTime) { NativeCall<void, FGeometry, float>(this, "UUI_Inventory.Tick_Implementation", MyGeometry, InDeltaTime); }
	void TransferAll(bool bFromRemoteInventory) { NativeCall<void, bool>(this, "UUI_Inventory.TransferAll", bFromRemoteInventory); }
	void TransferItem(UDataListEntryWidget * Widget, int RequestedQty) { NativeCall<void, UDataListEntryWidget *, int>(this, "UUI_Inventory.TransferItem", Widget, RequestedQty); }
	void TravelToAnotherServer() { NativeCall<void>(this, "UUI_Inventory.TravelToAnotherServer"); }
	void UnequipItem(UDataListEntryWidget * Widget) { NativeCall<void, UDataListEntryWidget *>(this, "UUI_Inventory.UnequipItem", Widget); }
	void UpdateHighlightedPanelWidgets(UDataListPanel * Panel, FLinearColor OverrideHighlightColor) { NativeCall<void, UDataListPanel *, FLinearColor>(this, "UUI_Inventory.UpdateHighlightedPanelWidgets", Panel, OverrideHighlightColor); }
	void UpdateHighlightedWidgets(TArray<UWidget *> Widgets) { NativeCall<void, TArray<UWidget *>>(this, "UUI_Inventory.UpdateHighlightedWidgets", Widgets); }
	void UpdateQuickBarScaling() { NativeCall<void>(this, "UUI_Inventory.UpdateQuickBarScaling"); }
	void UploadCharacterData() { NativeCall<void>(this, "UUI_Inventory.UploadCharacterData"); }
	void UseItem(UDataListEntryWidget * Widget) { NativeCall<void, UDataListEntryWidget *>(this, "UUI_Inventory.UseItem", Widget); }
};

