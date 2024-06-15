#pragma once

#include "BaseDeclarations.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FShooterSessionData.h"

struct UUI_ListSessions : UPrimalUI
{
	char __padding[0x640L];
	FSlateColor& SearchingColorField() { return *GetNativePointerField<FSlateColor*>(this, "UUI_ListSessions.SearchingColor"); }
	FSlateColor& SearchingCompleteColorField() { return *GetNativePointerField<FSlateColor*>(this, "UUI_ListSessions.SearchingCompleteColor"); }
	FName& JoinButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_ListSessions.JoinButtonName"); }
	FName& RefreshButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_ListSessions.RefreshButtonName"); }
	FName& FavoritesButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_ListSessions.FavoritesButtonName"); }
	FName& FavoritesButtonLabelNameField() { return *GetNativePointerField<FName*>(this, "UUI_ListSessions.FavoritesButtonLabelName"); }
	FName& CancelButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_ListSessions.CancelButtonName"); }
	FName& RentYourOwnServerButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_ListSessions.RentYourOwnServerButtonName"); }
	FName& MyScrollBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ListSessions.MyScrollBoxName"); }
	FName& SearchingTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UUI_ListSessions.SearchingTextBlockName"); }
	FName& SessionsPanelNameField() { return *GetNativePointerField<FName*>(this, "UUI_ListSessions.SessionsPanelName"); }
	FName& FindSessionTextFieldNameField() { return *GetNativePointerField<FName*>(this, "UUI_ListSessions.FindSessionTextFieldName"); }
	FName& PasswordAcceptButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_ListSessions.PasswordAcceptButtonName"); }
	FName& DarkBGNameField() { return *GetNativePointerField<FName*>(this, "UUI_ListSessions.DarkBGName"); }
	FName& PasswordCancelButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_ListSessions.PasswordCancelButtonName"); }
	FName& PasswordTextFieldNameField() { return *GetNativePointerField<FName*>(this, "UUI_ListSessions.PasswordTextFieldName"); }
	FName& PasswordPanelNameField() { return *GetNativePointerField<FName*>(this, "UUI_ListSessions.PasswordPanelName"); }
	FName& ErrorBlockNameField() { return *GetNativePointerField<FName*>(this, "UUI_ListSessions.ErrorBlockName"); }
	FName& ServersCountBlockNameField() { return *GetNativePointerField<FName*>(this, "UUI_ListSessions.ServersCountBlockName"); }
	FName& ShowProtectedSessionsCheckBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ListSessions.ShowProtectedSessionsCheckBoxName"); }
	FName& ShowAvailableServersCheckBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ListSessions.ShowAvailableServersCheckBoxName"); }
	FName& ShowServersTypeComboBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_ListSessions.ShowServersTypeComboBoxName"); }
	FName& OfficialStatusLabelNameField() { return *GetNativePointerField<FName*>(this, "UUI_ListSessions.OfficialStatusLabelName"); }
	int& MaxPasswordCharsField() { return *GetNativePointerField<int*>(this, "UUI_ListSessions.MaxPasswordChars"); }
	bool& ShouldGoToMainMenuOnJoinFailureField() { return *GetNativePointerField<bool*>(this, "UUI_ListSessions.ShouldGoToMainMenuOnJoinFailure"); }
	bool& bShouldRetryField() { return *GetNativePointerField<bool*>(this, "UUI_ListSessions.bShouldRetry"); }
	bool& bFindSessionsField() { return *GetNativePointerField<bool*>(this, "UUI_ListSessions.bFindSessions"); }
	bool& bShowBuildColumnField() { return *GetNativePointerField<bool*>(this, "UUI_ListSessions.bShowBuildColumn"); }
	bool& bLeftShoulderPressedField() { return *GetNativePointerField<bool*>(this, "UUI_ListSessions.bLeftShoulderPressed"); }
	bool& bRightShoulderPressedField() { return *GetNativePointerField<bool*>(this, "UUI_ListSessions.bRightShoulderPressed"); }
	bool& bSortAscField() { return *GetNativePointerField<bool*>(this, "UUI_ListSessions.bSortAsc"); }
	FString& JoiningSessionOwnerNameField() { return *GetNativePointerField<FString*>(this, "UUI_ListSessions.JoiningSessionOwnerName"); }
	UTextBlock * SearchingTextBlockField() { return GetNativePointerField<UTextBlock *>(this, "UUI_ListSessions.SearchingTextBlock"); }
	UTextBlock * errorBlockField() { return GetNativePointerField<UTextBlock *>(this, "UUI_ListSessions.errorBlock"); }
	UTextBlock * FavoritesButtonLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_ListSessions.FavoritesButtonLabel"); }
	UTextBlock * ServersCountLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_ListSessions.ServersCountLabel"); }
	UTextBlock * WaitingToJoinLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_ListSessions.WaitingToJoinLabel"); }
	UTextBlock * CancelLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_ListSessions.CancelLabel"); }
	UTextBlock * JoinLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_ListSessions.JoinLabel"); }
	UTextBlock * JoinLastPlayedLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_ListSessions.JoinLastPlayedLabel"); }
	FString& FavouriteLabelField() { return *GetNativePointerField<FString*>(this, "UUI_ListSessions.FavouriteLabel"); }
	FString& UnFavouriteLabelField() { return *GetNativePointerField<FString*>(this, "UUI_ListSessions.UnFavouriteLabel"); }
	FString& JoinStringField() { return *GetNativePointerField<FString*>(this, "UUI_ListSessions.JoinString"); }
	FString& CancelStringField() { return *GetNativePointerField<FString*>(this, "UUI_ListSessions.CancelString"); }
	FString& CancelWaitStringField() { return *GetNativePointerField<FString*>(this, "UUI_ListSessions.CancelWaitString"); }
	FString& AlreadyWaitingStringField() { return *GetNativePointerField<FString*>(this, "UUI_ListSessions.AlreadyWaitingString"); }
	FString& JoinLastPlayedStringField() { return *GetNativePointerField<FString*>(this, "UUI_ListSessions.JoinLastPlayedString"); }
	FString& AlreadyWaitingLastPlayedStringField() { return *GetNativePointerField<FString*>(this, "UUI_ListSessions.AlreadyWaitingLastPlayedString"); }
	USizeBox * BuildColumnHeaderField() { return GetNativePointerField<USizeBox *>(this, "UUI_ListSessions.BuildColumnHeader"); }
	UCheckBox * ShowProtectedSessionsCheckBoxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_ListSessions.ShowProtectedSessionsCheckBox"); }
	bool& bHasRecievedOfficialStatusMessageField() { return *GetNativePointerField<bool*>(this, "UUI_ListSessions.bHasRecievedOfficialStatusMessage"); }
	UPrimalRichTextBlock * OfficialStatusLabelField() { return GetNativePointerField<UPrimalRichTextBlock *>(this, "UUI_ListSessions.OfficialStatusLabel"); }
	UCheckBox * ShowAvailableServersCheckBoxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_ListSessions.ShowAvailableServersCheckBox"); }
	UCheckBox * AutoFavoriteCheckBoxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_ListSessions.AutoFavoriteCheckBox"); }
	UCheckBox * IncludeServersWithActiveModsCheckBoxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_ListSessions.IncludeServersWithActiveModsCheckBox"); }
	UComboBoxString * ShowServersTypeComboBoxField() { return GetNativePointerField<UComboBoxString *>(this, "UUI_ListSessions.ShowServersTypeComboBox"); }
	UComboBoxString * MapComboBoxField() { return GetNativePointerField<UComboBoxString *>(this, "UUI_ListSessions.MapComboBox"); }
	UComboBoxString * GameModeComboBoxField() { return GetNativePointerField<UComboBoxString *>(this, "UUI_ListSessions.GameModeComboBox"); }
	UComboBoxString * SortComboBoxField() { return GetNativePointerField<UComboBoxString *>(this, "UUI_ListSessions.SortComboBox"); }
	UImage * AscendingDescendingIconField() { return GetNativePointerField<UImage *>(this, "UUI_ListSessions.AscendingDescendingIcon"); }
	USizeBox * AutoFavoriteRowField() { return GetNativePointerField<USizeBox *>(this, "UUI_ListSessions.AutoFavoriteRow"); }
	USizeBox * HideFullServersRowField() { return GetNativePointerField<USizeBox *>(this, "UUI_ListSessions.HideFullServersRow"); }
	USizeBox * ShowPasswordProtectedRowField() { return GetNativePointerField<USizeBox *>(this, "UUI_ListSessions.ShowPasswordProtectedRow"); }
	USizeBox * SessionFilterRowField() { return GetNativePointerField<USizeBox *>(this, "UUI_ListSessions.SessionFilterRow"); }
	USizeBox * RentYourOwnServerSizeBoxField() { return GetNativePointerField<USizeBox *>(this, "UUI_ListSessions.RentYourOwnServerSizeBox"); }
	UGamepadButtonLegendWidget * GamepadButtonLegend_StartField() { return GetNativePointerField<UGamepadButtonLegendWidget *>(this, "UUI_ListSessions.GamepadButtonLegend_Start"); }
	UGamepadButtonLegendWidget * GamepadButtonLegend_FaceTopField() { return GetNativePointerField<UGamepadButtonLegendWidget *>(this, "UUI_ListSessions.GamepadButtonLegend_FaceTop"); }
	UGamepadButtonLegendWidget * GamepadButtonLegend_FaceLeftField() { return GetNativePointerField<UGamepadButtonLegendWidget *>(this, "UUI_ListSessions.GamepadButtonLegend_FaceLeft"); }
	TArray<enum EListSessionStatus::Type>& ShowServersTypeComboBox_MappingField() { return *GetNativePointerField<TArray<enum EListSessionStatus::Type>*>(this, "UUI_ListSessions.ShowServersTypeComboBox_Mapping"); }
	TArray<enum EListSessionDLCType::Type>& ShowServerMapComboBox_MappingField() { return *GetNativePointerField<TArray<enum EListSessionDLCType::Type>*>(this, "UUI_ListSessions.ShowServerMapComboBox_Mapping"); }
	TArray<enum EListSessionPVE::Type>& ShowServerGameModeComboBox_MappingField() { return *GetNativePointerField<TArray<enum EListSessionPVE::Type>*>(this, "UUI_ListSessions.ShowServerGameModeComboBox_Mapping"); }
	TArray<enum EListSessionSort::Type>& ShowServerSortComboBox_MappingField() { return *GetNativePointerField<TArray<enum EListSessionSort::Type>*>(this, "UUI_ListSessions.ShowServerSortComboBox_Mapping"); }
	bool& bIsDownloadingModField() { return *GetNativePointerField<bool*>(this, "UUI_ListSessions.bIsDownloadingMod"); }
	unsigned __int64& DownloadingModIdField() { return *GetNativePointerField<unsigned __int64*>(this, "UUI_ListSessions.DownloadingModId"); }
	bool& bHasSessionToJoinDataField() { return *GetNativePointerField<bool*>(this, "UUI_ListSessions.bHasSessionToJoinData"); }
	bool& bRefreshSlotIgnoreFindSessionField() { return *GetNativePointerField<bool*>(this, "UUI_ListSessions.bRefreshSlotIgnoreFindSession"); }
	bool& ShowAvailableServersCheckBoxPrevField() { return *GetNativePointerField<bool*>(this, "UUI_ListSessions.ShowAvailableServersCheckBoxPrev"); }
	bool& ShowProtectedSessionsCheckBoxPrevField() { return *GetNativePointerField<bool*>(this, "UUI_ListSessions.ShowProtectedSessionsCheckBoxPrev"); }
	bool& bBuildColumnToggleHandledField() { return *GetNativePointerField<bool*>(this, "UUI_ListSessions.bBuildColumnToggleHandled"); }
	bool& bWaitingInQueueToJoinField() { return *GetNativePointerField<bool*>(this, "UUI_ListSessions.bWaitingInQueueToJoin"); }
	ModItemStatus& LastStatusField() { return *GetNativePointerField<ModItemStatus*>(this, "UUI_ListSessions.LastStatus"); }
	float& errorTimeField() { return *GetNativePointerField<float*>(this, "UUI_ListSessions.errorTime"); }
	int& SelectedIndexForPasswordField() { return *GetNativePointerField<int*>(this, "UUI_ListSessions.SelectedIndexForPassword"); }
	int& LastPlayedSessionIndexField() { return *GetNativePointerField<int*>(this, "UUI_ListSessions.LastPlayedSessionIndex"); }
	int& WaitingSessionIndexField() { return *GetNativePointerField<int*>(this, "UUI_ListSessions.WaitingSessionIndex"); }
	ServerSortingTypeType& SortTypeField() { return *GetNativePointerField<ServerSortingTypeType*>(this, "UUI_ListSessions.SortType"); }
	FString& ChineseLaunchURLField() { return *GetNativePointerField<FString*>(this, "UUI_ListSessions.ChineseLaunchURL"); }

