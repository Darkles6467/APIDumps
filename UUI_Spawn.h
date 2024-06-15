#pragma once

#include "BaseDeclarations.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FBoneModifier.h"

struct UUI_Spawn : UPrimalUI
{
	char __padding[0x4b8L];
	FName& SkinColorPreviewNameField() { return *GetNativePointerField<FName*>(this, "UUI_Spawn.SkinColorPreviewName"); }
	FName& HairColorPreviewNameField() { return *GetNativePointerField<FName*>(this, "UUI_Spawn.HairColorPreviewName"); }
	FName& EyeColorPreviewNameField() { return *GetNativePointerField<FName*>(this, "UUI_Spawn.EyeColorPreviewName"); }
	FName& SavedPresetListPanelNameField() { return *GetNativePointerField<FName*>(this, "UUI_Spawn.SavedPresetListPanelName"); }
	FName& IslandRgionButtonListPanelNameField() { return *GetNativePointerField<FName*>(this, "UUI_Spawn.IslandRgionButtonListPanelName"); }
	FName& LoadConfirmationButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_Spawn.LoadConfirmationButtonName"); }
	FName& CancelLoadButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_Spawn.CancelLoadButtonName"); }
	FName& LoadFromFileScrollBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_Spawn.LoadFromFileScrollBoxName"); }
	FName& RandomizeButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_Spawn.RandomizeButtonName"); }
	FName& TabBgSwitcherNameField() { return *GetNativePointerField<FName*>(this, "UUI_Spawn.TabBgSwitcherName"); }
	FName& MaleEnabledEffectNameField() { return *GetNativePointerField<FName*>(this, "UUI_Spawn.MaleEnabledEffectName"); }
	FName& FemaleEnabledEffectNameField() { return *GetNativePointerField<FName*>(this, "UUI_Spawn.FemaleEnabledEffectName"); }
	FName& SaveToFileButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_Spawn.SaveToFileButtonName"); }
	FName& LoadFromFileButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_Spawn.LoadFromFileButtonName"); }
	FString& PreviewWidgetNameField() { return *GetNativePointerField<FString*>(this, "UUI_Spawn.PreviewWidgetName"); }
	FName& RespawnButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_Spawn.RespawnButtonName"); }
	FName& CreateNewPlayerButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_Spawn.CreateNewPlayerButtonName"); }
	FName& RespawnLabelNameField() { return *GetNativePointerField<FName*>(this, "UUI_Spawn.RespawnLabelName"); }
	FName& MyScrollBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_Spawn.MyScrollBoxName"); }
	FName& CharConfigMaleButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_Spawn.CharConfigMaleButtonName"); }
	FName& CharConfigFemaleButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_Spawn.CharConfigFemaleButtonName"); }
	FName& DoCreateNewPlayerButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_Spawn.DoCreateNewPlayerButtonName"); }
	FName& NewCharacterPanelNameField() { return *GetNativePointerField<FName*>(this, "UUI_Spawn.NewCharacterPanelName"); }
	FName& RespawnPanelNameField() { return *GetNativePointerField<FName*>(this, "UUI_Spawn.RespawnPanelName"); }
	FName& RespawnPanelButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_Spawn.RespawnPanelButtonName"); }
	FName& RespawnPanelMapNameField() { return *GetNativePointerField<FName*>(this, "UUI_Spawn.RespawnPanelMapName"); }
	FName& GenderLabelNameField() { return *GetNativePointerField<FName*>(this, "UUI_Spawn.GenderLabelName"); }
	FName& BodyColorSliderNameField() { return *GetNativePointerField<FName*>(this, "UUI_Spawn.BodyColorSliderName"); }
	FName& HairColorSliderNameField() { return *GetNativePointerField<FName*>(this, "UUI_Spawn.HairColorSliderName"); }
	FName& EyeColorSliderNameField() { return *GetNativePointerField<FName*>(this, "UUI_Spawn.EyeColorSliderName"); }
	TArray<FBoneModifierSlider>& BoneModifiersSlidersField() { return *GetNativePointerField<TArray<FBoneModifierSlider>*>(this, "UUI_Spawn.BoneModifiersSliders"); }
	FName& CharacterNameBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_Spawn.CharacterNameBoxName"); }
	FName& RespawnButtonLabelNameField() { return *GetNativePointerField<FName*>(this, "UUI_Spawn.RespawnButtonLabelName"); }
	TSubclassOf<UDinoListButtonWidget>& SlotButtonTemplateField() { return *GetNativePointerField<TSubclassOf<UDinoListButtonWidget>*>(this, "UUI_Spawn.SlotButtonTemplate"); }
	float& RequestSpawnPointsIntervalField() { return *GetNativePointerField<float*>(this, "UUI_Spawn.RequestSpawnPointsInterval"); }
	FName& DownloadCharacterDataButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_Spawn.DownloadCharacterDataButtonName"); }
	TSubclassOf<UUI_ListCharacterData>& ListCharacterDataSceneTemplateField() { return *GetNativePointerField<TSubclassOf<UUI_ListCharacterData>*>(this, "UUI_Spawn.ListCharacterDataSceneTemplate"); }
	FLinearColor& SwitcherTextActiveColorField() { return *GetNativePointerField<FLinearColor*>(this, "UUI_Spawn.SwitcherTextActiveColor"); }
	FLinearColor& SwitcherTextInactiveColorField() { return *GetNativePointerField<FLinearColor*>(this, "UUI_Spawn.SwitcherTextInactiveColor"); }
	bool& bIsFastTravelField() { return *GetNativePointerField<bool*>(this, "UUI_Spawn.bIsFastTravel"); }
	int& CurrentSpawnPointIDField() { return *GetNativePointerField<int*>(this, "UUI_Spawn.CurrentSpawnPointID"); }
	unsigned __int64& TransferedPlayerDataIDField() { return *GetNativePointerField<unsigned __int64*>(this, "UUI_Spawn.TransferedPlayerDataID"); }
	TSharedPtr<FWriteFileTaskInfo,0>& SaveCharacterSettingsTaskInfoField() { return *GetNativePointerField<TSharedPtr<FWriteFileTaskInfo,0>*>(this, "UUI_Spawn.SaveCharacterSettingsTaskInfo"); }
	AShooterCharacter * PreviewCharacterField() { return GetNativePointerField<AShooterCharacter *>(this, "UUI_Spawn.PreviewCharacter"); }
	UUI_PreviewWidget * PreviewWidgetField() { return GetNativePointerField<UUI_PreviewWidget *>(this, "UUI_Spawn.PreviewWidget"); }
	UTextBlock * RespawnLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_Spawn.RespawnLabel"); }
	UTextBlock * GenderLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_Spawn.GenderLabel"); }
	UTextBlock * RespawnButtonLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_Spawn.RespawnButtonLabel"); }
	UTextBlock * CurrentDayTimeLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_Spawn.CurrentDayTimeLabel"); }
	TArray<UDinoListButtonWidget *>& EntryWidgetsField() { return *GetNativePointerField<TArray<UDinoListButtonWidget *>*>(this, "UUI_Spawn.EntryWidgets"); }
	TArray<UDinoListButtonWidget *>& RespawnEntryWidgetsField() { return *GetNativePointerField<TArray<UDinoListButtonWidget *>*>(this, "UUI_Spawn.RespawnEntryWidgets"); }
	TArray<UDinoListButtonWidget *>& SavedPresetWidgetsField() { return *GetNativePointerField<TArray<UDinoListButtonWidget *>*>(this, "UUI_Spawn.SavedPresetWidgets"); }
	USpawnMapWidget * RespawnPanelMapField() { return GetNativePointerField<USpawnMapWidget *>(this, "UUI_Spawn.RespawnPanelMap"); }
	UImage * SmallMapImageField() { return GetNativePointerField<UImage *>(this, "UUI_Spawn.SmallMapImage"); }
	USpawnMapWidget * NewCharacterPanelMapField() { return GetNativePointerField<USpawnMapWidget *>(this, "UUI_Spawn.NewCharacterPanelMap"); }
	float& MaxDistanceForMultiSpawnPointSelectField() { return *GetNativePointerField<float*>(this, "UUI_Spawn.MaxDistanceForMultiSpawnPointSelect"); }
	UImage * MultiSpawnPointSelectBkgField() { return GetNativePointerField<UImage *>(this, "UUI_Spawn.MultiSpawnPointSelectBkg"); }
	TArray<UDinoListButtonWidget *>& MultiSpawnPointWidgetsField() { return *GetNativePointerField<TArray<UDinoListButtonWidget *>*>(this, "UUI_Spawn.MultiSpawnPointWidgets"); }
	TArray<int>& MultiSpawnPointSlotIndicesField() { return *GetNativePointerField<TArray<int>*>(this, "UUI_Spawn.MultiSpawnPointSlotIndices"); }
	UTextBlock * RespawnTimeLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_Spawn.RespawnTimeLabel"); }
	UTextBlock * ExtinctionEventTimeLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_Spawn.ExtinctionEventTimeLabel"); }
	TArray<FSpawnPointInfo>& CachedSpawnPointInfosField() { return *GetNativePointerField<TArray<FSpawnPointInfo>*>(this, "UUI_Spawn.CachedSpawnPointInfos"); }
	long double& LastRequestSpawnPointsTimeField() { return *GetNativePointerField<long double*>(this, "UUI_Spawn.LastRequestSpawnPointsTime"); }
	long double& OpenedAtTimeField() { return *GetNativePointerField<long double*>(this, "UUI_Spawn.OpenedAtTime"); }
	bool& bCharConfigIsFemaleField() { return *GetNativePointerField<bool*>(this, "UUI_Spawn.bCharConfigIsFemale"); }
	bool& bIsCharacterCreationUIField() { return *GetNativePointerField<bool*>(this, "UUI_Spawn.bIsCharacterCreationUI"); }
	USlider * BodyColorSliderField() { return GetNativePointerField<USlider *>(this, "UUI_Spawn.BodyColorSlider"); }
	USlider * HairColorSliderField() { return GetNativePointerField<USlider *>(this, "UUI_Spawn.HairColorSlider"); }
	USlider * EyeColorSliderField() { return GetNativePointerField<USlider *>(this, "UUI_Spawn.EyeColorSlider"); }
	bool& SelectingSpawnPointForDownloadingCharacterField() { return *GetNativePointerField<bool*>(this, "UUI_Spawn.SelectingSpawnPointForDownloadingCharacter"); }
	FArkTributePlayerData& SelectedUploadedCharacterField() { return *GetNativePointerField<FArkTributePlayerData*>(this, "UUI_Spawn.SelectedUploadedCharacter"); }
	bool& bWasTransferringPlayerField() { return *GetNativePointerField<bool*>(this, "UUI_Spawn.bWasTransferringPlayer"); }

