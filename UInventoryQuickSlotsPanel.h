#pragma once

#include "BaseDeclarations.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UInventoryQuickSlotsPanel : UPrimalUI
{
	char __padding[0x10L];
	UUI_Inventory * InventoryUIField() { return GetNativePointerField<UUI_Inventory *>(this, "UInventoryQuickSlotsPanel.InventoryUI"); }
	UDataListPanel * QuickSlotDataListField() { return GetNativePointerField<UDataListPanel *>(this, "UInventoryQuickSlotsPanel.QuickSlotDataList"); }

	// Functions

	void Init(UUI_Inventory * InInventory) { NativeCall<void, UUI_Inventory *>(this, "UInventoryQuickSlotsPanel.Init", InInventory); }
	void RefreshPanel(IDataListProviderInterface * ProviderInterface) { NativeCall<void, IDataListProviderInterface *>(this, "UInventoryQuickSlotsPanel.RefreshPanel", ProviderInterface); }
};

