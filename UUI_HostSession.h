#pragma once

#include "BaseDeclarations.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UUI_HostSession : UPrimalUI
{
	char __padding[0xd10L];
	TArray<FMapDescription>& MapDescriptionsArrayField() { return *GetNativePointerField<TArray<FMapDescription>*>(this, "UUI_HostSession.MapDescriptionsArray"); }
	FName& ProceduralButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_HostSession.ProceduralButtonName"); }
	FName& DeleteProceduralArkButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_HostSession.DeleteProceduralArkButtonName"); }
	FName& HostButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_HostSession.HostButtonName"); }
	FName& HostDedicatedButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_HostSession.HostDedicatedButtonName"); }
	FName& HostListenButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_HostSession.HostListenButtonName"); }
	FName& UpdateModsButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_HostSession.UpdateModsButtonName"); }
	FName& ProgressTextNameField() { return *GetNativePointerField<FName*>(this, "UUI_HostSession.ProgressTextName"); }
	FName& CancelButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_HostSession.CancelButtonName"); }
	FName& MyScrollBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_HostSession.MyScrollBoxName"); }
	FName& SessionsPanelNameField() { return *GetNativePointerField<FName*>(this, "UUI_HostSession.SessionsPanelName"); }
	FName& ClearLocalDataButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_HostSession.ClearLocalDataButtonName"); }
	FName& ConnectingPanelNameField() { return *GetNativePointerField<FName*>(this, "UUI_HostSession.ConnectingPanelName"); }
	FName& PasswordAcceptButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_HostSession.PasswordAcceptButtonName"); }
	FName& PasswordCancelButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_HostSession.PasswordCancelButtonName"); }
	FName& PasswordTextFieldNameField() { return *GetNativePointerField<FName*>(this, "UUI_HostSession.PasswordTextFieldName"); }
	FName& PasswordAdminTextFieldNameField() { return *GetNativePointerField<FName*>(this, "UUI_HostSession.PasswordAdminTextFieldName"); }
	FName& SessionNameTextFieldNameField() { return *GetNativePointerField<FName*>(this, "UUI_HostSession.SessionNameTextFieldName"); }
	FName& PasswordPanelNameField() { return *GetNativePointerField<FName*>(this, "UUI_HostSession.PasswordPanelName"); }
	FName& ErrorBlockNameField() { return *GetNativePointerField<FName*>(this, "UUI_HostSession.ErrorBlockName"); }
	TSubclassOf<UUI_ProceduralSettings>& ProceduralSettingsTemplateField() { return *GetNativePointerField<TSubclassOf<UUI_ProceduralSettings>*>(this, "UUI_HostSession.ProceduralSettingsTemplate"); }
	float& errorTimeField() { return *GetNativePointerField<float*>(this, "UUI_HostSession.errorTime"); }
	int& MaxPasswordCharsField() { return *GetNativePointerField<int*>(this, "UUI_HostSession.MaxPasswordChars"); }
	int& MaxSessionNameCharsField() { return *GetNativePointerField<int*>(this, "UUI_HostSession.MaxSessionNameChars"); }
	FLinearColor& SwitcherTextActiveColorField() { return *GetNativePointerField<FLinearColor*>(this, "UUI_HostSession.SwitcherTextActiveColor"); }
	FLinearColor& SwitcherTextInactiveColorField() { return *GetNativePointerField<FLinearColor*>(this, "UUI_HostSession.SwitcherTextInactiveColor"); }
	EHostSessionPanel::Type& SelectedOptionsPanelField() { return *GetNativePointerField<EHostSessionPanel::Type*>(this, "UUI_HostSession.SelectedOptionsPanel"); }
	UDataListPanel * EngramsDataListField() { return GetNativePointerField<UDataListPanel *>(this, "UUI_HostSession.EngramsDataList"); }
	UImage * MapImageField() { return GetNativePointerField<UImage *>(this, "UUI_HostSession.MapImage"); }
	UImage * LockedImageField() { return GetNativePointerField<UImage *>(this, "UUI_HostSession.LockedImage"); }
	UImage * DarkMapBackgroundField() { return GetNativePointerField<UImage *>(this, "UUI_HostSession.DarkMapBackground"); }
	UTextBlock * LockedTextLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_HostSession.LockedTextLabel"); }
	UTextBlock * MapDescriptionField() { return GetNativePointerField<UTextBlock *>(this, "UUI_HostSession.MapDescription"); }
	UTextBlock * MapNameLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_HostSession.MapNameLabel"); }
	UPrimalRichTextBlock * NewsLabelField() { return GetNativePointerField<UPrimalRichTextBlock *>(this, "UUI_HostSession.NewsLabel"); }
	FString& LoadMapCommmandStringField() { return *GetNativePointerField<FString*>(this, "UUI_HostSession.LoadMapCommmandString"); }
	UTextBlock * ProgressTextBlockField() { return GetNativePointerField<UTextBlock *>(this, "UUI_HostSession.ProgressTextBlock"); }
	UTextBlock * errorBlockField() { return GetNativePointerField<UTextBlock *>(this, "UUI_HostSession.errorBlock"); }
	UTextBlock * PasswordPrivateMatchTBField() { return GetNativePointerField<UTextBlock *>(this, "UUI_HostSession.PasswordPrivateMatchTB"); }
	UCheckBox * PasswordPrivateMatchCBField() { return GetNativePointerField<UCheckBox *>(this, "UUI_HostSession.PasswordPrivateMatchCB"); }
	UTextBlock * OverwriteMapWithBackupLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_HostSession.OverwriteMapWithBackupLabel"); }
	UCheckBox * OverwriteMapWithBackupChkBoxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_HostSession.OverwriteMapWithBackupChkBox"); }
	UTextBlock * ListenServerTetherDistanceLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_HostSession.ListenServerTetherDistanceLabel"); }
	UTextBlock * PasswordServerPasswordTBField() { return GetNativePointerField<UTextBlock *>(this, "UUI_HostSession.PasswordServerPasswordTB"); }
	UTextBlock * UploadSaveFileStatusTextBlockField() { return GetNativePointerField<UTextBlock *>(this, "UUI_HostSession.UploadSaveFileStatusTextBlock"); }
	USlider * DifficultySliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.DifficultySlider"); }
	USlider * MaxStructuresInRangeField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.MaxStructuresInRange"); }
	USlider * DayCycleSpeedSliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.DayCycleSpeedSlider"); }
	USlider * DayTimeSpeedSliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.DayTimeSpeedSlider"); }
	USlider * NightTimeSpeedSliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.NightTimeSpeedSlider"); }
	USlider * DinoDamageSliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.DinoDamageSlider"); }
	USlider * PlayerDamageSliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PlayerDamageSlider"); }
	USlider * StructureDamageSliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.StructureDamageSlider"); }
	USlider * PlayerResistanceSliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PlayerResistanceSlider"); }
	USlider * DinoResistanceSliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.DinoResistanceSlider"); }
	USlider * StructureResistanceSliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.StructureResistanceSlider"); }
	USlider * XPSliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.XPSlider"); }
	USlider * TamingSpeedSliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.TamingSpeedSlider"); }
	USlider * HarvestAmountSliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.HarvestAmountSlider"); }
	USlider * PlayerCharacterWaterDrainSliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PlayerCharacterWaterDrainSlider"); }
	USlider * PlayerCharacterFoodDrainSliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PlayerCharacterFoodDrainSlider"); }
	USlider * DinoCharacterFoodDrainSliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.DinoCharacterFoodDrainSlider"); }
	USlider * PlayerCharacterStaminaDrainSliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PlayerCharacterStaminaDrainSlider"); }
	USlider * DinoCharacterStaminaDrainSliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.DinoCharacterStaminaDrainSlider"); }
	USlider * PlayerCharacterHealthRecoverySliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PlayerCharacterHealthRecoverySlider"); }
	USlider * DinoCharacterHealthRecoverySliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.DinoCharacterHealthRecoverySlider"); }
	USlider * DinoCountSliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.DinoCountSlider"); }
	USlider * HarvestHealthSliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.HarvestHealthSlider"); }
	USlider * PvEStructureDecayPeriodSliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PvEStructureDecayPeriodSlider"); }
	USlider * ResourcesRespawnPeriodSliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.ResourcesRespawnPeriodSlider"); }
	USlider * ListenServerTetherDistanceMultiplierSliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.ListenServerTetherDistanceMultiplierSlider"); }
	USlider * PerLevelStatsDinoTamed_Health_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PerLevelStatsDinoTamed_Health_Slider"); }
	USlider * PerLevelStatsDinoTamed_Stamina_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PerLevelStatsDinoTamed_Stamina_Slider"); }
	USlider * PerLevelStatsDinoTamed_Torpidity_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PerLevelStatsDinoTamed_Torpidity_Slider"); }
	USlider * PerLevelStatsDinoTamed_Oxygen_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PerLevelStatsDinoTamed_Oxygen_Slider"); }
	USlider * PerLevelStatsDinoTamed_Food_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PerLevelStatsDinoTamed_Food_Slider"); }
	USlider * PerLevelStatsDinoTamed_Water_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PerLevelStatsDinoTamed_Water_Slider"); }
	USlider * PerLevelStatsDinoTamed_Temperature_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PerLevelStatsDinoTamed_Temperature_Slider"); }
	USlider * PerLevelStatsDinoTamed_Weight_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PerLevelStatsDinoTamed_Weight_Slider"); }
	USlider * PerLevelStatsDinoTamed_Damage_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PerLevelStatsDinoTamed_Damage_Slider"); }
	USlider * PerLevelStatsDinoTamed_Speed_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PerLevelStatsDinoTamed_Speed_Slider"); }
	USlider * PerLevelStatsDinoTamed_TemperatureFortitude_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PerLevelStatsDinoTamed_TemperatureFortitude_Slider"); }
	USlider * PerLevelStatsDinoTamedAdd_Health_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PerLevelStatsDinoTamedAdd_Health_Slider"); }
	USlider * PerLevelStatsDinoTamedAdd_Stamina_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PerLevelStatsDinoTamedAdd_Stamina_Slider"); }
	USlider * PerLevelStatsDinoTamedAdd_Torpidity_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PerLevelStatsDinoTamedAdd_Torpidity_Slider"); }
	USlider * PerLevelStatsDinoTamedAdd_Oxygen_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PerLevelStatsDinoTamedAdd_Oxygen_Slider"); }
	USlider * PerLevelStatsDinoTamedAdd_Food_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PerLevelStatsDinoTamedAdd_Food_Slider"); }
	USlider * PerLevelStatsDinoTamedAdd_Water_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PerLevelStatsDinoTamedAdd_Water_Slider"); }
	USlider * PerLevelStatsDinoTamedAdd_Temperature_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PerLevelStatsDinoTamedAdd_Temperature_Slider"); }
	USlider * PerLevelStatsDinoTamedAdd_Weight_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PerLevelStatsDinoTamedAdd_Weight_Slider"); }
	USlider * PerLevelStatsDinoTamedAdd_Damage_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PerLevelStatsDinoTamedAdd_Damage_Slider"); }
	USlider * PerLevelStatsDinoTamedAdd_Speed_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PerLevelStatsDinoTamedAdd_Speed_Slider"); }
	USlider * PerLevelStatsDinoTamedAdd_TemperatureFortitude_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PerLevelStatsDinoTamedAdd_TemperatureFortitude_Slider"); }
	USlider * PerLevelStatsDinoTamedAff_Health_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PerLevelStatsDinoTamedAff_Health_Slider"); }
	USlider * PerLevelStatsDinoTamedAff_Stamina_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PerLevelStatsDinoTamedAff_Stamina_Slider"); }
	USlider * PerLevelStatsDinoTamedAff_Torpidity_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PerLevelStatsDinoTamedAff_Torpidity_Slider"); }
	USlider * PerLevelStatsDinoTamedAff_Oxygen_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PerLevelStatsDinoTamedAff_Oxygen_Slider"); }
	USlider * PerLevelStatsDinoTamedAff_Food_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PerLevelStatsDinoTamedAff_Food_Slider"); }
	USlider * PerLevelStatsDinoTamedAff_Water_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PerLevelStatsDinoTamedAff_Water_Slider"); }
	USlider * PerLevelStatsDinoTamedAff_Temperature_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PerLevelStatsDinoTamedAff_Temperature_Slider"); }
	USlider * PerLevelStatsDinoTamedAff_Weight_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PerLevelStatsDinoTamedAff_Weight_Slider"); }
	USlider * PerLevelStatsDinoTamedAff_Damage_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PerLevelStatsDinoTamedAff_Damage_Slider"); }
	USlider * PerLevelStatsDinoTamedAff_Speed_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PerLevelStatsDinoTamedAff_Speed_Slider"); }
	USlider * PerLevelStatsDinoTamedAff_TemperatureFortitude_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PerLevelStatsDinoTamedAff_TemperatureFortitude_Slider"); }
	USlider * PerLevelStatsDinoWild_Health_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PerLevelStatsDinoWild_Health_Slider"); }
	USlider * PerLevelStatsDinoWild_Stamina_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PerLevelStatsDinoWild_Stamina_Slider"); }
	USlider * PerLevelStatsDinoWild_Torpidity_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PerLevelStatsDinoWild_Torpidity_Slider"); }
	USlider * PerLevelStatsDinoWild_Oxygen_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PerLevelStatsDinoWild_Oxygen_Slider"); }
	USlider * PerLevelStatsDinoWild_Food_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PerLevelStatsDinoWild_Food_Slider"); }
	USlider * PerLevelStatsDinoWild_Water_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PerLevelStatsDinoWild_Water_Slider"); }
	USlider * PerLevelStatsDinoWild_Temperature_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PerLevelStatsDinoWild_Temperature_Slider"); }
	USlider * PerLevelStatsDinoWild_Weight_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PerLevelStatsDinoWild_Weight_Slider"); }
	USlider * PerLevelStatsDinoWild_Damage_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PerLevelStatsDinoWild_Damage_Slider"); }
	USlider * PerLevelStatsDinoWild_Speed_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PerLevelStatsDinoWild_Speed_Slider"); }
	USlider * PerLevelStatsDinoWild_TemperatureFortitude_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PerLevelStatsDinoWild_TemperatureFortitude_Slider"); }
	USlider * PerLevelStatsPlayer_Health_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PerLevelStatsPlayer_Health_Slider"); }
	USlider * PerLevelStatsPlayer_Stamina_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PerLevelStatsPlayer_Stamina_Slider"); }
	USlider * PerLevelStatsPlayer_Torpidity_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PerLevelStatsPlayer_Torpidity_Slider"); }
	USlider * PerLevelStatsPlayer_Oxygen_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PerLevelStatsPlayer_Oxygen_Slider"); }
	USlider * PerLevelStatsPlayer_Food_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PerLevelStatsPlayer_Food_Slider"); }
	USlider * PerLevelStatsPlayer_Water_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PerLevelStatsPlayer_Water_Slider"); }
	USlider * PerLevelStatsPlayer_Temperature_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PerLevelStatsPlayer_Temperature_Slider"); }
	USlider * PerLevelStatsPlayer_Weight_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PerLevelStatsPlayer_Weight_Slider"); }
	USlider * PerLevelStatsPlayer_Damage_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PerLevelStatsPlayer_Damage_Slider"); }
	USlider * PerLevelStatsPlayer_Speed_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PerLevelStatsPlayer_Speed_Slider"); }
	USlider * PerLevelStatsPlayer_TemperatureFortitude_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PerLevelStatsPlayer_TemperatureFortitude_Slider"); }
	USlider * GlobalSpoilingTime_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.GlobalSpoilingTime_Slider"); }
	USlider * GlobalItemDecompositionTime_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.GlobalItemDecompositionTime_Slider"); }
	USlider * GlobalCorpseDecompositionTime_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.GlobalCorpseDecompositionTime_Slider"); }
	USlider * PvPZoneStructureDamage_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PvPZoneStructureDamage_Slider"); }
	USlider * StructureDamageRepairCooldown_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.StructureDamageRepairCooldown_Slider"); }
	USlider * IncreasePvPRespawnIntervalCheckPeriod_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.IncreasePvPRespawnIntervalCheckPeriod_Slider"); }
	USlider * IncreasePvPRespawnInterval_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.IncreasePvPRespawnInterval_Slider"); }
	USlider * IncreasePvPRespawnIntervalBaseAmount_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.IncreasePvPRespawnIntervalBaseAmount_Slider"); }
	USlider * ResourceNoReplenishRadiusPlayers_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.ResourceNoReplenishRadiusPlayers_Slider"); }
	USlider * ResourceNoReplenishRadiusStructures_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.ResourceNoReplenishRadiusStructures_Slider"); }
	USlider * CropGrowthSpeed_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.CropGrowthSpeed_Slider"); }
	USlider * LayEggInterval_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.LayEggInterval_Slider"); }
	USlider * PoopInterval_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PoopInterval_Slider"); }
	USlider * CropDecaySpeed_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.CropDecaySpeed_Slider"); }
	USlider * MatingInterval_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.MatingInterval_Slider"); }
	USlider * EggHatchSpeed_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.EggHatchSpeed_Slider"); }
	USlider * BabyMatureSpeed_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.BabyMatureSpeed_Slider"); }
	USlider * BabyFoodConsumptionSpeed_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.BabyFoodConsumptionSpeed_Slider"); }
	USlider * DinoTurretDamage_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.DinoTurretDamage_Slider"); }
	USlider * DinoHarvestingDamage_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.DinoHarvestingDamage_Slider"); }
	USlider * PlayerHarvestingDamage_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PlayerHarvestingDamage_Slider"); }
	USlider * CustomRecipeEffectiveness_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.CustomRecipeEffectiveness_Slider"); }
	USlider * CustomRecipeSkill_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.CustomRecipeSkill_Slider"); }
	USlider * AutoPvEStartTimeSeconds_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.AutoPvEStartTimeSeconds_Slider"); }
	USlider * AutoPvEStopTimeSeconds_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.AutoPvEStopTimeSeconds_Slider"); }
	USlider * PvEDinoDecayPeriod_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PvEDinoDecayPeriod_Slider"); }
	USlider * StructurePreventResourceRadiusMultiplier_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.StructurePreventResourceRadiusMultiplier_Slider"); }
	USlider * BabyImprintingStatScaleMultiplier_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.BabyImprintingStatScaleMultiplier_Slider"); }
	USlider * BabyCuddleIntervalMultiplier_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.BabyCuddleIntervalMultiplier_Slider"); }
	USlider * BabyCuddleGracePeriodMultiplier_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.BabyCuddleGracePeriodMultiplier_Slider"); }
	USlider * BabyCuddleLoseImprintQualitySpeedMultiplier_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.BabyCuddleLoseImprintQualitySpeedMultiplier_Slider"); }
	USlider * PreventOfflinePvPInterval_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PreventOfflinePvPInterval_Slider"); }
	USlider * KillXPMultiplier_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.KillXPMultiplier_Slider"); }
	USlider * HarvestXPMultiplier_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.HarvestXPMultiplier_Slider"); }
	USlider * CraftXPMultiplier_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.CraftXPMultiplier_Slider"); }
	USlider * GenericXPMultiplier_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.GenericXPMultiplier_Slider"); }
	USlider * SpecialXPMultiplier_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.SpecialXPMultiplier_Slider"); }
	USlider * RaidDinoCharacterFoodDrainMultiplier_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.RaidDinoCharacterFoodDrainMultiplier_Slider"); }
	USlider * SupplyCrateLootQualitySliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.SupplyCrateLootQualitySlider"); }
	USlider * FishingLootQualitySliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.FishingLootQualitySlider"); }
	USlider * CraftingSkillBonusSliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.CraftingSkillBonusSlider"); }
	USlider * FuelConsumptionIntervalMultiplier_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.FuelConsumptionIntervalMultiplier_Slider"); }
	USlider * MaxPlatformSaddleStructureLimit_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.MaxPlatformSaddleStructureLimit_Slider"); }
	USlider * PerPlatformMaxStructuresMultiplier_SliderField() { return GetNativePointerField<USlider *>(this, "UUI_HostSession.PerPlatformMaxStructuresMultiplier_Slider"); }
	UCheckBox * GlobalVoiceChatCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_HostSession.GlobalVoiceChatCheckbox"); }
	UCheckBox * ProximityChatCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_HostSession.ProximityChatCheckbox"); }
	UCheckBox * NoTributesDownloadsCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_HostSession.NoTributesDownloadsCheckbox"); }
	UCheckBox * ServerHardcoreCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_HostSession.ServerHardcoreCheckbox"); }
	UCheckBox * ThirdPersonCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_HostSession.ThirdPersonCheckbox"); }
	UCheckBox * NotifyPlayerLeftCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_HostSession.NotifyPlayerLeftCheckbox"); }
	UCheckBox * NotifyPlayerJoinedCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_HostSession.NotifyPlayerJoinedCheckbox"); }
	UCheckBox * ServerPvECheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_HostSession.ServerPvECheckbox"); }
	UCheckBox * ServerCrosshairCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_HostSession.ServerCrosshairCheckbox"); }
	UCheckBox * ServerForceNoHUDCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_HostSession.ServerForceNoHUDCheckbox"); }
	UCheckBox * ShowMapPlayerLocationCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_HostSession.ShowMapPlayerLocationCheckbox"); }
	UCheckBox * EnablePvPGammaCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_HostSession.EnablePvPGammaCheckbox"); }
	UCheckBox * DisableStructureDecayPvECheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_HostSession.DisableStructureDecayPvECheckbox"); }
	UCheckBox * AllowFlyerCarryPvECheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_HostSession.AllowFlyerCarryPvECheckbox"); }
	UCheckBox * IncreasePvPRespawnIntervalCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_HostSession.IncreasePvPRespawnIntervalCheckbox"); }
	UCheckBox * AutoPvETimerCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_HostSession.AutoPvETimerCheckbox"); }
	UCheckBox * AutoPvEUseSystemTimeCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_HostSession.AutoPvEUseSystemTimeCheckbox"); }
	UCheckBox * DisableFriendlyFireCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_HostSession.DisableFriendlyFireCheckbox"); }
	UCheckBox * FlyerPlatformAllowUnalignedDinoBasingCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_HostSession.FlyerPlatformAllowUnalignedDinoBasingCheckbox"); }
	UCheckBox * DisableLootCratesCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_HostSession.DisableLootCratesCheckbox"); }
	UCheckBox * AllowCustomRecipesCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_HostSession.AllowCustomRecipesCheckbox"); }
	UCheckBox * PassiveDefensesDamageRiderlessDinosCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_HostSession.PassiveDefensesDamageRiderlessDinosCheckbox"); }
	UCheckBox * PvEAllowTribeWarCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_HostSession.PvEAllowTribeWarCheckbox"); }
	UCheckBox * PvEAllowTribeWarCancelCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_HostSession.PvEAllowTribeWarCancelCheckbox"); }
	UCheckBox * OnlyAllowSpecifiedEngramsCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_HostSession.OnlyAllowSpecifiedEngramsCheckbox"); }
	UCheckBox * PreventDownloadSurvivorsCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_HostSession.PreventDownloadSurvivorsCheckbox"); }
	UCheckBox * PreventDownloadItemsCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_HostSession.PreventDownloadItemsCheckbox"); }
	UCheckBox * PreventDownloadDinosCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_HostSession.PreventDownloadDinosCheckbox"); }
	UCheckBox * DisablePvEGammaCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_HostSession.DisablePvEGammaCheckbox"); }
	UCheckBox * DisableDinoDecayPvECheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_HostSession.DisableDinoDecayPvECheckbox"); }
	UCheckBox * AdminLoggingCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_HostSession.AdminLoggingCheckbox"); }
	UCheckBox * AllowCaveBuildingPvECheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_HostSession.AllowCaveBuildingPvECheckbox"); }
	UCheckBox * ForceAllowCaveFlyersCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_HostSession.ForceAllowCaveFlyersCheckbox"); }
	UCheckBox * PreventOfflinePvPCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_HostSession.PreventOfflinePvPCheckbox"); }
	UCheckBox * PvPDinoDecayCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_HostSession.PvPDinoDecayCheckbox"); }
	UCheckBox * OverideStructurePlatformPreventionCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_HostSession.OverideStructurePlatformPreventionCheckbox"); }
	UCheckBox * AllowAnyoneBabyImprintCuddleCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_HostSession.AllowAnyoneBabyImprintCuddleCheckbox"); }
	UCheckBox * DisableImprintDinoBuffCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_HostSession.DisableImprintDinoBuffCheckbox"); }
	UCheckBox * ShowFloatingDamageTextCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_HostSession.ShowFloatingDamageTextCheckbox"); }
	UCheckBox * PreventDiseasesCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_HostSession.PreventDiseasesCheckbox"); }
	UCheckBox * NonPermanentDiseasesCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_HostSession.NonPermanentDiseasesCheckbox"); }
	UCheckBox * EnableExtraStructurePreventionVolumesCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_HostSession.EnableExtraStructurePreventionVolumesCheckbox"); }
	UCheckBox * PreventTribeAlliancesCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_HostSession.PreventTribeAlliancesCheckbox"); }
	UCheckBox * AllowRaidDinoFeedingCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_HostSession.AllowRaidDinoFeedingCheckbox"); }
	UCheckBox * MaxDifficultyCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_HostSession.MaxDifficultyCheckbox"); }
	UCheckBox * UseSingleplayerSettingsCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_HostSession.UseSingleplayerSettingsCheckbox"); }
	UCheckBox * UseCorpseLocatorCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_HostSession.UseCorpseLocatorCheckbox"); }
	UCheckBox * DisableStructurePlacementCollisionCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_HostSession.DisableStructurePlacementCollisionCheckbox"); }
	UCheckBox * AllowMultiplePlatformFloorsCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_HostSession.AllowMultiplePlatformFloorsCheckbox"); }
	UCheckBox * AllowUnlimitedRespecsCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_HostSession.AllowUnlimitedRespecsCheckbox"); }
	UCheckBox * DisableDinoTamingCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_HostSession.DisableDinoTamingCheckbox"); }
	UCheckBox * DisableDinoRidingCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_HostSession.DisableDinoRidingCheckbox"); }
	UCheckBox * ShowCreativeModeCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_HostSession.ShowCreativeModeCheckbox"); }
	UCheckBox * AllowFlyerSpeedLevelingCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_HostSession.AllowFlyerSpeedLevelingCheckbox"); }
	UCheckBox * DestroyOldBiomeStructuresAndDinosField() { return GetNativePointerField<UCheckBox *>(this, "UUI_HostSession.DestroyOldBiomeStructuresAndDinos"); }
	bool& HasUpdatedFromValueField() { return *GetNativePointerField<bool*>(this, "UUI_HostSession.HasUpdatedFromValue"); }
	int& LastDeleteSelectedIndexField() { return *GetNativePointerField<int*>(this, "UUI_HostSession.LastDeleteSelectedIndex"); }
	long double& LastUpdateModsTimeField() { return *GetNativePointerField<long double*>(this, "UUI_HostSession.LastUpdateModsTime"); }
	bool& bIsListenServerField() { return *GetNativePointerField<bool*>(this, "UUI_HostSession.bIsListenServer"); }
	bool& bFadedOutField() { return *GetNativePointerField<bool*>(this, "UUI_HostSession.bFadedOut"); }
	unsigned __int64& ConfigLoadedMapModField() { return *GetNativePointerField<unsigned __int64*>(this, "UUI_HostSession.ConfigLoadedMapMod"); }
	TArray<unsigned __int64>& LoadedActiveModsField() { return *GetNativePointerField<TArray<unsigned __int64>*>(this, "UUI_HostSession.LoadedActiveMods"); }
	bool& bMultiplayerPrivilegeAvailableField() { return *GetNativePointerField<bool*>(this, "UUI_HostSession.bMultiplayerPrivilegeAvailable"); }
	bool& bMultiplayerPrivilegeField() { return *GetNativePointerField<bool*>(this, "UUI_HostSession.bMultiplayerPrivilege"); }
	bool& bHostListenServerField() { return *GetNativePointerField<bool*>(this, "UUI_HostSession.bHostListenServer"); }
	bool& bHostDedicatedServerField() { return *GetNativePointerField<bool*>(this, "UUI_HostSession.bHostDedicatedServer"); }
	bool& bPasswordButtonPressedField() { return *GetNativePointerField<bool*>(this, "UUI_HostSession.bPasswordButtonPressed"); }
	bool& bDisablePlayerInputField() { return *GetNativePointerField<bool*>(this, "UUI_HostSession.bDisablePlayerInput"); }
	bool& bShowTooltipField() { return *GetNativePointerField<bool*>(this, "UUI_HostSession.bShowTooltip"); }
	bool& bHostDediConfirmationAcceptedField() { return *GetNativePointerField<bool*>(this, "UUI_HostSession.bHostDediConfirmationAccepted"); }
	UUI_HostSession::ConfirmationDialogHostSessionOptions& CurrentDialogOptionField() { return *GetNativePointerField<UUI_HostSession::ConfirmationDialogHostSessionOptions*>(this, "UUI_HostSession.CurrentDialogOption"); }

	// Functions

	void ActiveModSelected(UWidget * theWidget) { NativeCall<void, UWidget *>(this, "UUI_HostSession.ActiveModSelected", theWidget); }
	void AddActiveModItem(FString DisplayName, FString ModName, FString ModPath, unsigned __int64 ModId, bool IsCustom) { NativeCall<void, FString, FString, FString, unsigned __int64, bool>(this, "UUI_HostSession.AddActiveModItem", DisplayName, ModName, ModPath, ModId, IsCustom); }
	void AddCustomMapItem(FString DisplayName, FString ShortMapName, FString LongMapName, FString ModName, unsigned __int64 ModId, bool IsCustom, bool bIsProcedural) { NativeCall<void, FString, FString, FString, FString, unsigned __int64, bool, bool>(this, "UUI_HostSession.AddCustomMapItem", DisplayName, ShortMapName, LongMapName, ModName, ModId, IsCustom, bIsProcedural); }
	void AddMapItem(FString DisplayName, FString ShortMapName, FString LongMapName, FString ModName, unsigned __int64 ModId, bool IsCustom, bool bIsProcedural) { NativeCall<void, FString, FString, FString, FString, unsigned __int64, bool, bool>(this, "UUI_HostSession.AddMapItem", DisplayName, ShortMapName, LongMapName, ModName, ModId, IsCustom, bIsProcedural); }
	void AddModItem(FString DisplayName, FString ModName, FString ModPath, unsigned __int64 ModId, bool IsCustom) { NativeCall<void, FString, FString, FString, unsigned __int64, bool>(this, "UUI_HostSession.AddModItem", DisplayName, ModName, ModPath, ModId, IsCustom); }
	void AddToViewport() { NativeCall<void>(this, "UUI_HostSession.AddToViewport"); }
	void ClickedButton(UWidget * clickedWidget) { NativeCall<void, UWidget *>(this, "UUI_HostSession.ClickedButton", clickedWidget); }
	void ConfirmationDialogAccepted() { NativeCall<void>(this, "UUI_HostSession.ConfirmationDialogAccepted"); }
	void DeleteDedicatedData(int SelectedIndex) { NativeCall<void, int>(this, "UUI_HostSession.DeleteDedicatedData", SelectedIndex); }
	void DeleteSelectedProceduralMap() { NativeCall<void>(this, "UUI_HostSession.DeleteSelectedProceduralMap"); }
	void DeleteSingleplayerData(int SelectedIndex) { NativeCall<void, int>(this, "UUI_HostSession.DeleteSingleplayerData", SelectedIndex); }
	void DoHostListenDediPasswordBunch() { NativeCall<void>(this, "UUI_HostSession.DoHostListenDediPasswordBunch"); }
	void DoHostLocal() { NativeCall<void>(this, "UUI_HostSession.DoHostLocal"); }
	void EngramDoubleClicked(UDataListEntryButton * theButton) { NativeCall<void, UDataListEntryButton *>(this, "UUI_HostSession.EngramDoubleClicked", theButton); }
	bool EnsureNumeric(FString * text, int maxChars) { return NativeCall<bool, FString *, int>(this, "UUI_HostSession.EnsureNumeric", text, maxChars); }
	void EscapeClosed() { NativeCall<void>(this, "UUI_HostSession.EscapeClosed"); }
	void FinishLoadMap() { NativeCall<void>(this, "UUI_HostSession.FinishLoadMap"); }
	FString * GenerateGameModStringFromActives(FString * result) { return NativeCall<FString *, FString *>(this, "UUI_HostSession.GenerateGameModStringFromActives", result); }
	bool GetBoolOptionIni(FString Section, FString OptionName) { return NativeCall<bool, FString, FString>(this, "UUI_HostSession.GetBoolOptionIni", Section, OptionName); }
	float GetFloatOptionIni(FString Section, FString OptionName) { return NativeCall<float, FString, FString>(this, "UUI_HostSession.GetFloatOptionIni", Section, OptionName); }
	int GetIntNumericValue(UEditableTextBox * TextBox) { return NativeCall<int, UEditableTextBox *>(this, "UUI_HostSession.GetIntNumericValue", TextBox); }
	int GetIntOptionIni(FString Section, FString OptionName) { return NativeCall<int, FString, FString>(this, "UUI_HostSession.GetIntOptionIni", Section, OptionName); }
	float GetNumericValue(UEditableTextBox * TextBox) { return NativeCall<float, UEditableTextBox *>(this, "UUI_HostSession.GetNumericValue", TextBox); }
	int GetSelectedActiveModButtonIndex() { return NativeCall<int>(this, "UUI_HostSession.GetSelectedActiveModButtonIndex"); }
	int GetSelectedModButtonIndex() { return NativeCall<int>(this, "UUI_HostSession.GetSelectedModButtonIndex"); }
	int GetSelectedSlotButtonIndex() { return NativeCall<int>(this, "UUI_HostSession.GetSelectedSlotButtonIndex"); }
	bool HasBoolOptionIni(FString Section, FString OptionName) { return NativeCall<bool, FString, FString>(this, "UUI_HostSession.HasBoolOptionIni", Section, OptionName); }
	bool HasDedicatedSaveData(const FString * DisplayName, const FString * MapName, bool bIsPGArk) { return NativeCall<bool, const FString *, const FString *, bool>(this, "UUI_HostSession.HasDedicatedSaveData", DisplayName, MapName, bIsPGArk); }
	bool HasSingleplayerSaveData(const FString * DisplayName, const FString * MapName, bool bIsPGArk) { return NativeCall<bool, const FString *, const FString *, bool>(this, "UUI_HostSession.HasSingleplayerSaveData", DisplayName, MapName, bIsPGArk); }
	void HideSessionPanel() { NativeCall<void>(this, "UUI_HostSession.HideSessionPanel"); }
	void HighlightWidgetOnStart(UPanelWidget * RestrictToPanel) { NativeCall<void, UPanelWidget *>(this, "UUI_HostSession.HighlightWidgetOnStart", RestrictToPanel); }
	UCheckBox * IsAnyCheckboxHovered() { return NativeCall<UCheckBox *>(this, "UUI_HostSession.IsAnyCheckboxHovered"); }
	void ModSelected(UWidget * theWidget) { NativeCall<void, UWidget *>(this, "UUI_HostSession.ModSelected", theWidget); }
	void OnAdminPasswordTextChanged(const FText * Text) { NativeCall<void, const FText *>(this, "UUI_HostSession.OnAdminPasswordTextChanged", Text); }
	void OnAdminPasswordTextCommitted(const FText * Text, ETextCommit::Type CommitMethod) { NativeCall<void, const FText *, ETextCommit::Type>(this, "UUI_HostSession.OnAdminPasswordTextCommitted", Text, CommitMethod); }
	void OnDeleteMapSaveDataButtonClicked(UWidget * theWidget) { NativeCall<void, UWidget *>(this, "UUI_HostSession.OnDeleteMapSaveDataButtonClicked", theWidget); }
	void OnDeleteMapServerDataButtonClicked(UWidget * theWidget) { NativeCall<void, UWidget *>(this, "UUI_HostSession.OnDeleteMapServerDataButtonClicked", theWidget); }
	void OnNumericValueCommitted(const FText * __formal, ETextCommit::Type __formal) { NativeCall<void, const FText *, ETextCommit::Type>(this, "UUI_HostSession.OnNumericValueCommitted", __formal, __formal); }
	void OnSessionNameTextChanged(const FText * Text) { NativeCall<void, const FText *>(this, "UUI_HostSession.OnSessionNameTextChanged", Text); }
	void OnSessionPasswordTextChanged(const FText * Text) { NativeCall<void, const FText *>(this, "UUI_HostSession.OnSessionPasswordTextChanged", Text); }
	void OnSliderValueChanged(float __formal) { NativeCall<void, float>(this, "UUI_HostSession.OnSliderValueChanged", __formal); }
	void PopulateMods(bool bFirstPass) { NativeCall<void, bool>(this, "UUI_HostSession.PopulateMods", bFirstPass); }
	void PopulateProceduralMaps() { NativeCall<void>(this, "UUI_HostSession.PopulateProceduralMaps"); }
	void PushSelectedModToActive() { NativeCall<void>(this, "UUI_HostSession.PushSelectedModToActive"); }
	void RefreshEngramsDataList() { NativeCall<void>(this, "UUI_HostSession.RefreshEngramsDataList"); }
	void RefreshSettings() { NativeCall<void>(this, "UUI_HostSession.RefreshSettings"); }
	void RefreshSettings_SetCheckboxDefaultTrue(UCheckBox * InCheckbox, FString InSection, FString IniKey) { NativeCall<void, UCheckBox *, FString, FString>(this, "UUI_HostSession.RefreshSettings_SetCheckboxDefaultTrue", InCheckbox, InSection, IniKey); }
	void RemoveAllSlots() { NativeCall<void>(this, "UUI_HostSession.RemoveAllSlots"); }
	void RemoveSelectedActiveMod() { NativeCall<void>(this, "UUI_HostSession.RemoveSelectedActiveMod"); }
	void ResetSettings() { NativeCall<void>(this, "UUI_HostSession.ResetSettings"); }
	FString * SanitizeFloatLimitedDecimals(FString * result, long double Value, const int MaxDecimals) { return NativeCall<FString *, FString *, long double, const int>(this, "UUI_HostSession.SanitizeFloatLimitedDecimals", result, Value, MaxDecimals); }
	void SaveSelectedEngramsConfig() { NativeCall<void>(this, "UUI_HostSession.SaveSelectedEngramsConfig"); }
	void SaveSettings() { NativeCall<void>(this, "UUI_HostSession.SaveSettings"); }
	bool SelectLastPlayedMap() { return NativeCall<bool>(this, "UUI_HostSession.SelectLastPlayedMap"); }
	FString * SetBoolOptionIni(FString * result, FString Section, FString OptionName, bool Value) { return NativeCall<FString *, FString *, FString, FString, bool>(this, "UUI_HostSession.SetBoolOptionIni", result, Section, OptionName, Value); }
	FString * SetFloatOptionIni(FString * result, FString Section, FString OptionName, float Value) { return NativeCall<FString *, FString *, FString, FString, float>(this, "UUI_HostSession.SetFloatOptionIni", result, Section, OptionName, Value); }
	FString * SetIntOptionIni(FString * result, FString Section, FString OptionName, int Value) { return NativeCall<FString *, FString *, FString, FString, int>(this, "UUI_HostSession.SetIntOptionIni", result, Section, OptionName, Value); }
	void SetMapDescription(EHostSessionPanel::Map MapIndex) { NativeCall<void, EHostSessionPanel::Map>(this, "UUI_HostSession.SetMapDescription", MapIndex); }
	void SetPasswordPanelToGameServer() { NativeCall<void>(this, "UUI_HostSession.SetPasswordPanelToGameServer"); }
	void SetPasswordPanelToListenServer() { NativeCall<void>(this, "UUI_HostSession.SetPasswordPanelToListenServer"); }
	void SetupAllowedEngrams() { NativeCall<void>(this, "UUI_HostSession.SetupAllowedEngrams"); }
	bool ShouldConfirmHostDedicated() { return NativeCall<bool>(this, "UUI_HostSession.ShouldConfirmHostDedicated"); }
	void ShowRightColumnSubPanel(EHostSessionPanel::RightPanel Panel) { NativeCall<void, EHostSessionPanel::RightPanel>(this, "UUI_HostSession.ShowRightColumnSubPanel", Panel); }
	void ShowSessionPanel() { NativeCall<void>(this, "UUI_HostSession.ShowSessionPanel"); }
	void ShowSubPanel(EHostSessionPanel::Type Panel) { NativeCall<void, EHostSessionPanel::Type>(this, "UUI_HostSession.ShowSubPanel", Panel); }
	void SlotButtonSelected(UWidget * theWidget) { NativeCall<void, UWidget *>(this, "UUI_HostSession.SlotButtonSelected", theWidget); }
	bool StopForInstallingMods() { return NativeCall<bool>(this, "UUI_HostSession.StopForInstallingMods"); }
	void Tick_Implementation(FGeometry MyGeometry, float InDeltaTime) { NativeCall<void, FGeometry, float>(this, "UUI_HostSession.Tick_Implementation", MyGeometry, InDeltaTime); }
	void UpdateSavedDataButtons() { NativeCall<void>(this, "UUI_HostSession.UpdateSavedDataButtons"); }
	FString * UpdateSettings(FString * result) { return NativeCall<FString *, FString *>(this, "UUI_HostSession.UpdateSettings", result); }
	void UpdateSliderAndValueFromConfig(FString PropertyName, USlider * Slider, UEditableTextBox * TextBox, float Scale, float Offset, bool bZeroUseDefaultValue, float DefaultValue) { NativeCall<void, FString, USlider *, UEditableTextBox *, float, float, bool, float>(this, "UUI_HostSession.UpdateSliderAndValueFromConfig", PropertyName, Slider, TextBox, Scale, Offset, bZeroUseDefaultValue, DefaultValue); }
	void UpdateSliderAndValueFromGameIni(FString PropertyName, USlider * Slider, UEditableTextBox * TextBox, float Scale, float Offset, bool bZeroUseDefaultValue, float DefaultValue) { NativeCall<void, FString, USlider *, UEditableTextBox *, float, float, bool, float>(this, "UUI_HostSession.UpdateSliderAndValueFromGameIni", PropertyName, Slider, TextBox, Scale, Offset, bZeroUseDefaultValue, DefaultValue); }
	void UpdateSliderFromValue(USlider * Slider, UEditableTextBox * TextBox, float Scale, float Offset, FString text) { NativeCall<void, USlider *, UEditableTextBox *, float, float, FString>(this, "UUI_HostSession.UpdateSliderFromValue", Slider, TextBox, Scale, Offset, text); }
	void UpdateValueFromSlider(USlider * Slider, UEditableTextBox * TextBox, float Scale, float Offset) { NativeCall<void, USlider *, UEditableTextBox *, float, float>(this, "UUI_HostSession.UpdateValueFromSlider", Slider, TextBox, Scale, Offset); }
	void ValidateActiveMods() { NativeCall<void>(this, "UUI_HostSession.ValidateActiveMods"); }
};

