#pragma once

#include "BaseDeclarations.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UUI_SteamInventoryStatusPopup : UPrimalUI
{
	char __padding[0x90L];
	FName& CloseButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_SteamInventoryStatusPopup.CloseButtonName"); }
	FName& TitleLabelNameField() { return *GetNativePointerField<FName*>(this, "UUI_SteamInventoryStatusPopup.TitleLabelName"); }
	FName& DownloadMessageLabelNameField() { return *GetNativePointerField<FName*>(this, "UUI_SteamInventoryStatusPopup.DownloadMessageLabelName"); }
	FName& UploadMessageLabelNameField() { return *GetNativePointerField<FName*>(this, "UUI_SteamInventoryStatusPopup.UploadMessageLabelName"); }
	FString& TitleTextField() { return *GetNativePointerField<FString*>(this, "UUI_SteamInventoryStatusPopup.TitleText"); }
	FString& MessageTextField() { return *GetNativePointerField<FString*>(this, "UUI_SteamInventoryStatusPopup.MessageText"); }
	int& NumberOfDotsField() { return *GetNativePointerField<int*>(this, "UUI_SteamInventoryStatusPopup.NumberOfDots"); }
	float& TimeoutIntervalField() { return *GetNativePointerField<float*>(this, "UUI_SteamInventoryStatusPopup.TimeoutInterval"); }
	float& DotsUpdateIntervalField() { return *GetNativePointerField<float*>(this, "UUI_SteamInventoryStatusPopup.DotsUpdateInterval"); }
	bool& bTransferFailedField() { return *GetNativePointerField<bool*>(this, "UUI_SteamInventoryStatusPopup.bTransferFailed"); }
	UTextBlock * TitleTextBlockField() { return GetNativePointerField<UTextBlock *>(this, "UUI_SteamInventoryStatusPopup.TitleTextBlock"); }
	UTextBlock * DownloadMessageTextBlockField() { return GetNativePointerField<UTextBlock *>(this, "UUI_SteamInventoryStatusPopup.DownloadMessageTextBlock"); }
	UTextBlock * UploadMessageTextBlockField() { return GetNativePointerField<UTextBlock *>(this, "UUI_SteamInventoryStatusPopup.UploadMessageTextBlock"); }
	UTextBlock * CurrentActiveMessageTextBlockField() { return GetNativePointerField<UTextBlock *>(this, "UUI_SteamInventoryStatusPopup.CurrentActiveMessageTextBlock"); }
	long double& LastOpenedTimeField() { return *GetNativePointerField<long double*>(this, "UUI_SteamInventoryStatusPopup.LastOpenedTime"); }
	long double& LastDotsUpdateTimeField() { return *GetNativePointerField<long double*>(this, "UUI_SteamInventoryStatusPopup.LastDotsUpdateTime"); }
	bool& bForDownloadField() { return *GetNativePointerField<bool*>(this, "UUI_SteamInventoryStatusPopup.bForDownload"); }
	int& CurrentDotsCountField() { return *GetNativePointerField<int*>(this, "UUI_SteamInventoryStatusPopup.CurrentDotsCount"); }

	// Functions

	void AddToViewport() { NativeCall<void>(this, "UUI_SteamInventoryStatusPopup.AddToViewport"); }
	void ClickedButton(UWidget * clickedWidget) { NativeCall<void, UWidget *>(this, "UUI_SteamInventoryStatusPopup.ClickedButton", clickedWidget); }
	void InitializeDialog(const FString * titleText, const FString * messageText, bool bForDownload) { NativeCall<void, const FString *, const FString *, bool>(this, "UUI_SteamInventoryStatusPopup.InitializeDialog", titleText, messageText, bForDownload); }
	void Tick_Implementation(FGeometry MyGeometry, float InDeltaTime) { NativeCall<void, FGeometry, float>(this, "UUI_SteamInventoryStatusPopup.Tick_Implementation", MyGeometry, InDeltaTime); }
	void TransferFailed(const FString * ErrorMessage) { NativeCall<void, const FString *>(this, "UUI_SteamInventoryStatusPopup.TransferFailed", ErrorMessage); }
};

