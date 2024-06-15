#pragma once

#include "BaseDeclarations.h"
#include "UPrimalUI.h"

struct UPrimalSubMenuUI : UPrimalUI
{
	char __padding[0x10L];
	UUI_Hub * ParentHubUIField() { return GetNativePointerField<UUI_Hub *>(this, "UPrimalSubMenuUI.ParentHubUI"); }

	// Functions

	void HighlightDefaultWidget(UPanelWidget * RestrictToPanel) { NativeCall<void, UPanelWidget *>(this, "UPrimalSubMenuUI.HighlightDefaultWidget", RestrictToPanel); }
	void InitializeSubMenu(UUI_Hub * Hub) { NativeCall<void, UUI_Hub *>(this, "UPrimalSubMenuUI.InitializeSubMenu", Hub); }
	void OnHide() { NativeCall<void>(this, "UPrimalSubMenuUI.OnHide"); }
	bool RestoreHighlightedState() { return NativeCall<bool>(this, "UPrimalSubMenuUI.RestoreHighlightedState"); }
	void StoreHighlightedState() { NativeCall<void>(this, "UPrimalSubMenuUI.StoreHighlightedState"); }
	UUI_Hub * GetParentHub() { return NativeCall<UUI_Hub *>(this, "UPrimalSubMenuUI.GetParentHub"); }
};

