#pragma once

#include "BaseDeclarations.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UUI_GenericConfirmationDialog : UPrimalUI
{
	char __padding[0x58L];
	FName& AcceptButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_GenericConfirmationDialog.AcceptButtonName"); }
	FName& CancelButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_GenericConfirmationDialog.CancelButtonName"); }
	FName& TitleLabelNameField() { return *GetNativePointerField<FName*>(this, "UUI_GenericConfirmationDialog.TitleLabelName"); }
	FName& MessageLabelNameField() { return *GetNativePointerField<FName*>(this, "UUI_GenericConfirmationDialog.MessageLabelName"); }
	UTextBlock * TitleTextBlockField() { return GetNativePointerField<UTextBlock *>(this, "UUI_GenericConfirmationDialog.TitleTextBlock"); }
	UTextBlock * MessageTextBlockField() { return GetNativePointerField<UTextBlock *>(this, "UUI_GenericConfirmationDialog.MessageTextBlock"); }
	UCanvasPanel * GamePadPanelField() { return GetNativePointerField<UCanvasPanel *>(this, "UUI_GenericConfirmationDialog.GamePadPanel"); }

	// Functions

	void AddToViewport() { NativeCall<void>(this, "UUI_GenericConfirmationDialog.AddToViewport"); }
	void ClickedButton(UWidget * clickedWidget) { NativeCall<void, UWidget *>(this, "UUI_GenericConfirmationDialog.ClickedButton", clickedWidget); }
	void HighlightWidgetOnStart(UPanelWidget * RestrictToPanel) { NativeCall<void, UPanelWidget *>(this, "UUI_GenericConfirmationDialog.HighlightWidgetOnStart", RestrictToPanel); }
	void InitializeDialog(const FString * TitleText, const FString * MessageText) { NativeCall<void, const FString *, const FString *>(this, "UUI_GenericConfirmationDialog.InitializeDialog", TitleText, MessageText); }
	void OnGamepadActiveChanged(bool bIsGamepadActive) { NativeCall<void, bool>(this, "UUI_GenericConfirmationDialog.OnGamepadActiveChanged", bIsGamepadActive); }
};

