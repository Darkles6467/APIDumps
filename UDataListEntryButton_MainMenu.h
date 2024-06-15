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

struct UDataListEntryButton_MainMenu : UBaseSelectableButtonWidget
{
	char __padding[0x70L];
	FString& DisplayNameField() { return *GetNativePointerField<FString*>(this, "UDataListEntryButton_MainMenu.DisplayName"); }
	bool& bCenterDisplayNameField() { return *GetNativePointerField<bool*>(this, "UDataListEntryButton_MainMenu.bCenterDisplayName"); }
	FString& MapNameField() { return *GetNativePointerField<FString*>(this, "UDataListEntryButton_MainMenu.MapName"); }
	FString& ModNameField() { return *GetNativePointerField<FString*>(this, "UDataListEntryButton_MainMenu.ModName"); }
	FString& ModPathField() { return *GetNativePointerField<FString*>(this, "UDataListEntryButton_MainMenu.ModPath"); }
	unsigned __int64& ModItemIdField() { return *GetNativePointerField<unsigned __int64*>(this, "UDataListEntryButton_MainMenu.ModItemId"); }
	UCustomButtonWidget * ButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UDataListEntryButton_MainMenu.Button"); }
	UTextBlock * EntryNameLabelField() { return GetNativePointerField<UTextBlock *>(this, "UDataListEntryButton_MainMenu.EntryNameLabel"); }

	// Functions

	void ClickedButton(UWidget * clickedWidget) { NativeCall<void, UWidget *>(this, "UDataListEntryButton_MainMenu.ClickedButton", clickedWidget); }
	UCustomButtonWidget * GetButton() { return NativeCall<UCustomButtonWidget *>(this, "UDataListEntryButton_MainMenu.GetButton"); }
	void InitializeMe() { NativeCall<void>(this, "UDataListEntryButton_MainMenu.InitializeMe"); }
	bool IsSelected() { return NativeCall<bool>(this, "UDataListEntryButton_MainMenu.IsSelected"); }
	void SetEntryName(const FString * EntryName) { NativeCall<void, const FString *>(this, "UDataListEntryButton_MainMenu.SetEntryName", EntryName); }
	void SetSelected(bool bSelected) { NativeCall<void, bool>(this, "UDataListEntryButton_MainMenu.SetSelected", bSelected); }
};

