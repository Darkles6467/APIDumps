#pragma once

#include "BaseDeclarations.h"
#include "UToolTipWidget.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UPrimalItemToolTipWidget : UToolTipWidget
{
	char __padding[0x248L];
	FString& ItemNameLabelNameField() { return *GetNativePointerField<FString*>(this, "UPrimalItemToolTipWidget.ItemNameLabelName"); }
	FString& ItemQuantityLabelNameField() { return *GetNativePointerField<FString*>(this, "UPrimalItemToolTipWidget.ItemQuantityLabelName"); }
	FString& ItemDescriptionLabelNameField() { return *GetNativePointerField<FString*>(this, "UPrimalItemToolTipWidget.ItemDescriptionLabelName"); }
	FString& ItemTypeLabelNameField() { return *GetNativePointerField<FString*>(this, "UPrimalItemToolTipWidget.ItemTypeLabelName"); }
	FString& ItemSubTypeLabelNameField() { return *GetNativePointerField<FString*>(this, "UPrimalItemToolTipWidget.ItemSubTypeLabelName"); }
	FString& ItemIconImageNameField() { return *GetNativePointerField<FString*>(this, "UPrimalItemToolTipWidget.ItemIconImageName"); }
	FString& ItemWeightLabelNameField() { return *GetNativePointerField<FString*>(this, "UPrimalItemToolTipWidget.ItemWeightLabelName"); }
	FString& ItemStatsLabelNameField() { return *GetNativePointerField<FString*>(this, "UPrimalItemToolTipWidget.ItemStatsLabelName"); }
	FString& ItemDurabilityLabelNameField() { return *GetNativePointerField<FString*>(this, "UPrimalItemToolTipWidget.ItemDurabilityLabelName"); }
	FString& ItemQualityImageNameField() { return *GetNativePointerField<FString*>(this, "UPrimalItemToolTipWidget.ItemQualityImageName"); }
	FString& ItemSubtypePanelNameField() { return *GetNativePointerField<FString*>(this, "UPrimalItemToolTipWidget.ItemSubtypePanelName"); }
	FName& ItemStatsPanelNameField() { return *GetNativePointerField<FName*>(this, "UPrimalItemToolTipWidget.ItemStatsPanelName"); }
	FName& ItemCraftingPanelNameField() { return *GetNativePointerField<FName*>(this, "UPrimalItemToolTipWidget.ItemCraftingPanelName"); }
	FName& ItemCraftingRequirementsLabelNameField() { return *GetNativePointerField<FName*>(this, "UPrimalItemToolTipWidget.ItemCraftingRequirementsLabelName"); }
	FName& ItemCraftingTitleLabelNameField() { return *GetNativePointerField<FName*>(this, "UPrimalItemToolTipWidget.ItemCraftingTitleLabelName"); }
	FName& ItemCraftingQueueLabelNameField() { return *GetNativePointerField<FName*>(this, "UPrimalItemToolTipWidget.ItemCraftingQueueLabelName"); }
	FName& ItemCraftingProgressBarNameField() { return *GetNativePointerField<FName*>(this, "UPrimalItemToolTipWidget.ItemCraftingProgressBarName"); }
	FName& ItemCraftRepairInvReqLabelNameField() { return *GetNativePointerField<FName*>(this, "UPrimalItemToolTipWidget.ItemCraftRepairInvReqLabelName"); }
	FName& SpoilIntoItemPanelNameField() { return *GetNativePointerField<FName*>(this, "UPrimalItemToolTipWidget.SpoilIntoItemPanelName"); }
	FName& SpoilIntoItemNameLabelNameField() { return *GetNativePointerField<FName*>(this, "UPrimalItemToolTipWidget.SpoilIntoItemNameLabelName"); }
	FName& SpoilIntoItemTimeLabelNameField() { return *GetNativePointerField<FName*>(this, "UPrimalItemToolTipWidget.SpoilIntoItemTimeLabelName"); }
	FName& SpoilIntoItemIconNameField() { return *GetNativePointerField<FName*>(this, "UPrimalItemToolTipWidget.SpoilIntoItemIconName"); }
	UTextBlock * ItemNameLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalItemToolTipWidget.ItemNameLabel"); }
	UTextBlock * ItemQuantityLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalItemToolTipWidget.ItemQuantityLabel"); }
	UTextBlock * ItemTypeLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalItemToolTipWidget.ItemTypeLabel"); }
	UTextBlock * ItemSubtypeLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalItemToolTipWidget.ItemSubtypeLabel"); }
	UTextBlock * ItemWeightLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalItemToolTipWidget.ItemWeightLabel"); }
	UTextBlock * ItemStatsLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalItemToolTipWidget.ItemStatsLabel"); }
	UTextBlock * ItemDurabilityLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalItemToolTipWidget.ItemDurabilityLabel"); }
	UTextBlock * ItemCraftingTitleLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalItemToolTipWidget.ItemCraftingTitleLabel"); }
	UTextBlock * ItemCraftingQueueLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalItemToolTipWidget.ItemCraftingQueueLabel"); }
	UTextBlock * ItemCraftRepairInvReqLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalItemToolTipWidget.ItemCraftRepairInvReqLabel"); }
	UTextBlock * SpoilIntoItemNamelLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalItemToolTipWidget.SpoilIntoItemNamelLabel"); }
	UTextBlock * SpoilIntoItemTimeLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalItemToolTipWidget.SpoilIntoItemTimeLabel"); }
	UTextBlock * ItemRatingLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalItemToolTipWidget.ItemRatingLabel"); }
	UTextBlock * DurabilityBarLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalItemToolTipWidget.DurabilityBarLabel"); }
	UTextBlock * EggHatchStatusLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalItemToolTipWidget.EggHatchStatusLabel"); }
	UTextBlock * ItemRatingBarLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalItemToolTipWidget.ItemRatingBarLabel"); }
	UPrimalRichTextBlock * ItemCraftingRequirementsLabelField() { return GetNativePointerField<UPrimalRichTextBlock *>(this, "UPrimalItemToolTipWidget.ItemCraftingRequirementsLabel"); }
	UPrimalRichTextBlock * ItemDescriptionLabelField() { return GetNativePointerField<UPrimalRichTextBlock *>(this, "UPrimalItemToolTipWidget.ItemDescriptionLabel"); }
	UImage * ItemIconImageField() { return GetNativePointerField<UImage *>(this, "UPrimalItemToolTipWidget.ItemIconImage"); }
	UImage * ItemQualityImageField() { return GetNativePointerField<UImage *>(this, "UPrimalItemToolTipWidget.ItemQualityImage"); }
	UImage * SpoilIntoItemIconField() { return GetNativePointerField<UImage *>(this, "UPrimalItemToolTipWidget.SpoilIntoItemIcon"); }
	UImage * ItemIconQualityOverlayField() { return GetNativePointerField<UImage *>(this, "UPrimalItemToolTipWidget.ItemIconQualityOverlay"); }
	UImage * ItemIconBackgroundField() { return GetNativePointerField<UImage *>(this, "UPrimalItemToolTipWidget.ItemIconBackground"); }
	UProgressBar * ItemCraftingProgressBarField() { return GetNativePointerField<UProgressBar *>(this, "UPrimalItemToolTipWidget.ItemCraftingProgressBar"); }
	UProgressBar * DurabilityBarField() { return GetNativePointerField<UProgressBar *>(this, "UPrimalItemToolTipWidget.DurabilityBar"); }
	UProgressBar * ItemRatingBarField() { return GetNativePointerField<UProgressBar *>(this, "UPrimalItemToolTipWidget.ItemRatingBar"); }

	// Functions

	void InitToolTip(AShooterPlayerController * HUDOwner, const FString * ToolTipString, IDataListEntryInterface * DataListEntry) { NativeCall<void, AShooterPlayerController *, const FString *, IDataListEntryInterface *>(this, "UPrimalItemToolTipWidget.InitToolTip", HUDOwner, ToolTipString, DataListEntry); }
	void UpdateToolTip(float DeltaSeconds) { NativeCall<void, float>(this, "UPrimalItemToolTipWidget.UpdateToolTip", DeltaSeconds); }
};

