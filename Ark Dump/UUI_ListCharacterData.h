#pragma once

#include "BaseDeclarations.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FArkTributePlayerDataListing.h"
#include "FArkTributePlayerData.h"

struct UUI_ListCharacterData : UPrimalUI
{
	char __padding[0x2e8L];
	FName& DownloadButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_ListCharacterData.DownloadButtonName"); }
	FName& CancelButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_ListCharacterData.CancelButtonName"); }
	FName& MyScrollBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ListCharacterData.MyScrollBoxName"); }
	FName& CharacterStatsPanelNameField() { return *GetNativePointerField<FName*>(this, "UUI_ListCharacterData.CharacterStatsPanelName"); }
	TSubclassOf<UDinoListButtonWidget>& CharacterSlotButtonTemplateField() { return *GetNativePointerField<TSubclassOf<UDinoListButtonWidget>*>(this, "UUI_ListCharacterData.CharacterSlotButtonTemplate"); }
	FName& CharacterLabelNameField() { return *GetNativePointerField<FName*>(this, "UUI_ListCharacterData.CharacterLabelName"); }
	FName& ExperienceLabelNameField() { return *GetNativePointerField<FName*>(this, "UUI_ListCharacterData.ExperienceLabelName"); }
	FName& ExperienceBarNameField() { return *GetNativePointerField<FName*>(this, "UUI_ListCharacterData.ExperienceBarName"); }
	FName& CharacterHypoThermalInsulationLabelNameField() { return *GetNativePointerField<FName*>(this, "UUI_ListCharacterData.CharacterHypoThermalInsulationLabelName"); }
	FName& CharacterHyperThermalInsulationLabelNameField() { return *GetNativePointerField<FName*>(this, "UUI_ListCharacterData.CharacterHyperThermalInsulationLabelName"); }
	FieldArray<FName, 12> StatsLabelNamesField() { return {this, "UUI_ListCharacterData.StatsLabelNames"}; }
	TSubclassOf<UUI_SteamInventoryStatusPopup>& SteamInventoryStatusUITemplateField() { return *GetNativePointerField<TSubclassOf<UUI_SteamInventoryStatusPopup>*>(this, "UUI_ListCharacterData.SteamInventoryStatusUITemplate"); }
	bool& bOpenForDownloadField() { return *GetNativePointerField<bool*>(this, "UUI_ListCharacterData.bOpenForDownload"); }
	FieldArray<UTextBlock *, 12> StatsLabelsField() { return {this, "UUI_ListCharacterData.StatsLabels"}; }
	UTextBlock * CharacterLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_ListCharacterData.CharacterLabel"); }
	UTextBlock * ExperienceLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_ListCharacterData.ExperienceLabel"); }
	UTextBlock * CharacterHypoThermalInsulationLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_ListCharacterData.CharacterHypoThermalInsulationLabel"); }
	UTextBlock * CharacterHyperThermalInsulationLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_ListCharacterData.CharacterHyperThermalInsulationLabel"); }
	UProgressBar * ExperienceBarField() { return GetNativePointerField<UProgressBar *>(this, "UUI_ListCharacterData.ExperienceBar"); }
	TArray<TWeakObjectPtr<UPrimalPlayerData>>& CharacterListField() { return *GetNativePointerField<TArray<TWeakObjectPtr<UPrimalPlayerData>>*>(this, "UUI_ListCharacterData.CharacterList"); }
	TArray<FArkTributePlayerData>& CharacterDataListField() { return *GetNativePointerField<TArray<FArkTributePlayerData>*>(this, "UUI_ListCharacterData.CharacterDataList"); }
	TArray<unsigned int>& CharacterDataListExpirationTimesUTCField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "UUI_ListCharacterData.CharacterDataListExpirationTimesUTC"); }
	FArkTributePlayerData& SelectedPlayerDataField() { return *GetNativePointerField<FArkTributePlayerData*>(this, "UUI_ListCharacterData.SelectedPlayerData"); }
	bool& bWasTopUIField() { return *GetNativePointerField<bool*>(this, "UUI_ListCharacterData.bWasTopUI"); }
	TArray<UDinoListButtonWidget *>& EntryWidgetsField() { return *GetNativePointerField<TArray<UDinoListButtonWidget *>*>(this, "UUI_ListCharacterData.EntryWidgets"); }
	bool& bDownloadACharacterField() { return *GetNativePointerField<bool*>(this, "UUI_ListCharacterData.bDownloadACharacter"); }
	bool& bFromInitialCharacterCreationField() { return *GetNativePointerField<bool*>(this, "UUI_ListCharacterData.bFromInitialCharacterCreation"); }

	// Functions

	void AddToViewport() { NativeCall<void>(this, "UUI_ListCharacterData.AddToViewport"); }
	void CharacterSlotButtonSelected(UWidget * theWidget) { NativeCall<void, UWidget *>(this, "UUI_ListCharacterData.CharacterSlotButtonSelected", theWidget); }
	void ClickedButton(UWidget * clickedWidget) { NativeCall<void, UWidget *>(this, "UUI_ListCharacterData.ClickedButton", clickedWidget); }
	void DownloadSelectedCharacterData() { NativeCall<void>(this, "UUI_ListCharacterData.DownloadSelectedCharacterData"); }
	FArkTributePlayerData * GetSelectedCharacterForDownload(FArkTributePlayerData * result) { return NativeCall<FArkTributePlayerData *, FArkTributePlayerData *>(this, "UUI_ListCharacterData.GetSelectedCharacterForDownload", result); }
	int GetSelectedSlotButtonIndex() { return NativeCall<int>(this, "UUI_ListCharacterData.GetSelectedSlotButtonIndex"); }
	void GetUploadedCharacters() { NativeCall<void>(this, "UUI_ListCharacterData.GetUploadedCharacters"); }
	void InitializeScene() { NativeCall<void>(this, "UUI_ListCharacterData.InitializeScene"); }
	void OnUploadedCharactersListingsLoaded(bool Success, const TArray<FArkTributePlayerDataListing> * CharactersListings) { NativeCall<void, bool, const TArray<FArkTributePlayerDataListing> *>(this, "UUI_ListCharacterData.OnUploadedCharactersListingsLoaded", Success, CharactersListings); }
	void OnUploadedCharactersLoaded(const TArray<FArkTributePlayerData> * CharactersData, const TArray<unsigned int> * ExpirationTimesUTC) { NativeCall<void, const TArray<FArkTributePlayerData> *, const TArray<unsigned int> *>(this, "UUI_ListCharacterData.OnUploadedCharactersLoaded", CharactersData, ExpirationTimesUTC); }
	void PopulateCharacterDataList() { NativeCall<void>(this, "UUI_ListCharacterData.PopulateCharacterDataList"); }
	void ProcessArkTributeExpirationTimes() { NativeCall<void>(this, "UUI_ListCharacterData.ProcessArkTributeExpirationTimes"); }
	void RemoveAllSlots() { NativeCall<void>(this, "UUI_ListCharacterData.RemoveAllSlots"); }
	void RemoveFromViewport() { NativeCall<void>(this, "UUI_ListCharacterData.RemoveFromViewport"); }
	void Tick_Implementation(FGeometry MyGeometry, float InDeltaTime) { NativeCall<void, FGeometry, float>(this, "UUI_ListCharacterData.Tick_Implementation", MyGeometry, InDeltaTime); }
	void UpdateCharacterStats() { NativeCall<void>(this, "UUI_ListCharacterData.UpdateCharacterStats"); }
	bool WantsVisible() { return NativeCall<bool>(this, "UUI_ListCharacterData.WantsVisible"); }
};

