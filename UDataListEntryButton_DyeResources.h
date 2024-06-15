#pragma once

#include "BaseDeclarations.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UDataListEntryButton_DyeResources : UPrimalUI
{
	char __padding[0x10L];
	UTextBlock * DisplayStringField() { return GetNativePointerField<UTextBlock *>(this, "UDataListEntryButton_DyeResources.DisplayString"); }
	UImage * ItemIconField() { return GetNativePointerField<UImage *>(this, "UDataListEntryButton_DyeResources.ItemIcon"); }

	// Functions

	void InitializeMe() { NativeCall<void>(this, "UDataListEntryButton_DyeResources.InitializeMe"); }
	void SetDisplayString(FString EntryString) { NativeCall<void, FString>(this, "UDataListEntryButton_DyeResources.SetDisplayString", EntryString); }
	void SetItemIcon(UMaterialInterface * aMat) { NativeCall<void, UMaterialInterface *>(this, "UDataListEntryButton_DyeResources.SetItemIcon", aMat); }
};

