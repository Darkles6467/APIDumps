#pragma once

#include "BaseDeclarations.h"
#include "UContextMenu.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UContextMenu_PrimalItem : UContextMenu
{
	char __padding[0x30L];
	int& SplitAmountValueField() { return *GetNativePointerField<int*>(this, "UContextMenu_PrimalItem.SplitAmountValue"); }
	int& SplitAmountMaxField() { return *GetNativePointerField<int*>(this, "UContextMenu_PrimalItem.SplitAmountMax"); }
	int& CraftAmountValueField() { return *GetNativePointerField<int*>(this, "UContextMenu_PrimalItem.CraftAmountValue"); }
	int& CraftAmountMaxField() { return *GetNativePointerField<int*>(this, "UContextMenu_PrimalItem.CraftAmountMax"); }

	// Functions

	UUI_Inventory * GetInventoryUI() { return NativeCall<UUI_Inventory *>(this, "UContextMenu_PrimalItem.GetInventoryUI"); }
	void HandleActionCraftAll(UContextMenuItem * Item) { NativeCall<void, UContextMenuItem *>(this, "UContextMenu_PrimalItem.HandleActionCraftAll", Item); }
	void HandleActionCraftAmount(UContextMenuItem * Item) { NativeCall<void, UContextMenuItem *>(this, "UContextMenu_PrimalItem.HandleActionCraftAmount", Item); }
	void HandleActionCraftOne(UContextMenuItem * Item) { NativeCall<void, UContextMenuItem *>(this, "UContextMenu_PrimalItem.HandleActionCraftOne", Item); }
	void HandleActionCustom(UContextMenuItem * Item, const FName * ContextItemName) { NativeCall<void, UContextMenuItem *, const FName *>(this, "UContextMenu_PrimalItem.HandleActionCustom", Item, ContextItemName); }
	void HandleActionDeleteFolder(UContextMenuItem * Item) { NativeCall<void, UContextMenuItem *>(this, "UContextMenu_PrimalItem.HandleActionDeleteFolder", Item); }
	void HandleActionDiscard(UContextMenuItem * Item) { NativeCall<void, UContextMenuItem *>(this, "UContextMenu_PrimalItem.HandleActionDiscard", Item); }
	void HandleActionEquip(UContextMenuItem * Item) { NativeCall<void, UContextMenuItem *>(this, "UContextMenu_PrimalItem.HandleActionEquip", Item); }
	void HandleActionEquipAllInFolder(UContextMenuItem * Item) { NativeCall<void, UContextMenuItem *>(this, "UContextMenu_PrimalItem.HandleActionEquipAllInFolder", Item); }
	void HandleActionFavorite(UContextMenuItem * Item) { NativeCall<void, UContextMenuItem *>(this, "UContextMenu_PrimalItem.HandleActionFavorite", Item); }
	void HandleActionRemoveAccessory(UContextMenuItem * Item) { NativeCall<void, UContextMenuItem *>(this, "UContextMenu_PrimalItem.HandleActionRemoveAccessory", Item); }
	void HandleActionRemoveAmmo(UContextMenuItem * Item) { NativeCall<void, UContextMenuItem *>(this, "UContextMenu_PrimalItem.HandleActionRemoveAmmo", Item); }
	void HandleActionRemoveSkin(UContextMenuItem * Item) { NativeCall<void, UContextMenuItem *>(this, "UContextMenu_PrimalItem.HandleActionRemoveSkin", Item); }
	void HandleActionRenameFolder(UContextMenuItem * Item) { NativeCall<void, UContextMenuItem *>(this, "UContextMenu_PrimalItem.HandleActionRenameFolder", Item); }
	void HandleActionRepair(UContextMenuItem * Item) { NativeCall<void, UContextMenuItem *>(this, "UContextMenu_PrimalItem.HandleActionRepair", Item); }
	void HandleActionSplitAll(UContextMenuItem * Item) { NativeCall<void, UContextMenuItem *>(this, "UContextMenu_PrimalItem.HandleActionSplitAll", Item); }
	void HandleActionSplitAmount(UContextMenuItem * Item) { NativeCall<void, UContextMenuItem *>(this, "UContextMenu_PrimalItem.HandleActionSplitAmount", Item); }
	void HandleActionSplitHalf(UContextMenuItem * Item) { NativeCall<void, UContextMenuItem *>(this, "UContextMenu_PrimalItem.HandleActionSplitHalf", Item); }
	void HandleActionSplitOne(UContextMenuItem * Item) { NativeCall<void, UContextMenuItem *>(this, "UContextMenu_PrimalItem.HandleActionSplitOne", Item); }
	void HandleActionTransfer(UContextMenuItem * Item) { NativeCall<void, UContextMenuItem *>(this, "UContextMenu_PrimalItem.HandleActionTransfer", Item); }
	void HandleActionUnequip(UContextMenuItem * Item) { NativeCall<void, UContextMenuItem *>(this, "UContextMenu_PrimalItem.HandleActionUnequip", Item); }
	void HandleActionUse(UContextMenuItem * Item) { NativeCall<void, UContextMenuItem *>(this, "UContextMenu_PrimalItem.HandleActionUse", Item); }
	void HandleCraftAmountValueCommit(UContextMenuItem_Spinner * Item, int InValue, ETextCommit::Type CommitMethod) { NativeCall<void, UContextMenuItem_Spinner *, int, ETextCommit::Type>(this, "UContextMenu_PrimalItem.HandleCraftAmountValueCommit", Item, InValue, CommitMethod); }
	void HandleSplitAmountValueCommit(UContextMenuItem_Spinner * Item, int InValue, ETextCommit::Type CommitMethod) { NativeCall<void, UContextMenuItem_Spinner *, int, ETextCommit::Type>(this, "UContextMenu_PrimalItem.HandleSplitAmountValueCommit", Item, InValue, CommitMethod); }
	void InitializeMe(UContextMenu * ParentContextMenu, UMenuAnchor * ParentMenuAnchor, UWidget * ParentContextWidget) { NativeCall<void, UContextMenu *, UMenuAnchor *, UWidget *>(this, "UContextMenu_PrimalItem.InitializeMe", ParentContextMenu, ParentMenuAnchor, ParentContextWidget); }
	bool IsWeaponItemActive(UPrimalItem * item) { return NativeCall<bool, UPrimalItem *>(this, "UContextMenu_PrimalItem.IsWeaponItemActive", item); }
	void PopulateCraftMenu(UContextMenu * ContextMenu) { NativeCall<void, UContextMenu *>(this, "UContextMenu_PrimalItem.PopulateCraftMenu", ContextMenu); }
	void PopulateFolderMenu(UContextMenu * ContextMenu) { NativeCall<void, UContextMenu *>(this, "UContextMenu_PrimalItem.PopulateFolderMenu", ContextMenu); }
	void PopulateRootMenu(UContextMenu * ContextMenu) { NativeCall<void, UContextMenu *>(this, "UContextMenu_PrimalItem.PopulateRootMenu", ContextMenu); }
	void PopulateSubmenuCraftAmount(UContextMenu * ContextMenu) { NativeCall<void, UContextMenu *>(this, "UContextMenu_PrimalItem.PopulateSubmenuCraftAmount", ContextMenu); }
	void PopulateSubmenuCustom(UContextMenu * ContextMenu, const FName * ContextItemName) { NativeCall<void, UContextMenu *, const FName *>(this, "UContextMenu_PrimalItem.PopulateSubmenuCustom", ContextMenu, ContextItemName); }
	void PopulateSubmenuRemove(UContextMenu * ContextMenu) { NativeCall<void, UContextMenu *>(this, "UContextMenu_PrimalItem.PopulateSubmenuRemove", ContextMenu); }
	void PopulateSubmenuSplitAmount(UContextMenu * ContextMenu) { NativeCall<void, UContextMenu *>(this, "UContextMenu_PrimalItem.PopulateSubmenuSplitAmount", ContextMenu); }
	void PopulateSubmenuSplitStack(UContextMenu * ContextMenu) { NativeCall<void, UContextMenu *>(this, "UContextMenu_PrimalItem.PopulateSubmenuSplitStack", ContextMenu); }
};

