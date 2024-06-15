#pragma once

#include "BaseDeclarations.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FAdminPlayerDataInfo.h"
#include "FServerOptions.h"

struct UUI_AdminMangment : UPrimalUI
{
	char __padding[0x488L];
	FString& CurruntFunctionNameField() { return *GetNativePointerField<FString*>(this, "UUI_AdminMangment.CurruntFunctionName"); }
	TArray<FString>& CheatsFunctionNamesslistField() { return *GetNativePointerField<TArray<FString>*>(this, "UUI_AdminMangment.CheatsFunctionNamesslist"); }
	TArray<FAdminPlayerDataInfo>& ConnectedPlayerslistField() { return *GetNativePointerField<TArray<FAdminPlayerDataInfo>*>(this, "UUI_AdminMangment.ConnectedPlayerslist"); }
	TArray<FAdminPlayerDataInfo>& BannedPlayerslistField() { return *GetNativePointerField<TArray<FAdminPlayerDataInfo>*>(this, "UUI_AdminMangment.BannedPlayerslist"); }
	TArray<FAdminPlayerDataInfo>& WhiteListedPlayerslistField() { return *GetNativePointerField<TArray<FAdminPlayerDataInfo>*>(this, "UUI_AdminMangment.WhiteListedPlayerslist"); }
	FName& FPSValueNameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.FPSValueName"); }
	FName& NumConnectedNameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.NumConnectedName"); }
	FName& NumBannedNameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.NumBannedName"); }
	FName& NumWhiteListedNameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.NumWhiteListedName"); }
	FName& MaxStructuresInRangeNameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.MaxStructuresInRangeName"); }
	FName& RemoveFromWhiteListButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.RemoveFromWhiteListButtonName"); }
	FName& CancelCheatCommandButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.CancelCheatCommandButtonName"); }
	FName& ExcuteCheatCommandButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.ExcuteCheatCommandButtonName"); }
	FName& CopyPlayerIDCheatCommandButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.CopyPlayerIDCheatCommandButtonName"); }
	FName& CopySteamIDCheatCommandButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.CopySteamIDCheatCommandButtonName"); }
	FName& CheatsScrollBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.CheatsScrollBoxName"); }
	TSubclassOf<UDataListEntryWidget>& CheatSlotButtonTemplateField() { return *GetNativePointerField<TSubclassOf<UDataListEntryWidget>*>(this, "UUI_AdminMangment.CheatSlotButtonTemplate"); }
	TArray<UDataListEntryWidget *>& EntryWidgetsCheatsFunctionNamesField() { return *GetNativePointerField<TArray<UDataListEntryWidget *>*>(this, "UUI_AdminMangment.EntryWidgetsCheatsFunctionNames"); }
	FName& CancelManualBanButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.CancelManualBanButtonName"); }
	FName& ExcuteManualBanButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.ExcuteManualBanButtonName"); }
	FName& CancelManualwhiteListedButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.CancelManualwhiteListedButtonName"); }
	FName& ExcuteManualwhiteListedButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.ExcuteManualwhiteListedButtonName"); }
	FName& KickButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.KickButtonName"); }
	FName& RefreshButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.RefreshButtonName"); }
	FName& paramtersPanelNameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.paramtersPanelName"); }
	FName& ManualBanPanelNameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.ManualBanPanelName"); }
	FName& ManualWhiteListedPaneNameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.ManualWhiteListedPaneName"); }
	FName& ConnectedPlayerPanelNameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.ConnectedPlayerPanelName"); }
	FName& RefreshingConnectedPlayerPanelNameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.RefreshingConnectedPlayerPanelName"); }
	FName& BannedPlayerPanelNameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.BannedPlayerPanelName"); }
	FName& RefreshingBannedPlayerPanelNameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.RefreshingBannedPlayerPanelName"); }
	FName& WhiteListedPlayerPanelNameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.WhiteListedPlayerPanelName"); }
	FName& RefreshingWhiteListedPlayerPanelNameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.RefreshingWhiteListedPlayerPanelName"); }
	FName& ParmterTextFieldNameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.ParmterTextFieldName"); }
	FName& ChetFunctionSelectedImageNameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.ChetFunctionSelectedImageName"); }
	FName& DifficultyOffsetNameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.DifficultyOffsetName"); }
	FName& GlobalVoiceChatNameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.GlobalVoiceChatName"); }
	FName& ProximityChatNameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.ProximityChatName"); }
	FName& NoTributeDownloadsNameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.NoTributeDownloadsName"); }
	FName& AllowThirdPersonPlayerNameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.AllowThirdPersonPlayerName"); }
	FName& AlwaysNotifyPlayerLeftNameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.AlwaysNotifyPlayerLeftName"); }
	FName& DontAlwaysNotifyPlayerJoinedNameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.DontAlwaysNotifyPlayerJoinedName"); }
	FName& AddToWhiteListButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.AddToWhiteListButtonName"); }
	FName& ManualAddToWhiteListButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.ManualAddToWhiteListButtonName"); }
	FName& ServerHardcoreNameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.ServerHardcoreName"); }
	FName& ServerPVENameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.ServerPVEName"); }
	FName& ServerCrosshairNameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.ServerCrosshairName"); }
	FName& ServerForceNoHUDNameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.ServerForceNoHUDName"); }
	FName& FunctionDiscriptionNameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.FunctionDiscriptionName"); }
	FName& ShowMapPlayerLocationNameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.ShowMapPlayerLocationName"); }
	FName& ServerPasswordNameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.ServerPasswordName"); }
	FName& ServerAdminPasswordNameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.ServerAdminPasswordName"); }
	FName& PositionNameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.PositionName"); }
	FName& MessgaeOfTheDayNameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.MessgaeOfTheDayName"); }
	FName& SetMessgaeOfTheDayNameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.SetMessgaeOfTheDayName"); }
	FName& AllConnectedPlayerScrollBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.AllConnectedPlayerScrollBoxName"); }
	FName& AllBannedPlayerScrollBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.AllBannedPlayerScrollBoxName"); }
	FName& AllWhiteListedPlayerScrollBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.AllWhiteListedPlayerScrollBoxName"); }
	FName& ServerScrollBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.ServerScrollBoxName"); }
	TSubclassOf<UDataListEntryWidget>& SlotButtonTemplateField() { return *GetNativePointerField<TSubclassOf<UDataListEntryWidget>*>(this, "UUI_AdminMangment.SlotButtonTemplate"); }
	TSubclassOf<UDataListEntryWidget>& ServerInfoButtonTemplateField() { return *GetNativePointerField<TSubclassOf<UDataListEntryWidget>*>(this, "UUI_AdminMangment.ServerInfoButtonTemplate"); }
	FName& BanButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.BanButtonName"); }
	FName& ManualBanButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.ManualBanButtonName"); }
	FName& EnterPramterNameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.EnterPramterName"); }
	FName& UnBanButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.UnBanButtonName"); }
	FName& CloseButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.CloseButtonName"); }
	FName& DirectMessageTextFieldNameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.DirectMessageTextFieldName"); }
	FName& DirectMessageButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.DirectMessageButtonName"); }
	FName& ErrorBlockNameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.ErrorBlockName"); }
	FName& errorBlockManualBanNameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.errorBlockManualBanName"); }
	FName& errorBlockManualWhiteListedNameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.errorBlockManualWhiteListedName"); }
	FName& errorBlockMessageOfTheDayNameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.errorBlockMessageOfTheDayName"); }
	FName& ManualBanningSteamIDTextFieldNameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.ManualBanningSteamIDTextFieldName"); }
	FName& ManualWhiteListedSteamIDTextFieldNameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.ManualWhiteListedSteamIDTextFieldName"); }
	AShooterPlayerController * OwnerPlayerControllerField() { return GetNativePointerField<AShooterPlayerController *>(this, "UUI_AdminMangment.OwnerPlayerController"); }
	FName& CustomGameUIButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_AdminMangment.CustomGameUIButtonName"); }
	UServerInfoInfoEntryButton * FPSEntryField() { return GetNativePointerField<UServerInfoInfoEntryButton *>(this, "UUI_AdminMangment.FPSEntry"); }
	TArray<UDataListEntryWidget *>& EntryWidgetsConnedtedPlayersField() { return *GetNativePointerField<TArray<UDataListEntryWidget *>*>(this, "UUI_AdminMangment.EntryWidgetsConnedtedPlayers"); }
	TArray<UDataListEntryWidget *>& EntryWidgetsBannedPlayersField() { return *GetNativePointerField<TArray<UDataListEntryWidget *>*>(this, "UUI_AdminMangment.EntryWidgetsBannedPlayers"); }
	TArray<UDataListEntryWidget *>& EntryWidgetsWhiteListedPlayersField() { return *GetNativePointerField<TArray<UDataListEntryWidget *>*>(this, "UUI_AdminMangment.EntryWidgetsWhiteListedPlayers"); }
	TArray<UDataListEntryWidget *>& EntryWidgetsSeverInfoNamesField() { return *GetNativePointerField<TArray<UDataListEntryWidget *>*>(this, "UUI_AdminMangment.EntryWidgetsSeverInfoNames"); }
	int& MaxDirectMessageCharsField() { return *GetNativePointerField<int*>(this, "UUI_AdminMangment.MaxDirectMessageChars"); }
	int& MaxSteamIDCharsField() { return *GetNativePointerField<int*>(this, "UUI_AdminMangment.MaxSteamIDChars"); }
	int& MaxMessageofthedayCharsField() { return *GetNativePointerField<int*>(this, "UUI_AdminMangment.MaxMessageofthedayChars"); }
	float& ServerFramerateField() { return *GetNativePointerField<float*>(this, "UUI_AdminMangment.ServerFramerate"); }
	bool& IsDidecatedServerUIField() { return *GetNativePointerField<bool*>(this, "UUI_AdminMangment.IsDidecatedServerUI"); }
	UTextBlock * FPSValueField() { return GetNativePointerField<UTextBlock *>(this, "UUI_AdminMangment.FPSValue"); }
	UTextBlock * NumBannedField() { return GetNativePointerField<UTextBlock *>(this, "UUI_AdminMangment.NumBanned"); }
	UTextBlock * NumConnectedField() { return GetNativePointerField<UTextBlock *>(this, "UUI_AdminMangment.NumConnected"); }
	UTextBlock * NumWhiteListedField() { return GetNativePointerField<UTextBlock *>(this, "UUI_AdminMangment.NumWhiteListed"); }
	UMultiLineEditableTextBox * MessgaeOfTheDayField() { return GetNativePointerField<UMultiLineEditableTextBox *>(this, "UUI_AdminMangment.MessgaeOfTheDay"); }
	UTextBlock * errorBlockField() { return GetNativePointerField<UTextBlock *>(this, "UUI_AdminMangment.errorBlock"); }
	UTextBlock * errorBlockManualBanField() { return GetNativePointerField<UTextBlock *>(this, "UUI_AdminMangment.errorBlockManualBan"); }
	UTextBlock * errorBlockManualWhiteListedField() { return GetNativePointerField<UTextBlock *>(this, "UUI_AdminMangment.errorBlockManualWhiteListed"); }
	UTextBlock * errorBlockMessageOfTheDayField() { return GetNativePointerField<UTextBlock *>(this, "UUI_AdminMangment.errorBlockMessageOfTheDay"); }
	UMultiLineEditableText * FunctionDiscriptionField() { return GetNativePointerField<UMultiLineEditableText *>(this, "UUI_AdminMangment.FunctionDiscription"); }
	UImage * ChetFunctionSelectedImageField() { return GetNativePointerField<UImage *>(this, "UUI_AdminMangment.ChetFunctionSelectedImage"); }

