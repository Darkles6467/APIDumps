#pragma once

#include "BaseDeclarations.h"
#include "UTooltipSmartLayoutWidget.h"
#include "UToolTipWidget.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UPrimalItemInventoryToolTipWidget : UTooltipSmartLayoutWidget
{
	char __padding[0x298L];
	FName& fnameTitleBar_EngramTypeLabelField() { return *GetNativePointerField<FName*>(this, "UPrimalItemInventoryToolTipWidget.fnameTitleBar_EngramTypeLabel"); }
	FName& fnameTitleBar_EngramTypeSeparatorField() { return *GetNativePointerField<FName*>(this, "UPrimalItemInventoryToolTipWidget.fnameTitleBar_EngramTypeSeparator"); }
	FName& fnameTitleBar_ItemNameLabelField() { return *GetNativePointerField<FName*>(this, "UPrimalItemInventoryToolTipWidget.fnameTitleBar_ItemNameLabel"); }
	FName& fnameTitleBar_ItemTypeSeparatorField() { return *GetNativePointerField<FName*>(this, "UPrimalItemInventoryToolTipWidget.fnameTitleBar_ItemTypeSeparator"); }
	FName& fnameTitleBar_ItemTypeLabelField() { return *GetNativePointerField<FName*>(this, "UPrimalItemInventoryToolTipWidget.fnameTitleBar_ItemTypeLabel"); }
	FName& fnameTitleBar_ItemQualitySeparatorField() { return *GetNativePointerField<FName*>(this, "UPrimalItemInventoryToolTipWidget.fnameTitleBar_ItemQualitySeparator"); }
	FName& fnameTitleBar_ItemQualityLabelField() { return *GetNativePointerField<FName*>(this, "UPrimalItemInventoryToolTipWidget.fnameTitleBar_ItemQualityLabel"); }
	FName& fnameMainInfo_SwitcherField() { return *GetNativePointerField<FName*>(this, "UPrimalItemInventoryToolTipWidget.fnameMainInfo_Switcher"); }
	FName& fnameMainInfo_Full_IconField() { return *GetNativePointerField<FName*>(this, "UPrimalItemInventoryToolTipWidget.fnameMainInfo_Full_Icon"); }
	FName& fnameMainInfo_Full_DescriptionLabelField() { return *GetNativePointerField<FName*>(this, "UPrimalItemInventoryToolTipWidget.fnameMainInfo_Full_DescriptionLabel"); }
	FName& fnameMainInfo_DescOnly_DescriptionLabelField() { return *GetNativePointerField<FName*>(this, "UPrimalItemInventoryToolTipWidget.fnameMainInfo_DescOnly_DescriptionLabel"); }
	TArray<FName>& fnameGeneral_LabelNamesField() { return *GetNativePointerField<TArray<FName>*>(this, "UPrimalItemInventoryToolTipWidget.fnameGeneral_LabelNames"); }
	TArray<FName>& fnameGeneral_GroupNamesField() { return *GetNativePointerField<TArray<FName>*>(this, "UPrimalItemInventoryToolTipWidget.fnameGeneral_GroupNames"); }
	float& General_GroupFreqField() { return *GetNativePointerField<float*>(this, "UPrimalItemInventoryToolTipWidget.General_GroupFreq"); }
	TArray<FName>& fnameStat_LabelNamesField() { return *GetNativePointerField<TArray<FName>*>(this, "UPrimalItemInventoryToolTipWidget.fnameStat_LabelNames"); }
	TArray<FName>& fnameStat_GroupNamesField() { return *GetNativePointerField<TArray<FName>*>(this, "UPrimalItemInventoryToolTipWidget.fnameStat_GroupNames"); }
	float& Stat_GroupFreqField() { return *GetNativePointerField<float*>(this, "UPrimalItemInventoryToolTipWidget.Stat_GroupFreq"); }
	FName& fnameCraftPanelField() { return *GetNativePointerField<FName*>(this, "UPrimalItemInventoryToolTipWidget.fnameCraftPanel"); }
	FName& fnameCraftTitleLabelField() { return *GetNativePointerField<FName*>(this, "UPrimalItemInventoryToolTipWidget.fnameCraftTitleLabel"); }
	TArray<FName>& fnameCraft_RequirementLabelsField() { return *GetNativePointerField<TArray<FName>*>(this, "UPrimalItemInventoryToolTipWidget.fnameCraft_RequirementLabels"); }
	TArray<FName>& fnameCraft_RequirementIconsField() { return *GetNativePointerField<TArray<FName>*>(this, "UPrimalItemInventoryToolTipWidget.fnameCraft_RequirementIcons"); }
	TArray<FName>& fnameCraft_GroupNamesField() { return *GetNativePointerField<TArray<FName>*>(this, "UPrimalItemInventoryToolTipWidget.fnameCraft_GroupNames"); }
	float& Craft_GroupFreqField() { return *GetNativePointerField<float*>(this, "UPrimalItemInventoryToolTipWidget.Craft_GroupFreq"); }
	FSlateColor& Craft_RequirementsMetField() { return *GetNativePointerField<FSlateColor*>(this, "UPrimalItemInventoryToolTipWidget.Craft_RequirementsMet"); }
	FSlateColor& Craft_RequirementsUnmetField() { return *GetNativePointerField<FSlateColor*>(this, "UPrimalItemInventoryToolTipWidget.Craft_RequirementsUnmet"); }
	FSlateColor& NormalTextColorField() { return *GetNativePointerField<FSlateColor*>(this, "UPrimalItemInventoryToolTipWidget.NormalTextColor"); }
	UTextBlock * TitleBar_EngramTypeLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalItemInventoryToolTipWidget.TitleBar_EngramTypeLabel"); }
	UTextBlock * TitleBar_ItemNameLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalItemInventoryToolTipWidget.TitleBar_ItemNameLabel"); }
	UTextBlock * TitleBar_ItemTypeLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalItemInventoryToolTipWidget.TitleBar_ItemTypeLabel"); }
	UTextBlock * TitleBar_ItemQualityLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalItemInventoryToolTipWidget.TitleBar_ItemQualityLabel"); }
	UImage * MainInfo_Full_IconField() { return GetNativePointerField<UImage *>(this, "UPrimalItemInventoryToolTipWidget.MainInfo_Full_Icon"); }
	UImage * MainInfo_Full_Icon_BGField() { return GetNativePointerField<UImage *>(this, "UPrimalItemInventoryToolTipWidget.MainInfo_Full_Icon_BG"); }
	UImage * MainInfo_Full_Icon_QualityOverlayField() { return GetNativePointerField<UImage *>(this, "UPrimalItemInventoryToolTipWidget.MainInfo_Full_Icon_QualityOverlay"); }
	UPrimalRichTextBlock * MainInfo_Full_DescriptionLabelField() { return GetNativePointerField<UPrimalRichTextBlock *>(this, "UPrimalItemInventoryToolTipWidget.MainInfo_Full_DescriptionLabel"); }
	UPrimalRichTextBlock * MainInfo_DescOnly_DescriptionLabelField() { return GetNativePointerField<UPrimalRichTextBlock *>(this, "UPrimalItemInventoryToolTipWidget.MainInfo_DescOnly_DescriptionLabel"); }
	TArray<UTextBlock *>& General_TextBlocksField() { return *GetNativePointerField<TArray<UTextBlock *>*>(this, "UPrimalItemInventoryToolTipWidget.General_TextBlocks"); }
	TArray<UTextBlock *>& Stat_TextBlocksField() { return *GetNativePointerField<TArray<UTextBlock *>*>(this, "UPrimalItemInventoryToolTipWidget.Stat_TextBlocks"); }
	UTextBlock * Craft_TitleLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalItemInventoryToolTipWidget.Craft_TitleLabel"); }
	UTextBlock * MoreOptionsLabelField() { return GetNativePointerField<UTextBlock *>(this, "UPrimalItemInventoryToolTipWidget.MoreOptionsLabel"); }
	TArray<UTextBlock *>& Craft_RequirementTextBlocksField() { return *GetNativePointerField<TArray<UTextBlock *>*>(this, "UPrimalItemInventoryToolTipWidget.Craft_RequirementTextBlocks"); }
	TArray<UImage *>& Craft_RequirementItemIconsField() { return *GetNativePointerField<TArray<UImage *>*>(this, "UPrimalItemInventoryToolTipWidget.Craft_RequirementItemIcons"); }
	UVerticalBox * MouseRightClickReminderVerticalBoxField() { return GetNativePointerField<UVerticalBox *>(this, "UPrimalItemInventoryToolTipWidget.MouseRightClickReminderVerticalBox"); }
	UPrimalEngramEntry * MyEngramEntryField() { return GetNativePointerField<UPrimalEngramEntry *>(this, "UPrimalItemInventoryToolTipWidget.MyEngramEntry"); }

	// Functions

	bool GetItemSpoilTimeFormatted(FString * Out, UPrimalItem * item) { return NativeCall<bool, FString *, UPrimalItem *>(this, "UPrimalItemInventoryToolTipWidget.GetItemSpoilTimeFormatted", Out, item); }
	void InitToolTip(AShooterPlayerController * HUDOwner, const FString * ToolTipString, IDataListEntryInterface * DataListEntry) { NativeCall<void, AShooterPlayerController *, const FString *, IDataListEntryInterface *>(this, "UPrimalItemInventoryToolTipWidget.InitToolTip", HUDOwner, ToolTipString, DataListEntry); }
	void ResetColors() { NativeCall<void>(this, "UPrimalItemInventoryToolTipWidget.ResetColors"); }
	void SynchronizeProperties() { NativeCall<void>(this, "UPrimalItemInventoryToolTipWidget.SynchronizeProperties"); }
	void UpdateCraftInfo(UPrimalItem * item) { NativeCall<void, UPrimalItem *>(this, "UPrimalItemInventoryToolTipWidget.UpdateCraftInfo", item); }
	void UpdateGeneralInfo(UPrimalItem * item) { NativeCall<void, UPrimalItem *>(this, "UPrimalItemInventoryToolTipWidget.UpdateGeneralInfo", item); }
	void UpdateMainInfo(UPrimalItem * item) { NativeCall<void, UPrimalItem *>(this, "UPrimalItemInventoryToolTipWidget.UpdateMainInfo", item); }
	void UpdateStatsInfo(UPrimalItem * item) { NativeCall<void, UPrimalItem *>(this, "UPrimalItemInventoryToolTipWidget.UpdateStatsInfo", item); }
	void UpdateTitleBar(UPrimalItem * item) { NativeCall<void, UPrimalItem *>(this, "UPrimalItemInventoryToolTipWidget.UpdateTitleBar", item); }
	void UpdateToolTip(float DeltaSeconds) { NativeCall<void, float>(this, "UPrimalItemInventoryToolTipWidget.UpdateToolTip", DeltaSeconds); }
};