	// Functions

	void AddSessionEntry(const FShooterSessionData result, int EntryIndex) { NativeCall<void, const FShooterSessionData, int>(this, "UUI_ListSessions.AddSessionEntry", result, EntryIndex); }
	void AddToViewport() { NativeCall<void>(this, "UUI_ListSessions.AddToViewport"); }
	void CancelFindSessions() { NativeCall<void>(this, "UUI_ListSessions.CancelFindSessions"); }
	void CancelQueue() { NativeCall<void>(this, "UUI_ListSessions.CancelQueue"); }
	void ClickedButton(UWidget * clickedWidget) { NativeCall<void, UWidget *>(this, "UUI_ListSessions.ClickedButton", clickedWidget); }
	void ConfirmationDialogAccepted() { NativeCall<void>(this, "UUI_ListSessions.ConfirmationDialogAccepted"); }
	void DoFindSessions(AShooterGameSession * GameSession, EListSessionStatus::Type SearchSessionType) { NativeCall<void, AShooterGameSession *, EListSessionStatus::Type>(this, "UUI_ListSessions.DoFindSessions", GameSession, SearchSessionType); }
	void DoJoinSession() { NativeCall<void>(this, "UUI_ListSessions.DoJoinSession"); }
	void FindSessions() { NativeCall<void>(this, "UUI_ListSessions.FindSessions"); }
	void FindSessions_Internal() { NativeCall<void>(this, "UUI_ListSessions.FindSessions_Internal"); }
	EListSessionDLCType::Type GetCurrentDLCSearchType() { return NativeCall<EListSessionDLCType::Type>(this, "UUI_ListSessions.GetCurrentDLCSearchType"); }
	AShooterGameSession * GetGameSession() { return NativeCall<AShooterGameSession *>(this, "UUI_ListSessions.GetGameSession"); }
	EListSessionPVE::Type GetSelectedGameModeType() { return NativeCall<EListSessionPVE::Type>(this, "UUI_ListSessions.GetSelectedGameModeType"); }
	EListSessionDLCType::Type GetSelectedMapType() { return NativeCall<EListSessionDLCType::Type>(this, "UUI_ListSessions.GetSelectedMapType"); }
	EListSessionStatus::Type GetSelectedSearchType() { return NativeCall<EListSessionStatus::Type>(this, "UUI_ListSessions.GetSelectedSearchType"); }
	int GetSelectedSlotButtonIndex() { return NativeCall<int>(this, "UUI_ListSessions.GetSelectedSlotButtonIndex"); }
	EListSessionSort::Type GetSelectedSortType() { return NativeCall<EListSessionSort::Type>(this, "UUI_ListSessions.GetSelectedSortType"); }
	bool HighlightJoinButton(UWidget * NearestWidget) { return NativeCall<bool, UWidget *>(this, "UUI_ListSessions.HighlightJoinButton", NearestWidget); }
	void JoinFromQueue() { NativeCall<void>(this, "UUI_ListSessions.JoinFromQueue"); }
	void JoinSelectedSession() { NativeCall<void>(this, "UUI_ListSessions.JoinSelectedSession"); }
	void LeaveMultiplayer() { NativeCall<void>(this, "UUI_ListSessions.LeaveMultiplayer"); }
	void OnAutoFavoriteChecked(bool InNewState) { NativeCall<void, bool>(this, "UUI_ListSessions.OnAutoFavoriteChecked", InNewState); }
	void OnCheckBoxChecked(bool InNewState) { NativeCall<void, bool>(this, "UUI_ListSessions.OnCheckBoxChecked", InNewState); }
	void OnConnectionFailed(const FString * reason, bool bAlreadyDisplayedMessage) { NativeCall<void, const FString *, bool>(this, "UUI_ListSessions.OnConnectionFailed", reason, bAlreadyDisplayedMessage); }
	void OnFindSessionsComplete(bool bWasSuccessful) { NativeCall<void, bool>(this, "UUI_ListSessions.OnFindSessionsComplete", bWasSuccessful); }
	void OnFindSessionsStopped() { NativeCall<void>(this, "UUI_ListSessions.OnFindSessionsStopped"); }
	void OnFoundSession() { NativeCall<void>(this, "UUI_ListSessions.OnFoundSession"); }
	void OnGameModeComboBoxSelectionChanged(FString SelectedItem, ESelectInfo::Type SelectionType) { NativeCall<void, FString, ESelectInfo::Type>(this, "UUI_ListSessions.OnGameModeComboBoxSelectionChanged", SelectedItem, SelectionType); }
	void OnJoinSessionComplete(EOnJoinSessionCompleteResult::Type type) { NativeCall<void, EOnJoinSessionCompleteResult::Type>(this, "UUI_ListSessions.OnJoinSessionComplete", type); }
	void OnJoinTimedOut() { NativeCall<void>(this, "UUI_ListSessions.OnJoinTimedOut"); }
	void OnMapComboBoxSelectionChanged(FString SelectedItem, ESelectInfo::Type SelectionType) { NativeCall<void, FString, ESelectInfo::Type>(this, "UUI_ListSessions.OnMapComboBoxSelectionChanged", SelectedItem, SelectionType); }
	void OnServersFilterComboBoxSelectionChanged(FString SelectedItem, ESelectInfo::Type SelectionType) { NativeCall<void, FString, ESelectInfo::Type>(this, "UUI_ListSessions.OnServersFilterComboBoxSelectionChanged", SelectedItem, SelectionType); }
	void OnSortComboBoxSelectionChanged(FString SelectedItem, ESelectInfo::Type SelectionType) { NativeCall<void, FString, ESelectInfo::Type>(this, "UUI_ListSessions.OnSortComboBoxSelectionChanged", SelectedItem, SelectionType); }
	void OnTextChanged(const FText * Text) { NativeCall<void, const FText *>(this, "UUI_ListSessions.OnTextChanged", Text); }
	void OnTextCommitted(const FText * Text, ETextCommit::Type CommitMethod) { NativeCall<void, const FText *, ETextCommit::Type>(this, "UUI_ListSessions.OnTextCommitted", Text, CommitMethod); }
	void QueueJoinSession() { NativeCall<void>(this, "UUI_ListSessions.QueueJoinSession"); }
	void RefreshSearchingTextBlock() { NativeCall<void>(this, "UUI_ListSessions.RefreshSearchingTextBlock"); }
	void RefreshSlotButtons() { NativeCall<void>(this, "UUI_ListSessions.RefreshSlotButtons"); }
	void RemoveAllSlots() { NativeCall<void>(this, "UUI_ListSessions.RemoveAllSlots"); }
	void RemoveFromViewport() { NativeCall<void>(this, "UUI_ListSessions.RemoveFromViewport"); }
	void RemoveSlotAt(int Index) { NativeCall<void, int>(this, "UUI_ListSessions.RemoveSlotAt", Index); }
	void RetryJoin() { NativeCall<void>(this, "UUI_ListSessions.RetryJoin"); }
	void SaveJoiningSessionName(FString SessionName) { NativeCall<void, FString>(this, "UUI_ListSessions.SaveJoiningSessionName", SessionName); }
	void SetControlsEnabled(bool bEnabled) { NativeCall<void, bool>(this, "UUI_ListSessions.SetControlsEnabled", bEnabled); }
	bool SetSelectedGameModeType(EListSessionPVE::Type InType) { return NativeCall<bool, EListSessionPVE::Type>(this, "UUI_ListSessions.SetSelectedGameModeType", InType); }
	bool SetSelectedMapType(EListSessionDLCType::Type InType) { return NativeCall<bool, EListSessionDLCType::Type>(this, "UUI_ListSessions.SetSelectedMapType", InType); }
	bool SetSelectedSearchType(EListSessionStatus::Type InType) { return NativeCall<bool, EListSessionStatus::Type>(this, "UUI_ListSessions.SetSelectedSearchType", InType); }
	bool SetSelectedSortType(EListSessionSort::Type InType) { return NativeCall<bool, EListSessionSort::Type>(this, "UUI_ListSessions.SetSelectedSortType", InType); }
	void SlotButtonSelected(UWidget * theWidget) { NativeCall<void, UWidget *>(this, "UUI_ListSessions.SlotButtonSelected", theWidget); }
	void SortList(TArray<FShooterSessionData> * List) { NativeCall<void, TArray<FShooterSessionData> *>(this, "UUI_ListSessions.SortList", List); }
	void Tick_Implementation(FGeometry MyGeometry, float InDeltaTime) { NativeCall<void, FGeometry, float>(this, "UUI_ListSessions.Tick_Implementation", MyGeometry, InDeltaTime); }
	void UpdateModString() { NativeCall<void>(this, "UUI_ListSessions.UpdateModString"); }
};

