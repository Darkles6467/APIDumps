#pragma once

#include "BaseDeclarations.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UUI_Notification : UPrimalUI
{
	char __padding[0x58L];
	FName& TitleLabelNameField() { return *GetNativePointerField<FName*>(this, "UUI_Notification.TitleLabelName"); }
	FName& MessageLabelNameField() { return *GetNativePointerField<FName*>(this, "UUI_Notification.MessageLabelName"); }
	FName& OkButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_Notification.OkButtonName"); }
	FName& BoxCanvasPanelNameField() { return *GetNativePointerField<FName*>(this, "UUI_Notification.BoxCanvasPanelName"); }
	bool& bReturnToMainMenuOnCloseField() { return *GetNativePointerField<bool*>(this, "UUI_Notification.bReturnToMainMenuOnClose"); }
	float& TimeSinceOpenedField() { return *GetNativePointerField<float*>(this, "UUI_Notification.TimeSinceOpened"); }
	bool& bIsErrorField() { return *GetNativePointerField<bool*>(this, "UUI_Notification.bIsError"); }
	bool& bAutoCloseField() { return *GetNativePointerField<bool*>(this, "UUI_Notification.bAutoClose"); }
	FName& PreviousStateField() { return *GetNativePointerField<FName*>(this, "UUI_Notification.PreviousState"); }
	UTextBlock * TitleLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_Notification.TitleLabel"); }
	UTextBlock * MessageLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_Notification.MessageLabel"); }
	UCanvasPanel * BoxCanvasPanelField() { return GetNativePointerField<UCanvasPanel *>(this, "UUI_Notification.BoxCanvasPanel"); }

	// Functions

	void Tick_Implementation(FGeometry MyGeometry, float InDeltaTime) { NativeCall<void, FGeometry, float>(this, "UUI_Notification.Tick_Implementation", MyGeometry, InDeltaTime); }
	void AddToViewport() { NativeCall<void>(this, "UUI_Notification.AddToViewport"); }
	void ClickedButton(UWidget * clickedWidget) { NativeCall<void, UWidget *>(this, "UUI_Notification.ClickedButton", clickedWidget); }
	void SetMessageAndTitle(FString reason, FString title) { NativeCall<void, FString, FString>(this, "UUI_Notification.SetMessageAndTitle", reason, title); }
};

