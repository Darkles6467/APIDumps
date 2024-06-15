#pragma once

#include "BaseDeclarations.h"
#include "UContextMenu.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UContextMenu_InventorySort : UContextMenu
{
	char __padding[0x8L];

	// Functions

	void HandleActionAlphabetical(UContextMenuItem * Item) { NativeCall<void, UContextMenuItem *>(this, "UContextMenu_InventorySort.HandleActionAlphabetical", Item); }
	void HandleActionSpoilTimer(UContextMenuItem * Item) { NativeCall<void, UContextMenuItem *>(this, "UContextMenu_InventorySort.HandleActionSpoilTimer", Item); }
	void HandleActionUnsort(UContextMenuItem * Item) { NativeCall<void, UContextMenuItem *>(this, "UContextMenu_InventorySort.HandleActionUnsort", Item); }
	void HandleActionWeight(UContextMenuItem * Item) { NativeCall<void, UContextMenuItem *>(this, "UContextMenu_InventorySort.HandleActionWeight", Item); }
	void PopulateRootMenu(UContextMenu * ContextMenu) { NativeCall<void, UContextMenu *>(this, "UContextMenu_InventorySort.PopulateRootMenu", ContextMenu); }
};

