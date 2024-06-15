#pragma once

#include "BaseDeclarations.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UUI_PauseMenu : UPrimalUI
{
	char __padding[0x160L];
	FString& CloseButtonNameField() { return *GetNativePointerField<FString*>(this, "UUI_PauseMenu.CloseButtonName"); }
	FString& QuitButtonNameField() { return *GetNativePointerField<FString*>(this, "UUI_PauseMenu.QuitButtonName"); }
	FString& QuitButtonTextBlockNameField() { return *GetNativePointerField<FString*>(this, "UUI_PauseMenu.QuitButtonTextBlockName"); }
	FString& TestWidgetNameField() { return *GetNativePointerField<FString*>(this, "UUI_PauseMenu.TestWidgetName"); }
	FName& InventoryButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_PauseMenu.InventoryButtonName"); }
	FName& TribeManagerButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_PauseMenu.TribeManagerButtonName"); }
	FName& OptionsButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_PauseMenu.OptionsButtonName"); }
	FString& InviteFriendsButtonNameField() { return *GetNativePointerField<FString*>(this, "UUI_PauseMenu.InviteFriendsButtonName"); }
	FName& ServerPingTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UUI_PauseMenu.ServerPingTextBlockName"); }
	FString& HelpButtonNameField() { return *GetNativePointerField<FString*>(this, "UUI_PauseMenu.HelpButtonName"); }
	TSubclassOf<UUI_OptionsMenu>& OptionsMenuUITemplateField() { return *GetNativePointerField<TSubclassOf<UUI_OptionsMenu>*>(this, "UUI_PauseMenu.OptionsMenuUITemplate"); }
	UImage * BackgroundOverlayField() { return GetNativePointerField<UImage *>(this, "UUI_PauseMenu.BackgroundOverlay"); }
	UTextBlock * QuitButtonTextBlockField() { return GetNativePointerField<UTextBlock *>(this, "UUI_PauseMenu.QuitButtonTextBlock"); }
	UPrimalRichTextBlock * GameOptionsTextBlockField() { return GetNativePointerField<UPrimalRichTextBlock *>(this, "UUI_PauseMenu.GameOptionsTextBlock"); }
	UPrimalRichTextBlock * ServerPingTextBlockField() { return GetNativePointerField<UPrimalRichTextBlock *>(this, "UUI_PauseMenu.ServerPingTextBlock"); }
	UPrimalRichTextBlock * PlayerListLabelField() { return GetNativePointerField<UPrimalRichTextBlock *>(this, "UUI_PauseMenu.PlayerListLabel"); }
	UPrimalRichTextBlock * PressStartLabelField() { return GetNativePointerField<UPrimalRichTextBlock *>(this, "UUI_PauseMenu.PressStartLabel"); }
	FString& EnableCreativeModeLabelField() { return *GetNativePointerField<FString*>(this, "UUI_PauseMenu.EnableCreativeModeLabel"); }
	FString& DisableCreativeModeLabelField() { return *GetNativePointerField<FString*>(this, "UUI_PauseMenu.DisableCreativeModeLabel"); }
	long double& StartRealTimeSecondsField() { return *GetNativePointerField<long double*>(this, "UUI_PauseMenu.StartRealTimeSeconds"); }
	bool& bLeftShoulderPressedField() { return *GetNativePointerField<bool*>(this, "UUI_PauseMenu.bLeftShoulderPressed"); }
	bool& bRightShoulderPressedField() { return *GetNativePointerField<bool*>(this, "UUI_PauseMenu.bRightShoulderPressed"); }
	bool& bGamePadFaceButtonLeftPressedField() { return *GetNativePointerField<bool*>(this, "UUI_PauseMenu.bGamePadFaceButtonLeftPressed"); }
	bool& bGamePadFaceButtonTopPressedField() { return *GetNativePointerField<bool*>(this, "UUI_PauseMenu.bGamePadFaceButtonTopPressed"); }
	bool& bGamePadSpecialRightField() { return *GetNativePointerField<bool*>(this, "UUI_PauseMenu.bGamePadSpecialRight"); }
	bool& bDisplaySplitScreenMessageField() { return *GetNativePointerField<bool*>(this, "UUI_PauseMenu.bDisplaySplitScreenMessage"); }

	// Functions

	void AddToViewport() { NativeCall<void>(this, "UUI_PauseMenu.AddToViewport"); }
	void ClickedButton(UWidget * clickedWidget) { NativeCall<void, UWidget *>(this, "UUI_PauseMenu.ClickedButton", clickedWidget); }
	void ClickedButtonWithController(UWidget * clickedWidget, int ControllerId) { NativeCall<void, UWidget *, int>(this, "UUI_PauseMenu.ClickedButtonWithController", clickedWidget, ControllerId); }
	void EscapeClosed() { NativeCall<void>(this, "UUI_PauseMenu.EscapeClosed"); }
	void HandleSignOutStatusChange() { NativeCall<void>(this, "UUI_PauseMenu.HandleSignOutStatusChange"); }
	void RemoveFromViewport() { NativeCall<void>(this, "UUI_PauseMenu.RemoveFromViewport"); }
	void Tick_Implementation(FGeometry MyGeometry, float InDeltaTime) { NativeCall<void, FGeometry, float>(this, "UUI_PauseMenu.Tick_Implementation", MyGeometry, InDeltaTime); }
};

