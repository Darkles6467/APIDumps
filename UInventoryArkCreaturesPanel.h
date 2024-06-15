#pragma once

#include "BaseDeclarations.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FARKTributeDinoListing.h"
#include "FARKTributeDino.h"

struct UInventoryArkCreaturesPanel : UPrimalUI
{
	char __padding[0x300L];
	FName& UploadedCreatureListNameField() { return *GetNativePointerField<FName*>(this, "UInventoryArkCreaturesPanel.UploadedCreatureListName"); }
	FName& LocalCreatureListNameField() { return *GetNativePointerField<FName*>(this, "UInventoryArkCreaturesPanel.LocalCreatureListName"); }
	FName& UploadCreatureButtonNameField() { return *GetNativePointerField<FName*>(this, "UInventoryArkCreaturesPanel.UploadCreatureButtonName"); }
	FName& DownloadCreatureButtonNameField() { return *GetNativePointerField<FName*>(this, "UInventoryArkCreaturesPanel.DownloadCreatureButtonName"); }
	TSubclassOf<UDinoListButtonWidget>& DinoSlotButtonTemplateField() { return *GetNativePointerField<TSubclassOf<UDinoListButtonWidget>*>(this, "UInventoryArkCreaturesPanel.DinoSlotButtonTemplate"); }
	UUI_Inventory * InventoryUIField() { return GetNativePointerField<UUI_Inventory *>(this, "UInventoryArkCreaturesPanel.InventoryUI"); }
	FARKTributeDino& LastDownloadedDinoField() { return *GetNativePointerField<FARKTributeDino*>(this, "UInventoryArkCreaturesPanel.LastDownloadedDino"); }

	// Functions

	void ClickedButton(UWidget * clickedButton) { NativeCall<void, UWidget *>(this, "UInventoryArkCreaturesPanel.ClickedButton", clickedButton); }
	void ConfirmationDialogAccepted() { NativeCall<void>(this, "UInventoryArkCreaturesPanel.ConfirmationDialogAccepted"); }
	void DownloadSelectedDino() { NativeCall<void>(this, "UInventoryArkCreaturesPanel.DownloadSelectedDino"); }
	FARKTributeDino * GetSelectedDinoForDownload(FARKTributeDino * result) { return NativeCall<FARKTributeDino *, FARKTributeDino *>(this, "UInventoryArkCreaturesPanel.GetSelectedDinoForDownload", result); }
	TWeakObjectPtr<APrimalDinoCharacter> * GetSelectedDinoForUpload(TWeakObjectPtr<APrimalDinoCharacter> * result) { return NativeCall<TWeakObjectPtr<APrimalDinoCharacter> *, TWeakObjectPtr<APrimalDinoCharacter> *>(this, "UInventoryArkCreaturesPanel.GetSelectedDinoForUpload", result); }
	FDinoKey * GetSelectedDownloadSlotKey(FDinoKey * result) { return NativeCall<FDinoKey *, FDinoKey *>(this, "UInventoryArkCreaturesPanel.GetSelectedDownloadSlotKey", result); }
	FDinoKey * GetSelectedUploadSlotKey(FDinoKey * result) { return NativeCall<FDinoKey *, FDinoKey *>(this, "UInventoryArkCreaturesPanel.GetSelectedUploadSlotKey", result); }
	void GetTamedDinos() { NativeCall<void>(this, "UInventoryArkCreaturesPanel.GetTamedDinos"); }
	void GetUploadedDinos() { NativeCall<void>(this, "UInventoryArkCreaturesPanel.GetUploadedDinos"); }
	void Init(UUI_Inventory * InInventory) { NativeCall<void, UUI_Inventory *>(this, "UInventoryArkCreaturesPanel.Init", InInventory); }
	void LocalDinoSlotButtonSelected(UWidget * theWidget) { NativeCall<void, UWidget *>(this, "UInventoryArkCreaturesPanel.LocalDinoSlotButtonSelected", theWidget); }
	void OnDownloadDinoRequestFinished(bool Success) { NativeCall<void, bool>(this, "UInventoryArkCreaturesPanel.OnDownloadDinoRequestFinished", Success); }
	void OnUploadedDinosChanged() { NativeCall<void>(this, "UInventoryArkCreaturesPanel.OnUploadedDinosChanged"); }
	void OnUploadedDinosListingsLoaded(const TArray<FARKTributeDinoListing> * DinosListings) { NativeCall<void, const TArray<FARKTributeDinoListing> *>(this, "UInventoryArkCreaturesPanel.OnUploadedDinosListingsLoaded", DinosListings); }
	void OnUploadedDinosLoaded(const TArray<FARKTributeDino> * MyTamedDinosData, const TArray<unsigned int> * ExpirationTimesUTC) { NativeCall<void, const TArray<FARKTributeDino> *, const TArray<unsigned int> *>(this, "UInventoryArkCreaturesPanel.OnUploadedDinosLoaded", MyTamedDinosData, ExpirationTimesUTC); }
	void PopulateDinoList() { NativeCall<void>(this, "UInventoryArkCreaturesPanel.PopulateDinoList"); }
	void ProcessArkTributeExpirationTimes() { NativeCall<void>(this, "UInventoryArkCreaturesPanel.ProcessArkTributeExpirationTimes"); }
	void Show() { NativeCall<void>(this, "UInventoryArkCreaturesPanel.Show"); }
	void Tick_Implementation(FGeometry MyGeometry, float InDeltaTime) { NativeCall<void, FGeometry, float>(this, "UInventoryArkCreaturesPanel.Tick_Implementation", MyGeometry, InDeltaTime); }
	void UploadSelectedDino() { NativeCall<void>(this, "UInventoryArkCreaturesPanel.UploadSelectedDino"); }
	void UploadedDinoSlotButtonSelected(UWidget * theWidget) { NativeCall<void, UWidget *>(this, "UInventoryArkCreaturesPanel.UploadedDinoSlotButtonSelected", theWidget); }
};

