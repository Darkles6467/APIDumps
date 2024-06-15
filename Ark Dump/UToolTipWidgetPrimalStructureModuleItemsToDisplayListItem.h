#pragma once

#include "BaseDeclarations.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UToolTipWidgetPrimalStructureModuleItemsToDisplayListItem : UUserWidget
{
	char __padding[0x10L];
	UImage * ItemIconImageField() { return GetNativePointerField<UImage *>(this, "UToolTipWidgetPrimalStructureModuleItemsToDisplayListItem.ItemIconImage"); }
	UTextBlock * ItemQuantityTextBlockField() { return GetNativePointerField<UTextBlock *>(this, "UToolTipWidgetPrimalStructureModuleItemsToDisplayListItem.ItemQuantityTextBlock"); }

	// Functions

	void InitListItem(UTexture2D * NewIcon, int NewQuantity) { NativeCall<void, UTexture2D *, int>(this, "UToolTipWidgetPrimalStructureModuleItemsToDisplayListItem.InitListItem", NewIcon, NewQuantity); }
	void SetItemIcon(UTexture2D * NewIcon) { NativeCall<void, UTexture2D *>(this, "UToolTipWidgetPrimalStructureModuleItemsToDisplayListItem.SetItemIcon", NewIcon); }
	void SetItemQuantity(int NewQuantity) { NativeCall<void, int>(this, "UToolTipWidgetPrimalStructureModuleItemsToDisplayListItem.SetItemQuantity", NewQuantity); }
};