	// Functions

	void AddItemBannedPlayer(FString Playername, FString SteamName) { NativeCall<void, FString, FString>(this, "UUI_AdminMangment.AddItemBannedPlayer", Playername, SteamName); }
	void AddItemCheatFunctionName(FString functionName) { NativeCall<void, FString>(this, "UUI_AdminMangment.AddItemCheatFunctionName", functionName); }
	void AddItemConnectedPlayer(FString PlayerName, FString PlayerSteamName, __int64 LinkedPlayerID, bool isHost) { NativeCall<void, FString, FString, __int64, bool>(this, "UUI_AdminMangment.AddItemConnectedPlayer", PlayerName, PlayerSteamName, LinkedPlayerID, isHost); }
	UServerInfoInfoEntryButton * AddItemServerIno(FString InfoName, FString InfoValue, float offsite) { return NativeCall<UServerInfoInfoEntryButton *, FString, FString, float>(this, "UUI_AdminMangment.AddItemServerIno", InfoName, InfoValue, offsite); }
	void AddItemWhitListedPlayer(FString playername, FString SteamName) { NativeCall<void, FString, FString>(this, "UUI_AdminMangment.AddItemWhitListedPlayer", playername, SteamName); }
	void AddToViewport() { NativeCall<void>(this, "UUI_AdminMangment.AddToViewport"); }
	void ClickedButton(UWidget * clickedWidget) { NativeCall<void, UWidget *>(this, "UUI_AdminMangment.ClickedButton", clickedWidget); }
	void DisplayPoSition() { NativeCall<void>(this, "UUI_AdminMangment.DisplayPoSition"); }
	void GetConsoleCommands() { NativeCall<void>(this, "UUI_AdminMangment.GetConsoleCommands"); }
	void GetMessageOfTheDay() { NativeCall<void>(this, "UUI_AdminMangment.GetMessageOfTheDay"); }
	int GetSelectedSlotButtonCheatsFunctionNames() { return NativeCall<int>(this, "UUI_AdminMangment.GetSelectedSlotButtonCheatsFunctionNames"); }
	int GetSelectedSlotButtonIndexBannedPlayers() { return NativeCall<int>(this, "UUI_AdminMangment.GetSelectedSlotButtonIndexBannedPlayers"); }
	int GetSelectedSlotButtonIndexConnectedPlayers() { return NativeCall<int>(this, "UUI_AdminMangment.GetSelectedSlotButtonIndexConnectedPlayers"); }
	int GetSelectedSlotButtonIndexWhiteListedPlayers() { return NativeCall<int>(this, "UUI_AdminMangment.GetSelectedSlotButtonIndexWhiteListedPlayers"); }
	void InitializeBannedPlayerBox() { NativeCall<void>(this, "UUI_AdminMangment.InitializeBannedPlayerBox"); }
	void InitializeConnectedPlayerBox() { NativeCall<void>(this, "UUI_AdminMangment.InitializeConnectedPlayerBox"); }
	void InitializeServerOptions() { NativeCall<void>(this, "UUI_AdminMangment.InitializeServerOptions"); }
	void InitializeWhiteListedPlayerBox() { NativeCall<void>(this, "UUI_AdminMangment.InitializeWhiteListedPlayerBox"); }
	void OnAdminBannedPlayerInfoRecived(TArray<FAdminPlayerDataInfo> list) { NativeCall<void, TArray<FAdminPlayerDataInfo>>(this, "UUI_AdminMangment.OnAdminBannedPlayerInfoRecived", list); }
	void OnAdminCheatFunctionNamesRecived() { NativeCall<void>(this, "UUI_AdminMangment.OnAdminCheatFunctionNamesRecived"); }
	void OnAdminConnectedPlayerInfoRecived(TArray<FAdminPlayerDataInfo> list) { NativeCall<void, TArray<FAdminPlayerDataInfo>>(this, "UUI_AdminMangment.OnAdminConnectedPlayerInfoRecived", list); }
	void OnAdminServerOptionsInfoRecived(FServerOptions ServerOptions) { NativeCall<void, FServerOptions>(this, "UUI_AdminMangment.OnAdminServerOptionsInfoRecived", ServerOptions); }
	void OnAdminWhiteListPlayerInfoRecived(TArray<FAdminPlayerDataInfo> list) { NativeCall<void, TArray<FAdminPlayerDataInfo>>(this, "UUI_AdminMangment.OnAdminWhiteListPlayerInfoRecived", list); }
	void OnMessagOfTheDayRecived(FString message) { NativeCall<void, FString>(this, "UUI_AdminMangment.OnMessagOfTheDayRecived", message); }
	void OnTextChanged(const FText * Text) { NativeCall<void, const FText *>(this, "UUI_AdminMangment.OnTextChanged", Text); }
	void OnTextChangedManualWhiteLised(const FText * Text) { NativeCall<void, const FText *>(this, "UUI_AdminMangment.OnTextChangedManualWhiteLised", Text); }
	void OnTextChangedManulaBan(const FText * Text) { NativeCall<void, const FText *>(this, "UUI_AdminMangment.OnTextChangedManulaBan", Text); }
	void OnTextCommitted(const FText * Text, ETextCommit::Type CommitMethod) { NativeCall<void, const FText *, ETextCommit::Type>(this, "UUI_AdminMangment.OnTextCommitted", Text, CommitMethod); }
	void OnTextCommittedManualBan(const FText * Text, ETextCommit::Type CommitMethod) { NativeCall<void, const FText *, ETextCommit::Type>(this, "UUI_AdminMangment.OnTextCommittedManualBan", Text, CommitMethod); }
	void OnTextCommittedMessageOfTheDay(const FText * Text, ETextCommit::Type CommitMethod) { NativeCall<void, const FText *, ETextCommit::Type>(this, "UUI_AdminMangment.OnTextCommittedMessageOfTheDay", Text, CommitMethod); }
	void OnTextCommittedWhiteListed(const FText * Text, ETextCommit::Type CommitMethod) { NativeCall<void, const FText *, ETextCommit::Type>(this, "UUI_AdminMangment.OnTextCommittedWhiteListed", Text, CommitMethod); }
	void RefreshSlotButtonBannedPlayerList() { NativeCall<void>(this, "UUI_AdminMangment.RefreshSlotButtonBannedPlayerList"); }
	void RefreshSlotButtonConnectedPlayerList() { NativeCall<void>(this, "UUI_AdminMangment.RefreshSlotButtonConnectedPlayerList"); }
	void RefreshSlotButtonWhiteListedPlayerList() { NativeCall<void>(this, "UUI_AdminMangment.RefreshSlotButtonWhiteListedPlayerList"); }
	void RemoveAllSlotsBannedPlayer() { NativeCall<void>(this, "UUI_AdminMangment.RemoveAllSlotsBannedPlayer"); }
	void RemoveAllSlotsConnectedPlayer() { NativeCall<void>(this, "UUI_AdminMangment.RemoveAllSlotsConnectedPlayer"); }
	void RemoveAllSlotsWhiteListedPlayer() { NativeCall<void>(this, "UUI_AdminMangment.RemoveAllSlotsWhiteListedPlayer"); }
	void RemoveFromViewport() { NativeCall<void>(this, "UUI_AdminMangment.RemoveFromViewport"); }
	void SlotButtonSelectedBannedPlayerList(UDataListEntryWidget * theWidget) { NativeCall<void, UDataListEntryWidget *>(this, "UUI_AdminMangment.SlotButtonSelectedBannedPlayerList", theWidget); }
	void SlotButtonSelectedCheatFunctionNamesList(UDataListEntryWidget * theWidget) { NativeCall<void, UDataListEntryWidget *>(this, "UUI_AdminMangment.SlotButtonSelectedCheatFunctionNamesList", theWidget); }
	void SlotButtonSelectedConnectedPlayerList(UDataListEntryWidget * theWidget) { NativeCall<void, UDataListEntryWidget *>(this, "UUI_AdminMangment.SlotButtonSelectedConnectedPlayerList", theWidget); }
	void SlotButtonSelectedWhiteListedPlayerList(UDataListEntryWidget * theWidget) { NativeCall<void, UDataListEntryWidget *>(this, "UUI_AdminMangment.SlotButtonSelectedWhiteListedPlayerList", theWidget); }
	void Tick_Implementation(FGeometry MyGeometry, float InDeltaTime) { NativeCall<void, FGeometry, float>(this, "UUI_AdminMangment.Tick_Implementation", MyGeometry, InDeltaTime); }
};

