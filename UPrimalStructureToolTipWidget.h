#pragma once

#include "BaseDeclarations.h"
#include "UToolTipWidget.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FItemToDisplayInStructureTooltip.h"

struct UPrimalStructureToolTipWidget : UToolTipWidget
{
	char __padding[0x60L];
	AShooterPlayerController * ForPCField() { return GetNativePointerField<AShooterPlayerController *>(this, "UPrimalStructureToolTipWidget.ForPC"); }
	UTextBlock * StructureNameLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalStructureToolTipWidget.StructureNameLabel"); }
	UTextBlock * HealthLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalStructureToolTipWidget.HealthLabel"); }
	UProgressBar * HealthBarField() { return GetNativePointerField<UProgressBar *>(this, "UPrimalStructureToolTipWidget.HealthBar"); }
	UPrimalRichTextBlock * RequirementsLabelField() { return GetNativePointerField<UPrimalRichTextBlock *>(this, "UPrimalStructureToolTipWidget.RequirementsLabel"); }
	UVerticalBox * ModulePanelField() { return GetNativePointerField<UVerticalBox *>(this, "UPrimalStructureToolTipWidget.ModulePanel"); }
	TArray<FItemToDisplayInStructureTooltip>& ItemsToDisplayInModuleField() { return *GetNativePointerField<TArray<FItemToDisplayInStructureTooltip>*>(this, "UPrimalStructureToolTipWidget.ItemsToDisplayInModule"); }

	// Functions

	void CreateModuleForItemsToDisplay(FString HeaderText, TArray<FItemToDisplayInStructureTooltip> ItemsToDisplay) { NativeCall<void, FString, TArray<FItemToDisplayInStructureTooltip>>(this, "UPrimalStructureToolTipWidget.CreateModuleForItemsToDisplay", HeaderText, ItemsToDisplay); }
	void InitToolTip(AShooterPlayerController * HUDOwner, const FString * ToolTipString, IDataListEntryInterface * DataListEntry) { NativeCall<void, AShooterPlayerController *, const FString *, IDataListEntryInterface *>(this, "UPrimalStructureToolTipWidget.InitToolTip", HUDOwner, ToolTipString, DataListEntry); }
	void UpdateToolTip(float DeltaSeconds) { NativeCall<void, float>(this, "UPrimalStructureToolTipWidget.UpdateToolTip", DeltaSeconds); }
};