struct UUI_ClusterServersListSessions : UUI_ListSessions
{
	char __padding[0x18L];
	AShooterGameSession * ClustersServersListGameSessionField() { return GetNativePointerField<AShooterGameSession *>(this, "UUI_ClusterServersListSessions.ClustersServersListGameSession"); }
	bool& bWantsToJoinWithSurvivorField() { return *GetNativePointerField<bool*>(this, "UUI_ClusterServersListSessions.bWantsToJoinWithSurvivor"); }
	UUI_ClusterServersListSessions::ConfirmationDialogClusterServersListOptions& CurrentDialogOptionField() { return *GetNativePointerField<UUI_ClusterServersListSessions::ConfirmationDialogClusterServersListOptions*>(this, "UUI_ClusterServersListSessions.CurrentDialogOption"); }

	// Functions

	void AddSessionEntry(const FShooterSessionData result, int EntryIndex) { NativeCall<void, const FShooterSessionData, int>(this, "UUI_ClusterServersListSessions.AddSessionEntry", result, EntryIndex); }
	void AddToViewport() { NativeCall<void>(this, "UUI_ClusterServersListSessions.AddToViewport"); }
	void ClickedButton(UWidget * clickedWidget) { NativeCall<void, UWidget *>(this, "UUI_ClusterServersListSessions.ClickedButton", clickedWidget); }
	void ConfirmationDialogAccepted() { NativeCall<void>(this, "UUI_ClusterServersListSessions.ConfirmationDialogAccepted"); }
	void DoFindSessions(AShooterGameSession * GameSession, EListSessionStatus::Type SearchSessionType) { NativeCall<void, AShooterGameSession *, EListSessionStatus::Type>(this, "UUI_ClusterServersListSessions.DoFindSessions", GameSession, SearchSessionType); }
	AShooterGameSession * GetGameSession() { return NativeCall<AShooterGameSession *>(this, "UUI_ClusterServersListSessions.GetGameSession"); }
	void OnDropAllNotReadyForUploadItemsFinished() { NativeCall<void>(this, "UUI_ClusterServersListSessions.OnDropAllNotReadyForUploadItemsFinished"); }
	void RemoveFromViewport() { NativeCall<void>(this, "UUI_ClusterServersListSessions.RemoveFromViewport"); }
	void SetArkTributeLimits(bool LimitCharacters) { NativeCall<void, bool>(this, "UUI_ClusterServersListSessions.SetArkTributeLimits", LimitCharacters); }
	void SetControlsEnabled(bool bEnabled) { NativeCall<void, bool>(this, "UUI_ClusterServersListSessions.SetControlsEnabled", bEnabled); }
	void SlotButtonSelected(UWidget * theWidget) { NativeCall<void, UWidget *>(this, "UUI_ClusterServersListSessions.SlotButtonSelected", theWidget); }
	void Tick_Implementation(FGeometry MyGeometry, float InDeltaTime) { NativeCall<void, FGeometry, float>(this, "UUI_ClusterServersListSessions.Tick_Implementation", MyGeometry, InDeltaTime); }
};

