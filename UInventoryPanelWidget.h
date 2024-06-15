#pragma once

#include "BaseDeclarations.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UInventoryPanelWidget : UPrimalUI
{
	char __padding[0x238L];
	FName& TabBgSwitcherNameField() { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.TabBgSwitcherName"); }
	FName& InventoryButtonNameField() { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.InventoryButtonName"); }
	FName& CraftingButtonNameField() { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.CraftingButtonName"); }
	FName& CreaturesButtonNameField() { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.CreaturesButtonName"); }
	FName& InventoryEnabledEffectNameField() { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.InventoryEnabledEffectName"); }
	FName& CraftingEnabledEffectNameField() { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.CraftingEnabledEffectName"); }
	FName& SearchTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.SearchTextBoxName"); }
	FName& TooltipToggleButtonNameField() { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.TooltipToggleButtonName"); }
	FName& SortMenuButtonNameField() { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.SortMenuButtonName"); }
	FName& SortMenuAnchorNameField() { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.SortMenuAnchorName"); }
	FName& ShowAllButtonNameField() { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.ShowAllButtonName"); }
	FName& ShowEngramsButtonNameField() { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.ShowEngramsButtonName"); }
	FName& ShowEngramsBoxNameField() { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.ShowEngramsBoxName"); }
	FName& TransferAllButtonNameField() { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.TransferAllButtonName"); }
	FName& DropAllButtonNameField() { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.DropAllButtonName"); }
	FName& NewFolderButtonNameField() { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.NewFolderButtonName"); }
	FName& DataListSwitcherNameField() { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.DataListSwitcherName"); }
	FName& InventoryDataListNameField() { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.InventoryDataListName"); }
	FName& CraftingDataListNameField() { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.CraftingDataListName"); }
	FName& CraftingQueueHeaderBoxNameField() { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.CraftingQueueHeaderBoxName"); }
	FName& CraftingQueueItemsBoxNameField() { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.CraftingQueueItemsBoxName"); }
	TArray<FName>& CraftQueueItemButtonNamesField() { return *GetNativePointerField<TArray<FName>*>(this, "UInventoryPanelWidget.CraftQueueItemButtonNames"); }
	FName& HeaderBoxNameField() { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.HeaderBoxName"); }
	FName& InventoryTabLabelNameField() { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.InventoryTabLabelName"); }
	FName& CraftingTabLabelNameField() { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.CraftingTabLabelName"); }
	FName& ArkCreaturesPanelNameField() { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.ArkCreaturesPanelName"); }
	FName& ClearCraftingQueueButtonNameField() { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.ClearCraftingQueueButtonName"); }
	FName& ReceivingItemsLabelNameField() { return *GetNativePointerField<FName*>(this, "UInventoryPanelWidget.ReceivingItemsLabelName"); }
	FLinearColor& SwitcherTextActiveColorField() { return *GetNativePointerField<FLinearColor*>(this, "UInventoryPanelWidget.SwitcherTextActiveColor"); }
	FLinearColor& SwitcherTextInactiveColorField() { return *GetNativePointerField<FLinearColor*>(this, "UInventoryPanelWidget.SwitcherTextInactiveColor"); }
	bool& bIsRemoteInventoryField() { return *GetNativePointerField<bool*>(this, "UInventoryPanelWidget.bIsRemoteInventory"); }
	UCustomButtonWidget * TooltipToggleButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UInventoryPanelWidget.TooltipToggleButton"); }
	UMenuAnchor * SortMenuAnchorField() { return GetNativePointerField<UMenuAnchor *>(this, "UInventoryPanelWidget.SortMenuAnchor"); }
	UCustomButtonWidget * ShowAllButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UInventoryPanelWidget.ShowAllButton"); }
	UCustomButtonWidget * ShowEngramsButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UInventoryPanelWidget.ShowEngramsButton"); }
	UCustomButtonWidget * ShowUnlearnedEngramsButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UInventoryPanelWidget.ShowUnlearnedEngramsButton"); }
	UDataListPanel * InventoryDataListField() { return GetNativePointerField<UDataListPanel *>(this, "UInventoryPanelWidget.InventoryDataList"); }
	UDataListPanel * CraftingDataListField() { return GetNativePointerField<UDataListPanel *>(this, "UInventoryPanelWidget.CraftingDataList"); }
	UInventoryArkCreaturesPanel * ArkCreaturesPanelField() { return GetNativePointerField<UInventoryArkCreaturesPanel *>(this, "UInventoryPanelWidget.ArkCreaturesPanel"); }
	UInventoryQuickSlotsPanel * QuickSlotsPanelField() { return GetNativePointerField<UInventoryQuickSlotsPanel *>(this, "UInventoryPanelWidget.QuickSlotsPanel"); }
	UTextBlock * InventoryTabLabelField() { return GetNativePointerField<UTextBlock *>(this, "UInventoryPanelWidget.InventoryTabLabel"); }
	UTextBlock * CraftingTabLabelField() { return GetNativePointerField<UTextBlock *>(this, "UInventoryPanelWidget.CraftingTabLabel"); }
	UTextBlock * ReceivingItemsLabelField() { return GetNativePointerField<UTextBlock *>(this, "UInventoryPanelWidget.ReceivingItemsLabel"); }
	UUI_Inventory * InventoryUIField() { return GetNativePointerField<UUI_Inventory *>(this, "UInventoryPanelWidget.InventoryUI"); }
	UImage * MaxInventoryImageField() { return GetNativePointerField<UImage *>(this, "UInventoryPanelWidget.MaxInventoryImage"); }
	bool& bIsCurrentlyCraftingField() { return *GetNativePointerField<bool*>(this, "UInventoryPanelWidget.bIsCurrentlyCrafting"); }
	bool& bWaitingToPutItemTransferInFolderField() { return *GetNativePointerField<bool*>(this, "UInventoryPanelWidget.bWaitingToPutItemTransferInFolder"); }
	bool& WaitingToPutItemTransferInFolderLocalField() { return *GetNativePointerField<bool*>(this, "UInventoryPanelWidget.WaitingToPutItemTransferInFolderLocal"); }
	FString& WaitingToPutItemTransferInFolderNameField() { return *GetNativePointerField<FString*>(this, "UInventoryPanelWidget.WaitingToPutItemTransferInFolderName"); }
	int& WaitingToPutItemTransferInFolderProviderTypeField() { return *GetNativePointerField<int*>(this, "UInventoryPanelWidget.WaitingToPutItemTransferInFolderProviderType"); }

	// Functions

	void ClearSearchBox() { NativeCall<void>(this, "UInventoryPanelWidget.ClearSearchBox"); }
	void ClickedButton(UWidget * clickedButton) { NativeCall<void, UWidget *>(this, "UInventoryPanelWidget.ClickedButton", clickedButton); }
	void DelayedMoveAddedItemToFolder(FString CFodlerName, IDataListProviderInterface * CFolderDataListProvider, int ProviderType) { NativeCall<void, FString, IDataListProviderInterface *, int>(this, "UInventoryPanelWidget.DelayedMoveAddedItemToFolder", CFodlerName, CFolderDataListProvider, ProviderType); }
	UDataListPanel * GetActiveDataList() { return NativeCall<UDataListPanel *>(this, "UInventoryPanelWidget.GetActiveDataList"); }
	void GetCraftables(TArray<IDataListEntryInterface *> * OutArray) { NativeCall<void, TArray<IDataListEntryInterface *> *>(this, "UInventoryPanelWidget.GetCraftables", OutArray); }
	UDataListPanel * GetInventoryDataList() { return NativeCall<UDataListPanel *>(this, "UInventoryPanelWidget.GetInventoryDataList"); }
	EInventorySortType::Type GetSortType() { return NativeCall<EInventorySortType::Type>(this, "UInventoryPanelWidget.GetSortType"); }
	FString * GetSortTypeShortName(FString * result, EInventorySortType::Type SortType) { return NativeCall<FString *, FString *, EInventorySortType::Type>(this, "UInventoryPanelWidget.GetSortTypeShortName", result, SortType); }
	void GotoNextTab() { NativeCall<void>(this, "UInventoryPanelWidget.GotoNextTab"); }
	bool HasEngrams(const TArray<IDataListEntryInterface *> * CraftableArray) { return NativeCall<bool, const TArray<IDataListEntryInterface *> *>(this, "UInventoryPanelWidget.HasEngrams", CraftableArray); }
	void Init(UUI_Inventory * InInventoryUI) { NativeCall<void, UUI_Inventory *>(this, "UInventoryPanelWidget.Init", InInventoryUI); }
	bool IsShowingCraftables() { return NativeCall<bool>(this, "UInventoryPanelWidget.IsShowingCraftables"); }
	void OnAddedItemToCustomFolder(FString CFolderName, IDataListEntryInterface * item, IDataListProviderInterface * CFolderDataListProvider, int ProviderType) { NativeCall<void, FString, IDataListEntryInterface *, IDataListProviderInterface *, int>(this, "UInventoryPanelWidget.OnAddedItemToCustomFolder", CFolderName, item, CFolderDataListProvider, ProviderType); }
	void OnCraftingItemDoubleClicked(UDataListEntryButton * theButton) { NativeCall<void, UDataListEntryButton *>(this, "UInventoryPanelWidget.OnCraftingItemDoubleClicked", theButton); }
	void OnCraftingItemSelected(UDataListEntryButton * theButton) { NativeCall<void, UDataListEntryButton *>(this, "UInventoryPanelWidget.OnCraftingItemSelected", theButton); }
	void OnCustomFolderDeleted(FString CFolderName, const TArray<IDataListEntryInterface *> * Items) { NativeCall<void, FString, const TArray<IDataListEntryInterface *> *>(this, "UInventoryPanelWidget.OnCustomFolderDeleted", CFolderName, Items); }
	void OnCustomFolderItemDeleted(FString CFolderName, IDataListEntryInterface * item) { NativeCall<void, FString, IDataListEntryInterface *>(this, "UInventoryPanelWidget.OnCustomFolderItemDeleted", CFolderName, item); }
	void OnCustomFoldersSwapped(FString CFolderName1, FString CFolderName2) { NativeCall<void, FString, FString>(this, "UInventoryPanelWidget.OnCustomFoldersSwapped", CFolderName1, CFolderName2); }
	void OnDataListRequestUpdate(UDataListPanel * DataList) { NativeCall<void, UDataListPanel *>(this, "UInventoryPanelWidget.OnDataListRequestUpdate", DataList); }
	void OnFolderPathChange(FString CFolderName) { NativeCall<void, FString>(this, "UInventoryPanelWidget.OnFolderPathChange", CFolderName); }
	void OnGamepadPressSortIcon() { NativeCall<void>(this, "UInventoryPanelWidget.OnGamepadPressSortIcon"); }
	void OnInventoryChanged() { NativeCall<void>(this, "UInventoryPanelWidget.OnInventoryChanged"); }
	void OnInventoryItemDoubleClicked(UDataListEntryButton * theButton) { NativeCall<void, UDataListEntryButton *>(this, "UInventoryPanelWidget.OnInventoryItemDoubleClicked", theButton); }
	void OnInventoryItemSelected(UDataListEntryButton * theButton) { NativeCall<void, UDataListEntryButton *>(this, "UInventoryPanelWidget.OnInventoryItemSelected", theButton); }
	void OnInventoryPrimalItemAdded(UPrimalInventoryComponent * inventoryComp, UPrimalItem * theItem, bool bEquippedItem) { NativeCall<void, UPrimalInventoryComponent *, UPrimalItem *, bool>(this, "UInventoryPanelWidget.OnInventoryPrimalItemAdded", inventoryComp, theItem, bEquippedItem); }
	void OnTransferItemToRemoteCustomFolder(FString CFodlerName, IDataListEntryInterface * item, IDataListProviderInterface * CFolderDataListProvider, int ProviderType) { NativeCall<void, FString, IDataListEntryInterface *, IDataListProviderInterface *, int>(this, "UInventoryPanelWidget.OnTransferItemToRemoteCustomFolder", CFodlerName, item, CFolderDataListProvider, ProviderType); }
	void ProcessArkTributeExpirationTimes() { NativeCall<void>(this, "UInventoryPanelWidget.ProcessArkTributeExpirationTimes"); }
	void RefreshItemLists() { NativeCall<void>(this, "UInventoryPanelWidget.RefreshItemLists"); }
	void SearchTextChanged(const FText * Text) { NativeCall<void, const FText *>(this, "UInventoryPanelWidget.SearchTextChanged", Text); }
	void SetupInventory(UPrimalInventoryComponent * InventoryComponent, bool InbIsRemoteInventory) { NativeCall<void, UPrimalInventoryComponent *, bool>(this, "UInventoryPanelWidget.SetupInventory", InventoryComponent, InbIsRemoteInventory); }
	void ShowArkCreatures() { NativeCall<void>(this, "UInventoryPanelWidget.ShowArkCreatures"); }
	void ShowCraftables() { NativeCall<void>(this, "UInventoryPanelWidget.ShowCraftables"); }
	void ShowItems() { NativeCall<void>(this, "UInventoryPanelWidget.ShowItems"); }
	void ShowQuickSlotPanel() { NativeCall<void>(this, "UInventoryPanelWidget.ShowQuickSlotPanel"); }
	void Sort(EInventorySortType::Type SortType) { NativeCall<void, EInventorySortType::Type>(this, "UInventoryPanelWidget.Sort", SortType); }
	void SortAlphabetical() { NativeCall<void>(this, "UInventoryPanelWidget.SortAlphabetical"); }
	void SortBySpoilTime() { NativeCall<void>(this, "UInventoryPanelWidget.SortBySpoilTime"); }
	void SortByWeight() { NativeCall<void>(this, "UInventoryPanelWidget.SortByWeight"); }
	void StopTimers() { NativeCall<void>(this, "UInventoryPanelWidget.StopTimers"); }
	void Tick_Implementation(FGeometry MyGeometry, float InDeltaTime) { NativeCall<void, FGeometry, float>(this, "UInventoryPanelWidget.Tick_Implementation", MyGeometry, InDeltaTime); }
	void UpdateButtons() { NativeCall<void>(this, "UInventoryPanelWidget.UpdateButtons"); }
	void UpdateCraftablesFolders(int DataListType) { NativeCall<void, int>(this, "UInventoryPanelWidget.UpdateCraftablesFolders", DataListType); }
	void UpdateItemsFolders(int DataListType) { NativeCall<void, int>(this, "UInventoryPanelWidget.UpdateItemsFolders", DataListType); }
	UInventoryArkCreaturesPanel * GetArkCreaturesPanel() { return NativeCall<UInventoryArkCreaturesPanel *>(this, "UInventoryPanelWidget.GetArkCreaturesPanel"); }
	bool IsShowingCreatures() { return NativeCall<bool>(this, "UInventoryPanelWidget.IsShowingCreatures"); }
	bool IsShowingItems() { return NativeCall<bool>(this, "UInventoryPanelWidget.IsShowingItems"); }
};

