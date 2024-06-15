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

struct UStatsPanelWidget_Obelisk : UStatsPanelWidget
{
	char __padding[0x80L];
	FName& NameLabelNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Obelisk.NameLabelName"); }
	FName& DescriptionLabelNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Obelisk.DescriptionLabelName"); }
	FName& UploadCharacterDataButtonNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Obelisk.UploadCharacterDataButtonName"); }
	FName& TravelToAnotherServerButtonNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Obelisk.TravelToAnotherServerButtonName"); }
	FName& RefreshArkButtonNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Obelisk.RefreshArkButtonName"); }
	FName& ArkStorageStatNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Obelisk.ArkStorageStatName"); }
	FName& ArkDinoStatNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Obelisk.ArkDinoStatName"); }
	FName& StorageStatNameField() { return *GetNativePointerField<FName*>(this, "UStatsPanelWidget_Obelisk.StorageStatName"); }
	UTextBlock * NameLabelField() { return GetNativePointerField<UTextBlock *>(this, "UStatsPanelWidget_Obelisk.NameLabel"); }
	UTextBlock * DescriptionLabelField() { return GetNativePointerField<UTextBlock *>(this, "UStatsPanelWidget_Obelisk.DescriptionLabel"); }

	// Functions

	void ClickedButton(UWidget * clickedButton) { NativeCall<void, UWidget *>(this, "UStatsPanelWidget_Obelisk.ClickedButton", clickedButton); }
	void DisableRefreshArkButton() { NativeCall<void>(this, "UStatsPanelWidget_Obelisk.DisableRefreshArkButton"); }
	void EnableRefreshArkButton() { NativeCall<void>(this, "UStatsPanelWidget_Obelisk.EnableRefreshArkButton"); }
	void Init(UUI_Inventory * InInventoryUI) { NativeCall<void, UUI_Inventory *>(this, "UStatsPanelWidget_Obelisk.Init", InInventoryUI); }
	void RefreshStats() { NativeCall<void>(this, "UStatsPanelWidget_Obelisk.RefreshStats"); }
	void SetInventoryComp(UPrimalInventoryComponent * InInventoryComponent) { NativeCall<void, UPrimalInventoryComponent *>(this, "UStatsPanelWidget_Obelisk.SetInventoryComp", InInventoryComponent); }
	void Tick_Implementation(FGeometry MyGeometry, float InDeltaTime) { NativeCall<void, FGeometry, float>(this, "UStatsPanelWidget_Obelisk.Tick_Implementation", MyGeometry, InDeltaTime); }
};

