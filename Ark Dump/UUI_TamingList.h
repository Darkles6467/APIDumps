#pragma once

#include "BaseDeclarations.h"
#include "UPrimalSubMenuUI.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FTamingDinoInfo.h"

struct UUI_TamingList : UPrimalSubMenuUI
{
	char __padding[0x110L];
	TSubclassOf<UTamingListEntryWidget>& TamingListEntryTemplateField() { return *GetNativePointerField<TSubclassOf<UTamingListEntryWidget>*>(this, "UUI_TamingList.TamingListEntryTemplate"); }
	UTextBlock * NoTameLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_TamingList.NoTameLabel"); }
	UTextBlock * TrackerCountLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_TamingList.TrackerCountLabel"); }
	FString& NameFilterField() { return *GetNativePointerField<FString*>(this, "UUI_TamingList.NameFilter"); }
	bool& bWaitingOnServerDataField() { return *GetNativePointerField<bool*>(this, "UUI_TamingList.bWaitingOnServerData"); }
	long double& LastSyncInfoTimeField() { return *GetNativePointerField<long double*>(this, "UUI_TamingList.LastSyncInfoTime"); }

	// Functions

	void ClickedButton(UWidget * ClickedWidget) { NativeCall<void, UWidget *>(this, "UUI_TamingList.ClickedButton", ClickedWidget); }
	void InitializeSubMenu(UUI_Hub * Hub) { NativeCall<void, UUI_Hub *>(this, "UUI_TamingList.InitializeSubMenu", Hub); }
	void OnHide() { NativeCall<void>(this, "UUI_TamingList.OnHide"); }
	void OnShow() { NativeCall<void>(this, "UUI_TamingList.OnShow"); }
	void ReceiveTamingList(const TArray<FTamingDinoInfo> * TamingList) { NativeCall<void, const TArray<FTamingDinoInfo> *>(this, "UUI_TamingList.ReceiveTamingList", TamingList); }
	void SearchTextChanged(const FText * Text) { NativeCall<void, const FText *>(this, "UUI_TamingList.SearchTextChanged", Text); }
	void SetTrackingForAll(bool bTrack) { NativeCall<void, bool>(this, "UUI_TamingList.SetTrackingForAll", bTrack); }
	void SyncTamingListWidgets() { NativeCall<void>(this, "UUI_TamingList.SyncTamingListWidgets"); }
	void SyncTamingWaypoints() { NativeCall<void>(this, "UUI_TamingList.SyncTamingWaypoints"); }
	void Tick_Implementation(FGeometry MyGeometry, float InDeltaTime) { NativeCall<void, FGeometry, float>(this, "UUI_TamingList.Tick_Implementation", MyGeometry, InDeltaTime); }
};