	// Functions

	void AddSavedPresetEntry(FString SettingName) { NativeCall<void, FString>(this, "UUI_Spawn.AddSavedPresetEntry", SettingName); }
	void AddToViewport() { NativeCall<void>(this, "UUI_Spawn.AddToViewport"); }
	void ApplyBoneModifiers() { NativeCall<void>(this, "UUI_Spawn.ApplyBoneModifiers"); }
	void ApplyCharacterPreset(const FCharacterPreset * CharacterPreset) { NativeCall<void, const FCharacterPreset *>(this, "UUI_Spawn.ApplyCharacterPreset", CharacterPreset); }
	void CalcBoneModifiers(TArray<FBoneModifier> * BoneModifiers) { NativeCall<void, TArray<FBoneModifier> *>(this, "UUI_Spawn.CalcBoneModifiers", BoneModifiers); }
	void CharacterIsValidToDownload(bool bIsValid, const FArkTributePlayerData * SelectedCharacter) { NativeCall<void, bool, const FArkTributePlayerData *>(this, "UUI_Spawn.CharacterIsValidToDownload", bIsValid, SelectedCharacter); }
	void ClickedButton(UWidget * clickedWidget) { NativeCall<void, UWidget *>(this, "UUI_Spawn.ClickedButton", clickedWidget); }
	void ConfirmationDialogAccepted() { NativeCall<void>(this, "UUI_Spawn.ConfirmationDialogAccepted"); }
	FCharacterPreset * GetCurrentCharacterSetting(FCharacterPreset * result) { return NativeCall<FCharacterPreset *, FCharacterPreset *>(this, "UUI_Spawn.GetCurrentCharacterSetting", result); }
	FString * GetSelectedPresetToLoad(FString * result) { return NativeCall<FString *, FString *>(this, "UUI_Spawn.GetSelectedPresetToLoad", result); }
	int GetSelectedSlotButtonIndex() { return NativeCall<int>(this, "UUI_Spawn.GetSelectedSlotButtonIndex"); }
	int GetSelectedSpawnPointID() { return NativeCall<int>(this, "UUI_Spawn.GetSelectedSpawnPointID"); }
	void HighlightWidgetOnStart(UPanelWidget * RestrictToPanel) { NativeCall<void, UPanelWidget *>(this, "UUI_Spawn.HighlightWidgetOnStart", RestrictToPanel); }
	void InitForCharacterCreation() { NativeCall<void>(this, "UUI_Spawn.InitForCharacterCreation"); }
	void InitForTransferredPlayer(unsigned __int64 PlayerDataID) { NativeCall<void, unsigned __int64>(this, "UUI_Spawn.InitForTransferredPlayer", PlayerDataID); }
	bool IsWithinMultiSpawnSelection(int SpawnPointID) { return NativeCall<bool, int>(this, "UUI_Spawn.IsWithinMultiSpawnSelection", SpawnPointID); }
	void LoadAvailableCharacterSettingsNames() { NativeCall<void>(this, "UUI_Spawn.LoadAvailableCharacterSettingsNames"); }
	bool LoadSelectedCharacterSetting() { return NativeCall<bool>(this, "UUI_Spawn.LoadSelectedCharacterSetting"); }
	void MultiSelectSpawnPointButtonSelected(UWidget * theWidget) { NativeCall<void, UWidget *>(this, "UUI_Spawn.MultiSelectSpawnPointButtonSelected", theWidget); }
	void OnBedFilterChanged(const FText * Text) { NativeCall<void, const FText *>(this, "UUI_Spawn.OnBedFilterChanged", Text); }
	void OnDownloadCharacterRequestFinished(bool Success) { NativeCall<void, bool>(this, "UUI_Spawn.OnDownloadCharacterRequestFinished", Success); }
	void OnSaveToFileEditableChanged(const FText * Text) { NativeCall<void, const FText *>(this, "UUI_Spawn.OnSaveToFileEditableChanged", Text); }
	void OnSaveToFileEditableCommitted(const FText * text, ETextCommit::Type CommitMethod) { NativeCall<void, const FText *, ETextCommit::Type>(this, "UUI_Spawn.OnSaveToFileEditableCommitted", text, CommitMethod); }
	void OnSelectedUploadedCharacter(const FArkTributePlayerData * SelectedCharacter) { NativeCall<void, const FArkTributePlayerData *>(this, "UUI_Spawn.OnSelectedUploadedCharacter", SelectedCharacter); }
	void RandomizeCharacter() { NativeCall<void>(this, "UUI_Spawn.RandomizeCharacter"); }
	void RefreshSlotButtons() { NativeCall<void>(this, "UUI_Spawn.RefreshSlotButtons"); }
	void RemoveFromViewport() { NativeCall<void>(this, "UUI_Spawn.RemoveFromViewport"); }
	void ResetToDefault() { NativeCall<void>(this, "UUI_Spawn.ResetToDefault"); }
	void RespawnSlotButtonSelected(UWidget * theWidget) { NativeCall<void, UWidget *>(this, "UUI_Spawn.RespawnSlotButtonSelected", theWidget); }
	void SaveCharacterConfirmation() { NativeCall<void>(this, "UUI_Spawn.SaveCharacterConfirmation"); }
	void SaveCurrentCharacterSetting(FString SavedSettingName) { NativeCall<void, FString>(this, "UUI_Spawn.SaveCurrentCharacterSetting", SavedSettingName); }
	void SavedPresetListButtonSelected(UWidget * theWidget) { NativeCall<void, UWidget *>(this, "UUI_Spawn.SavedPresetListButtonSelected", theWidget); }
	void ShowDownloadCharaterButton() { NativeCall<void>(this, "UUI_Spawn.ShowDownloadCharaterButton"); }
	void SlotButtonSelected(UWidget * theWidget) { NativeCall<void, UWidget *>(this, "UUI_Spawn.SlotButtonSelected", theWidget); }
	void SpawnPointSelected(int SpawnPointID, UUI_SpawnPoint * SpawnPoint) { NativeCall<void, int, UUI_SpawnPoint *>(this, "UUI_Spawn.SpawnPointSelected", SpawnPointID, SpawnPoint); }
	void Tick_Implementation(FGeometry MyGeometry, float InDeltaTime) { NativeCall<void, FGeometry, float>(this, "UUI_Spawn.Tick_Implementation", MyGeometry, InDeltaTime); }
	void UpdateCharacterPreviewImage() { NativeCall<void>(this, "UUI_Spawn.UpdateCharacterPreviewImage"); }
	void UpdateSpawnRegionWidgets() { NativeCall<void>(this, "UUI_Spawn.UpdateSpawnRegionWidgets"); }
	bool WantsVisible() { return NativeCall<bool>(this, "UUI_Spawn.WantsVisible"); }
};

