#pragma once

#include "BaseDeclarations.h"
#include "UContextMenu.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UContextMenu_DinoGroupEntry : UContextMenu
{
	char __padding[0x20L];

	// Functions

	UUI_DinoOrderGroups * GetDinoOrderUI() { return NativeCall<UUI_DinoOrderGroups *>(this, "UContextMenu_DinoGroupEntry.GetDinoOrderUI"); }
	void HandleActionRemoveClass(UContextMenuItem * Item) { NativeCall<void, UContextMenuItem *>(this, "UContextMenu_DinoGroupEntry.HandleActionRemoveClass", Item); }
	void HandleActionRemoveDino(UContextMenuItem * Item) { NativeCall<void, UContextMenuItem *>(this, "UContextMenu_DinoGroupEntry.HandleActionRemoveDino", Item); }
	void HandleActionSetGroup(UContextMenuItem * Item) { NativeCall<void, UContextMenuItem *>(this, "UContextMenu_DinoGroupEntry.HandleActionSetGroup", Item); }
	void InitializeMe(UContextMenu * ParentContextMenu, UMenuAnchor * ParentMenuAnchor, UWidget * ParentContextWidget) { NativeCall<void, UContextMenu *, UMenuAnchor *, UWidget *>(this, "UContextMenu_DinoGroupEntry.InitializeMe", ParentContextMenu, ParentMenuAnchor, ParentContextWidget); }
	void PopulateRootMenu(UContextMenu * ContextMenu) { NativeCall<void, UContextMenu *>(this, "UContextMenu_DinoGroupEntry.PopulateRootMenu", ContextMenu); }
};

