#pragma once

#include "BaseDeclarations.h"
#include "UUserWidget.h"

struct UContextMenu : UUserWidget
{
	char __padding[0x58L];
	FName& CustomNameField() { return *GetNativePointerField<FName*>(this, "UContextMenu.CustomName"); }
	UMenuAnchor * ParentMenuAnchorField() { return GetNativePointerField<UMenuAnchor *>(this, "UContextMenu.ParentMenuAnchor"); }

	// Functions

	void FActiveMenuItemChanged(UContextMenu * InParam1, UContextMenuItem * InParam2, UContextMenuItem * InParam3) { NativeCall<void, UContextMenu *, UContextMenuItem *, UContextMenuItem *>(this, "UContextMenu.FActiveMenuItemChanged", InParam1, InParam2, InParam3); }
	void CloseMenu(bool CloseParents) { NativeCall<void, bool>(this, "UContextMenu.CloseMenu", CloseParents); }
	void FPopulateContextMenu(UContextMenu * InParam1) { NativeCall<void, UContextMenu *>(this, "UContextMenu.FPopulateContextMenu", InParam1); }
	void FPopulateContextMenuCustom(UContextMenu * InParam1, const FName * InParam2) { NativeCall<void, UContextMenu *, const FName *>(this, "UContextMenu.FPopulateContextMenuCustom", InParam1, InParam2); }
	void InitializeMe(UContextMenu * ParentContextMenu, UMenuAnchor * ParentMenuAnchor, UWidget * ParentContextWidget) { NativeCall<void, UContextMenu *, UMenuAnchor *, UWidget *>(this, "UContextMenu.InitializeMe", ParentContextMenu, ParentMenuAnchor, ParentContextWidget); }
	void InternalPopulateMenu() { NativeCall<void>(this, "UContextMenu.InternalPopulateMenu"); }
	void SetActiveItem(UContextMenuItem * item) { NativeCall<void, UContextMenuItem *>(this, "UContextMenu.SetActiveItem", item); }
};

