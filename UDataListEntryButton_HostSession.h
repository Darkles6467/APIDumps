#pragma once

#include "BaseDeclarations.h"
#include "UBaseSelectableButtonWidget.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UDataListEntryButton_HostSession : UBaseSelectableButtonWidget
{
	char __padding[0xb8L];
	FString& DisplayNameField() { return *GetNativePointerField<FString*>(this, "UDataListEntryButton_HostSession.DisplayName"); }
	bool& bCenterDisplayNameField() { return *GetNativePointerField<bool*>(this, "UDataListEntryButton_HostSession.bCenterDisplayName"); }
	FString& ShortMapNameField() { return *GetNativePointerField<FString*>(this, "UDataListEntryButton_HostSession.ShortMapName"); }
	FString& LongMapNameField() { return *GetNativePointerField<FString*>(this, "UDataListEntryButton_HostSession.LongMapName"); }
	FString& ModNameField() { return *GetNativePointerField<FString*>(this, "UDataListEntryButton_HostSession.ModName"); }
	FString& ModPathField() { return *GetNativePointerField<FString*>(this, "UDataListEntryButton_HostSession.ModPath"); }
	unsigned __int64& ModItemIdField() { return *GetNativePointerField<unsigned __int64*>(this, "UDataListEntryButton_HostSession.ModItemId"); }
	UCustomButtonWidget * ButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UDataListEntryButton_HostSession.Button"); }
	UCustomButtonWidget * DeleteSaveDataButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UDataListEntryButton_HostSession.DeleteSaveDataButton"); }
	UCustomButtonWidget * DeleteServerDataButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UDataListEntryButton_HostSession.DeleteServerDataButton"); }
	bool& bHasSaveDataField() { return *GetNativePointerField<bool*>(this, "UDataListEntryButton_HostSession.bHasSaveData"); }
	bool& bHasServerDataField() { return *GetNativePointerField<bool*>(this, "UDataListEntryButton_HostSession.bHasServerData"); }
	USizeBox * SaveDataIconField() { return GetNativePointerField<USizeBox *>(this, "UDataListEntryButton_HostSession.SaveDataIcon"); }
	USizeBox * ServerDataIconField() { return GetNativePointerField<USizeBox *>(this, "UDataListEntryButton_HostSession.ServerDataIcon"); }
	UTextBlock * EntryNameLabelField() { return GetNativePointerField<UTextBlock *>(this, "UDataListEntryButton_HostSession.EntryNameLabel"); }

	// Functions

	void ClickedButton(UWidget * clickedWidget) { NativeCall<void, UWidget *>(this, "UDataListEntryButton_HostSession.ClickedButton", clickedWidget); }
	UCustomButtonWidget * GetButton() { return NativeCall<UCustomButtonWidget *>(this, "UDataListEntryButton_HostSession.GetButton"); }
	void InitializeMe() { NativeCall<void>(this, "UDataListEntryButton_HostSession.InitializeMe"); }
	bool IsSelected() { return NativeCall<bool>(this, "UDataListEntryButton_HostSession.IsSelected"); }
	void SetEntryName(const FString * EntryName) { NativeCall<void, const FString *>(this, "UDataListEntryButton_HostSession.SetEntryName", EntryName); }
	void SetHasSaveData(bool bSaveData) { NativeCall<void, bool>(this, "UDataListEntryButton_HostSession.SetHasSaveData", bSaveData); }
	void SetHasServerData(bool bServerData) { NativeCall<void, bool>(this, "UDataListEntryButton_HostSession.SetHasServerData", bServerData); }
	void SetParentScrollBox(UScrollBox * InParentScrollBox) { NativeCall<void, UScrollBox *>(this, "UDataListEntryButton_HostSession.SetParentScrollBox", InParentScrollBox); }
	void SetSelected(bool bSelected) { NativeCall<void, bool>(this, "UDataListEntryButton_HostSession.SetSelected", bSelected); }
	void SetTextJustification(EHorizontalAlignment Justification) { NativeCall<void, EHorizontalAlignment>(this, "UDataListEntryButton_HostSession.SetTextJustification", Justification); }
	UCustomButtonWidget * GetSaveDataButton() { return NativeCall<UCustomButtonWidget *>(this, "UDataListEntryButton_HostSession.GetSaveDataButton"); }
	UCustomButtonWidget * GetServerDataButton() { return NativeCall<UCustomButtonWidget *>(this, "UDataListEntryButton_HostSession.GetServerDataButton"); }
};

