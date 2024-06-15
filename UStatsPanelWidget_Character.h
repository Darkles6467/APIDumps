#pragma once

#include "BaseDeclarations.h"
#include "UStatsPanelWidget.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UStatsPanelWidget_Character : UStatsPanelWidget
{
	char __padding[0x318L];
	FName& PlayerStatusBoxNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Character.PlayerStatusBoxName"); }
	FName& ExperienceBoxNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Character.ExperienceBoxName"); }
	FName& UpgradesBoxNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Character.UpgradesBoxName"); }
	FName& EquipmentDataListPanelNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Character.EquipmentDataListPanelName"); }
	FName& DisabledEquipmentPanelNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Character.DisabledEquipmentPanelName"); }
	FName& GenderSwitcherNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Character.GenderSwitcherName"); }
	FName& NameLabelNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Character.NameLabelName"); }
	FName& LevelLabelNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Character.LevelLabelName"); }
	FName& TribeLabelNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Character.TribeLabelName"); }
	FName& BiomeRegionLabelNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Character.BiomeRegionLabelName"); }
	FName& SpawnRegionLabelNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Character.SpawnRegionLabelName"); }
	FName& TameLimitLabelNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Character.TameLimitLabelName"); }
	FName& ArmorLabelNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Character.ArmorLabelName"); }
	FName& HypothermalInsulationLabelNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Character.HypothermalInsulationLabelName"); }
	FName& HyperthermalInsulationLabelNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Character.HyperthermalInsulationLabelName"); }
	FName& HypothermalInsulationNameLabelNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Character.HypothermalInsulationNameLabelName"); }
	FName& HyperthermalInsulationNameLabelNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Character.HyperthermalInsulationNameLabelName"); }
	FName& ExperienceBarNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Character.ExperienceBarName"); }
	FName& ExperienceLabelNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Character.ExperienceLabelName"); }
	FieldArray<FName, 12> StatWidgetNamesField() { return {this, "UStatsPanelWidget_Character.StatWidgetNames"}; }
	FName& ImprintingStatWidgetNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Character.ImprintingStatWidgetName"); }
	FName& ShowAncestorsButtonNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Character.ShowAncestorsButtonName"); }
	FName& NumUpgradePointsAvailableLabelNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Character.NumUpgradePointsAvailableLabelName"); }
	FName& HyperthermalInsulationBoxNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Character.HyperthermalInsulationBoxName"); }
	FName& HypothermalInsulationBoxNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Character.HypothermalInsulationBoxName"); }
	FName& TameLimitBoxNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Character.TameLimitBoxName"); }
	FName& StatDayValueTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Character.StatDayValueTextBlockName"); }
	FName& StatTimeValueTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Character.StatTimeValueTextBlockName"); }
	FName& StatTmpValueTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Character.StatTmpValueTextBlockName"); }
	FName& StatWindValueTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Character.StatWindValueTextBlockName"); }
	FieldArray<UStatWidget *, 12> StatsField() { return {this, "UStatsPanelWidget_Character.Stats"}; }
	UCanvasPanel * DisabledEquipmentPanelField() { return GetNativePointerField<UCanvasPanel *>(this, "UStatsPanelWidget_Character.DisabledEquipmentPanel"); }
	FieldArray<UDataListEntryWidget *, 11> EquipmentWidgetsField() { return {this, "UStatsPanelWidget_Character.EquipmentWidgets"}; }
	UDataListPanel * EquipmentDataListPanelField() { return GetNativePointerField<UDataListPanel *>(this, "UStatsPanelWidget_Character.EquipmentDataListPanel"); }
	UTextBlock * NameLabelField() { return GetNativePointerField<UTextBlock *>(this, "UStatsPanelWidget_Character.NameLabel"); }
	UTextBlock * LevelTitleLabelField() { return GetNativePointerField<UTextBlock *>(this, "UStatsPanelWidget_Character.LevelTitleLabel"); }
	UTextBlock * LevelLabelField() { return GetNativePointerField<UTextBlock *>(this, "UStatsPanelWidget_Character.LevelLabel"); }
	UTextBlock * TribeLabelField() { return GetNativePointerField<UTextBlock *>(this, "UStatsPanelWidget_Character.TribeLabel"); }
	UTextBlock * BiomeRegionLabelField() { return GetNativePointerField<UTextBlock *>(this, "UStatsPanelWidget_Character.BiomeRegionLabel"); }
	UTextBlock * SpawnRegionLabelField() { return GetNativePointerField<UTextBlock *>(this, "UStatsPanelWidget_Character.SpawnRegionLabel"); }
	UTextBlock * TameLimitLabelField() { return GetNativePointerField<UTextBlock *>(this, "UStatsPanelWidget_Character.TameLimitLabel"); }
	UTextBlock * ArmorLabelField() { return GetNativePointerField<UTextBlock *>(this, "UStatsPanelWidget_Character.ArmorLabel"); }
	UTextBlock * ArmorTitleLabelField() { return GetNativePointerField<UTextBlock *>(this, "UStatsPanelWidget_Character.ArmorTitleLabel"); }
	UTextBlock * HypothermalInsulationNameLabelField() { return GetNativePointerField<UTextBlock *>(this, "UStatsPanelWidget_Character.HypothermalInsulationNameLabel"); }
	UTextBlock * HyperthermalInsulationNameLabelField() { return GetNativePointerField<UTextBlock *>(this, "UStatsPanelWidget_Character.HyperthermalInsulationNameLabel"); }
	UTextBlock * HypothermalInsulationValueLabelField() { return GetNativePointerField<UTextBlock *>(this, "UStatsPanelWidget_Character.HypothermalInsulationValueLabel"); }
	UTextBlock * HyperthermalInsulationValueLabelField() { return GetNativePointerField<UTextBlock *>(this, "UStatsPanelWidget_Character.HyperthermalInsulationValueLabel"); }
	UTextBlock * NumUpgradePointsAvailableLabelField() { return GetNativePointerField<UTextBlock *>(this, "UStatsPanelWidget_Character.NumUpgradePointsAvailableLabel"); }
	UTextBlock * PointsAvailableLabelField() { return GetNativePointerField<UTextBlock *>(this, "UStatsPanelWidget_Character.PointsAvailableLabel"); }
	UTextBlock * StatDayValueTextBlockField() { return GetNativePointerField<UTextBlock *>(this, "UStatsPanelWidget_Character.StatDayValueTextBlock"); }
	UTextBlock * StatTimeValueTextBlockField() { return GetNativePointerField<UTextBlock *>(this, "UStatsPanelWidget_Character.StatTimeValueTextBlock"); }
	UTextBlock * StatTmpValueTextBlockField() { return GetNativePointerField<UTextBlock *>(this, "UStatsPanelWidget_Character.StatTmpValueTextBlock"); }
	UTextBlock * StatWindValueTextBlockField() { return GetNativePointerField<UTextBlock *>(this, "UStatsPanelWidget_Character.StatWindValueTextBlock"); }
	UTextBlock * StatWindTitleTextBlockField() { return GetNativePointerField<UTextBlock *>(this, "UStatsPanelWidget_Character.StatWindTitleTextBlock"); }
	UProgressBar * ExperienceBarField() { return GetNativePointerField<UProgressBar *>(this, "UStatsPanelWidget_Character.ExperienceBar"); }
	UTextBlock * ExperienceLabelField() { return GetNativePointerField<UTextBlock *>(this, "UStatsPanelWidget_Character.ExperienceLabel"); }
	UImage * MutagenIconField() { return GetNativePointerField<UImage *>(this, "UStatsPanelWidget_Character.MutagenIcon"); }

	// Functions

	void ClickedButton(UWidget * clickedButton) { NativeCall<void, UWidget *>(this, "UStatsPanelWidget_Character.ClickedButton", clickedButton); }
	UDataListPanel * GetEquipmentDataList() { return NativeCall<UDataListPanel *>(this, "UStatsPanelWidget_Character.GetEquipmentDataList"); }
	void Init(UUI_Inventory * InInventoryUI) { NativeCall<void, UUI_Inventory *>(this, "UStatsPanelWidget_Character.Init", InInventoryUI); }
	void OnEquipmentSlotDoubleClicked(UDataListEntryButton * theButton) { NativeCall<void, UDataListEntryButton *>(this, "UStatsPanelWidget_Character.OnEquipmentSlotDoubleClicked", theButton); }
	void RefreshItemLists() { NativeCall<void>(this, "UStatsPanelWidget_Character.RefreshItemLists"); }
	void RefreshStats() { NativeCall<void>(this, "UStatsPanelWidget_Character.RefreshStats"); }
	void SetInventoryComp(UPrimalInventoryComponent * InInventoryComponent) { NativeCall<void, UPrimalInventoryComponent *>(this, "UStatsPanelWidget_Character.SetInventoryComp", InInventoryComponent); }
	void SetupSpecialWidgetAdjacents(UWidget * InWidget) { NativeCall<void, UWidget *>(this, "UStatsPanelWidget_Character.SetupSpecialWidgetAdjacents", InWidget); }
	void UpdateLinkedCharacterStatus() { NativeCall<void>(this, "UStatsPanelWidget_Character.UpdateLinkedCharacterStatus"); }
};

