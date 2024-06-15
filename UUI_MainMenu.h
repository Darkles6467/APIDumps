#pragma once

#include "BaseDeclarations.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UUI_MainMenu : UPrimalUI
{
	char __padding[0x198L];
	FString& OptionsButtonNameField() { return *GetNativePointerField<FString*>(this, "UUI_MainMenu.OptionsButtonName"); }
	FString& HostButtonNameField() { return *GetNativePointerField<FString*>(this, "UUI_MainMenu.HostButtonName"); }
	FString& JoinButtonNameField() { return *GetNativePointerField<FString*>(this, "UUI_MainMenu.JoinButtonName"); }
	FString& ExitButtonNameField() { return *GetNativePointerField<FString*>(this, "UUI_MainMenu.ExitButtonName"); }
	FString& ListSessionsNameField() { return *GetNativePointerField<FString*>(this, "UUI_MainMenu.ListSessionsName"); }
	FString& NewsLabelNameField() { return *GetNativePointerField<FString*>(this, "UUI_MainMenu.NewsLabelName"); }
	FString& EditableTextJoinNameField() { return *GetNativePointerField<FString*>(this, "UUI_MainMenu.EditableTextJoinName"); }
	FName& EditableTextJoinPanelNameField() { return *GetNativePointerField<FName*>(this, "UUI_MainMenu.EditableTextJoinPanelName"); }
	FName& ConnectingDialogPanelNameField() { return *GetNativePointerField<FName*>(this, "UUI_MainMenu.ConnectingDialogPanelName"); }
	TSubclassOf<UUI_OptionsMenu>& OptionsMenuUITemplateField() { return *GetNativePointerField<TSubclassOf<UUI_OptionsMenu>*>(this, "UUI_MainMenu.OptionsMenuUITemplate"); }
	TSubclassOf<UUI_HostSession>& HostSessoinUITemplateField() { return *GetNativePointerField<TSubclassOf<UUI_HostSession>*>(this, "UUI_MainMenu.HostSessoinUITemplate"); }
	TSubclassOf<UUI_HelpPage>& HelpPageUITemplateField() { return *GetNativePointerField<TSubclassOf<UUI_HelpPage>*>(this, "UUI_MainMenu.HelpPageUITemplate"); }
	TSubclassOf<UUI_Notification>& NotifClassField() { return *GetNativePointerField<TSubclassOf<UUI_Notification>*>(this, "UUI_MainMenu.NotifClass"); }
	long double& LastUpdateModsTimeField() { return *GetNativePointerField<long double*>(this, "UUI_MainMenu.LastUpdateModsTime"); }
	bool& bWasInstallingModsField() { return *GetNativePointerField<bool*>(this, "UUI_MainMenu.bWasInstallingMods"); }
	unsigned __int64& ConfigLoadedTotalConversionField() { return *GetNativePointerField<unsigned __int64*>(this, "UUI_MainMenu.ConfigLoadedTotalConversion"); }
	UCustomButtonWidget * OptionsButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_MainMenu.OptionsButton"); }
	UCustomButtonWidget * HostButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_MainMenu.HostButton"); }
	UCustomButtonWidget * JoinButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_MainMenu.JoinButton"); }
	UCustomButtonWidget * ExitButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_MainMenu.ExitButton"); }
	UCustomButtonWidget * ListSessionsButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_MainMenu.ListSessionsButton"); }
	UImage * ListSessionsButtonBackgroundField() { return GetNativePointerField<UImage *>(this, "UUI_MainMenu.ListSessionsButtonBackground"); }
	UCustomButtonWidget * SurvivalGuideButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_MainMenu.SurvivalGuideButton"); }
	UCustomButtonWidget * CreditsButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_MainMenu.CreditsButton"); }
	UTextBlock * VersionLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_MainMenu.VersionLabel"); }
	UPrimalRichTextBlock * NewsLabelField() { return GetNativePointerField<UPrimalRichTextBlock *>(this, "UUI_MainMenu.NewsLabel"); }
	UImage * MovieBackgroundImageField() { return GetNativePointerField<UImage *>(this, "UUI_MainMenu.MovieBackgroundImage"); }
	UImage * LinuxBackgroundImageField() { return GetNativePointerField<UImage *>(this, "UUI_MainMenu.LinuxBackgroundImage"); }
	UImage * TotalConversionImageField() { return GetNativePointerField<UImage *>(this, "UUI_MainMenu.TotalConversionImage"); }
	UTextBlock * ExitButtonLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_MainMenu.ExitButtonLabel"); }
	UTextBlock * TotalConversionLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_MainMenu.TotalConversionLabel"); }
	bool& bFadedOutField() { return *GetNativePointerField<bool*>(this, "UUI_MainMenu.bFadedOut"); }
	bool& bHasRecievedNewsMessageField() { return *GetNativePointerField<bool*>(this, "UUI_MainMenu.bHasRecievedNewsMessage"); }

	// Functions

	void AddToViewport() { NativeCall<void>(this, "UUI_MainMenu.AddToViewport"); }
	void AddTotalConversionItem(FString DisplayName, FString ModName, FString ModPath, unsigned __int64 ModId, bool IsCustom) { NativeCall<void, FString, FString, FString, unsigned __int64, bool>(this, "UUI_MainMenu.AddTotalConversionItem", DisplayName, ModName, ModPath, ModId, IsCustom); }
	void ClickedButton(UWidget * clickedWidget) { NativeCall<void, UWidget *>(this, "UUI_MainMenu.ClickedButton", clickedWidget); }
	void ConfirmationDialogAccepted() { NativeCall<void>(this, "UUI_MainMenu.ConfirmationDialogAccepted"); }
	void ConfirmationDialogCancelled() { NativeCall<void>(this, "UUI_MainMenu.ConfirmationDialogCancelled"); }
	int GetSelectedTCWidgetIndex() { return NativeCall<int>(this, "UUI_MainMenu.GetSelectedTCWidgetIndex"); }
	unsigned __int64 GetSelectedTotalConversion() { return NativeCall<unsigned __int64>(this, "UUI_MainMenu.GetSelectedTotalConversion"); }
	void PopulateMods() { NativeCall<void>(this, "UUI_MainMenu.PopulateMods"); }
	void RemoveAllTCs() { NativeCall<void>(this, "UUI_MainMenu.RemoveAllTCs"); }
	void RemoveFromViewport() { NativeCall<void>(this, "UUI_MainMenu.RemoveFromViewport"); }
	void Tick_Implementation(FGeometry MyGeometry, float InDeltaTime) { NativeCall<void, FGeometry, float>(this, "UUI_MainMenu.Tick_Implementation", MyGeometry, InDeltaTime); }
	void TotalConversionSelected(UWidget * theWidget) { NativeCall<void, UWidget *>(this, "UUI_MainMenu.TotalConversionSelected", theWidget); }
};

