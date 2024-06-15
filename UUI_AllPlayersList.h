#pragma once

#include "BaseDeclarations.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UUI_AllPlayersList : UPrimalUI
{
	char __padding[0x90L];
	FName& CloseButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_AllPlayersList.CloseButtonName"); }
	FName& AllPlayersListBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_AllPlayersList.AllPlayersListBoxName"); }
	TSubclassOf<UDataListEntryWidget>& SlotButtonTemplateField() { return *GetNativePointerField<TSubclassOf<UDataListEntryWidget>*>(this, "UUI_AllPlayersList.SlotButtonTemplate"); }
	TArray<UDataListEntryWidget *>& EntryWidgetsField() { return *GetNativePointerField<TArray<UDataListEntryWidget *>*>(this, "UUI_AllPlayersList.EntryWidgets"); }
	TArray<FAlivePlayerDataInfo>& AllPlayersField() { return *GetNativePointerField<TArray<FAlivePlayerDataInfo>*>(this, "UUI_AllPlayersList.AllPlayers"); }
	int& CurrentSortTypeField() { return *GetNativePointerField<int*>(this, "UUI_AllPlayersList.CurrentSortType"); }
	FString& PlayerNameFilterField() { return *GetNativePointerField<FString*>(this, "UUI_AllPlayersList.PlayerNameFilter"); }
	FString& TribeNameFilterField() { return *GetNativePointerField<FString*>(this, "UUI_AllPlayersList.TribeNameFilter"); }

	// Functions

	void AddToViewport() { NativeCall<void>(this, "UUI_AllPlayersList.AddToViewport"); }
	void ClickedButton(UWidget * clickedWidget) { NativeCall<void, UWidget *>(this, "UUI_AllPlayersList.ClickedButton", clickedWidget); }
	void OnPlayerNameFilterChanged(const FText * Text) { NativeCall<void, const FText *>(this, "UUI_AllPlayersList.OnPlayerNameFilterChanged", Text); }
	void OnTribeNameFilterChanged(const FText * Text) { NativeCall<void, const FText *>(this, "UUI_AllPlayersList.OnTribeNameFilterChanged", Text); }
	void RefreshList() { NativeCall<void>(this, "UUI_AllPlayersList.RefreshList"); }
	void SlotButtonSelected(UDataListEntryWidget * theWidget) { NativeCall<void, UDataListEntryWidget *>(this, "UUI_AllPlayersList.SlotButtonSelected", theWidget); }
};

