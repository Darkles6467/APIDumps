#pragma once

#include "BaseDeclarations.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FItemToDisplayInStructureTooltip.h"

struct UToolTipWidgetPrimalStructureModuleItemsToDisplay : UUserWidget
{
	char __padding[0x18L];
	UTextBlock * HeaderTextBlockField() { return GetNativePointerField<UTextBlock *>(this, "UToolTipWidgetPrimalStructureModuleItemsToDisplay.HeaderTextBlock"); }

	// Functions

	void InitModule(FString NewHeader, TArray<FItemToDisplayInStructureTooltip> NewItems) { NativeCall<void, FString, TArray<FItemToDisplayInStructureTooltip>>(this, "UToolTipWidgetPrimalStructureModuleItemsToDisplay.InitModule", NewHeader, NewItems); }
	void SetHeaderText(FString NewHeader) { NativeCall<void, FString>(this, "UToolTipWidgetPrimalStructureModuleItemsToDisplay.SetHeaderText", NewHeader); }
	void SetItemsToDisplay(TArray<FItemToDisplayInStructureTooltip> NewItems) { NativeCall<void, TArray<FItemToDisplayInStructureTooltip>>(this, "UToolTipWidgetPrimalStructureModuleItemsToDisplay.SetItemsToDisplay", NewItems); }
};

