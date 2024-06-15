#pragma once

#include "BaseDeclarations.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FARKTributeDino.h"

struct UUI_ListTamedDinos : UPrimalUI
{
	char __padding[0x1c0L];
	FName& DownloadButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_ListTamedDinos.DownloadButtonName"); }
	FName& UploadButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_ListTamedDinos.UploadButtonName"); }
	FName& CancelButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_ListTamedDinos.CancelButtonName"); }
	FName& MyScrollBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ListTamedDinos.MyScrollBoxName"); }
	TSubclassOf<UDataListEntryWidget>& DinoSlotButtonTemplateField() { return *GetNativePointerField<TSubclassOf<UDataListEntryWidget>*>(this, "UUI_ListTamedDinos.DinoSlotButtonTemplate"); }
	FName& CharacterStatsPanelNameField() { return *GetNativePointerField<FName*>(this, "UUI_ListTamedDinos.CharacterStatsPanelName"); }
	FName& CharacterLabelNameField() { return *GetNativePointerField<FName*>(this, "UUI_ListTamedDinos.CharacterLabelName"); }
	FName& ExperienceLabelNameField() { return *GetNativePointerField<FName*>(this, "UUI_ListTamedDinos.ExperienceLabelName"); }
	FName& ExperienceBarNameField() { return *GetNativePointerField<FName*>(this, "UUI_ListTamedDinos.ExperienceBarName"); }
	FName& CharacterHypoThermalInsulationLabelNameField() { return *GetNativePointerField<FName*>(this, "UUI_ListTamedDinos.CharacterHypoThermalInsulationLabelName"); }
	FName& CharacterHyperThermalInsulationLabelNameField() { return *GetNativePointerField<FName*>(this, "UUI_ListTamedDinos.CharacterHyperThermalInsulationLabelName"); }
	FieldArray<FName, 12> StatsLabelNamesField() { return {this, "UUI_ListTamedDinos.StatsLabelNames"}; }
	bool& bOpenForDownloadField() { return *GetNativePointerField<bool*>(this, "UUI_ListTamedDinos.bOpenForDownload"); }
	TArray<UDataListEntryWidget *>& EntryWidgetsField() { return *GetNativePointerField<TArray<UDataListEntryWidget *>*>(this, "UUI_ListTamedDinos.EntryWidgets"); }
	FieldArray<UTextBlock *, 12> StatsLabelsField() { return {this, "UUI_ListTamedDinos.StatsLabels"}; }
	UTextBlock * CharacterLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_ListTamedDinos.CharacterLabel"); }
	UTextBlock * ExperienceLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_ListTamedDinos.ExperienceLabel"); }
	UTextBlock * CharacterHypoThermalInsulationLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_ListTamedDinos.CharacterHypoThermalInsulationLabel"); }
	UTextBlock * CharacterHyperThermalInsulationLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_ListTamedDinos.CharacterHyperThermalInsulationLabel"); }
	UProgressBar * ExperienceBarField() { return GetNativePointerField<UProgressBar *>(this, "UUI_ListTamedDinos.ExperienceBar"); }
	TArray<TWeakObjectPtr<APrimalDinoCharacter>>& DinoListField() { return *GetNativePointerField<TArray<TWeakObjectPtr<APrimalDinoCharacter>>*>(this, "UUI_ListTamedDinos.DinoList"); }
	TArray<FARKTributeDino>& DinoDataListField() { return *GetNativePointerField<TArray<FARKTributeDino>*>(this, "UUI_ListTamedDinos.DinoDataList"); }
	TArray<unsigned int>& DinoDataListExpirationTimesUTCField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "UUI_ListTamedDinos.DinoDataListExpirationTimesUTC"); }
	FVector& OpenedAtLocField() { return *GetNativePointerField<FVector*>(this, "UUI_ListTamedDinos.OpenedAtLoc"); }

	// Functions

	void AddToViewport() { NativeCall<void>(this, "UUI_ListTamedDinos.AddToViewport"); }
	void ClickedButton(UWidget * clickedWidget) { NativeCall<void, UWidget *>(this, "UUI_ListTamedDinos.ClickedButton", clickedWidget); }
	void ConfirmationDialogAccepted() { NativeCall<void>(this, "UUI_ListTamedDinos.ConfirmationDialogAccepted"); }
	void DinoSlotButtonSelected(UDataListEntryWidget * theWidget) { NativeCall<void, UDataListEntryWidget *>(this, "UUI_ListTamedDinos.DinoSlotButtonSelected", theWidget); }
	void DownloadSelectedDino() { NativeCall<void>(this, "UUI_ListTamedDinos.DownloadSelectedDino"); }
	FARKTributeDino * GetSelectedDinoForDownload(FARKTributeDino * result) { return NativeCall<FARKTributeDino *, FARKTributeDino *>(this, "UUI_ListTamedDinos.GetSelectedDinoForDownload", result); }
	TWeakObjectPtr<APrimalDinoCharacter> * GetSelectedDinoForUpload(TWeakObjectPtr<APrimalDinoCharacter> * result) { return NativeCall<TWeakObjectPtr<APrimalDinoCharacter> *, TWeakObjectPtr<APrimalDinoCharacter> *>(this, "UUI_ListTamedDinos.GetSelectedDinoForUpload", result); }
	int GetSelectedSlotButtonIndex() { return NativeCall<int>(this, "UUI_ListTamedDinos.GetSelectedSlotButtonIndex"); }
	void GetTamedDinos() { NativeCall<void>(this, "UUI_ListTamedDinos.GetTamedDinos"); }
	void GetUploadedDinos() { NativeCall<void>(this, "UUI_ListTamedDinos.GetUploadedDinos"); }
	void OnUploadedDinosLoaded(const TArray<FARKTributeDino> MyTamedDinosData, const TArray<unsigned int> * ExpirationTimesUTC) { NativeCall<void, const TArray<FARKTributeDino>, const TArray<unsigned int> *>(this, "UUI_ListTamedDinos.OnUploadedDinosLoaded", MyTamedDinosData, ExpirationTimesUTC); }
	void PopulateDinoList() { NativeCall<void>(this, "UUI_ListTamedDinos.PopulateDinoList"); }
	void ProcessArkTributeExpirationTimes() { NativeCall<void>(this, "UUI_ListTamedDinos.ProcessArkTributeExpirationTimes"); }
	void RemoveAllSlots() { NativeCall<void>(this, "UUI_ListTamedDinos.RemoveAllSlots"); }
	void RemoveFromViewport() { NativeCall<void>(this, "UUI_ListTamedDinos.RemoveFromViewport"); }
	void Tick_Implementation(FGeometry MyGeometry, float InDeltaTime) { NativeCall<void, FGeometry, float>(this, "UUI_ListTamedDinos.Tick_Implementation", MyGeometry, InDeltaTime); }
	void UpdateDinoStats() { NativeCall<void>(this, "UUI_ListTamedDinos.UpdateDinoStats"); }
	void UpdateDinoStatsForDownload() { NativeCall<void>(this, "UUI_ListTamedDinos.UpdateDinoStatsForDownload"); }
	void UpdateDinoStatsForUpload() { NativeCall<void>(this, "UUI_ListTamedDinos.UpdateDinoStatsForUpload"); }
	void UploadSelectedDino() { NativeCall<void>(this, "UUI_ListTamedDinos.UploadSelectedDino"); }
};

