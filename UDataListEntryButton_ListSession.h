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

struct UDataListEntryButton_ListSession : UBaseSelectableButtonWidget
{
	char __padding[0x2a0L];
	FCustomButtonWidgetStyle& LastJoinedExtendedStyleField() { return *GetNativePointerField<FCustomButtonWidgetStyle*>(this, "UDataListEntryButton_ListSession.LastJoinedExtendedStyle"); }
	FCustomButtonWidgetStyle& StandardExtendedStyleField() { return *GetNativePointerField<FCustomButtonWidgetStyle*>(this, "UDataListEntryButton_ListSession.StandardExtendedStyle"); }
	FString& UniqueIdField() { return *GetNativePointerField<FString*>(this, "UDataListEntryButton_ListSession.UniqueId"); }
	FString& GameNameField() { return *GetNativePointerField<FString*>(this, "UDataListEntryButton_ListSession.GameName"); }
	FString& BuildIdField() { return *GetNativePointerField<FString*>(this, "UDataListEntryButton_ListSession.BuildId"); }
	FString& OwnerNameField() { return *GetNativePointerField<FString*>(this, "UDataListEntryButton_ListSession.OwnerName"); }
	FString& MapNameField() { return *GetNativePointerField<FString*>(this, "UDataListEntryButton_ListSession.MapName"); }
	FString& DayTimeStrField() { return *GetNativePointerField<FString*>(this, "UDataListEntryButton_ListSession.DayTimeStr"); }
	unsigned int& NumPlayersField() { return *GetNativePointerField<unsigned int*>(this, "UDataListEntryButton_ListSession.NumPlayers"); }
	unsigned int& MaxNumPlayersField() { return *GetNativePointerField<unsigned int*>(this, "UDataListEntryButton_ListSession.MaxNumPlayers"); }
	unsigned __int64& ModIdField() { return *GetNativePointerField<unsigned __int64*>(this, "UDataListEntryButton_ListSession.ModId"); }
	unsigned __int64& TotalConversionIdField() { return *GetNativePointerField<unsigned __int64*>(this, "UDataListEntryButton_ListSession.TotalConversionId"); }
	unsigned __int64& PingField() { return *GetNativePointerField<unsigned __int64*>(this, "UDataListEntryButton_ListSession.Ping"); }
	bool& bHasPasswordField() { return *GetNativePointerField<bool*>(this, "UDataListEntryButton_ListSession.bHasPassword"); }
	bool& bIsFavouriteField() { return *GetNativePointerField<bool*>(this, "UDataListEntryButton_ListSession.bIsFavourite"); }
	bool& bIsPVEServerField() { return *GetNativePointerField<bool*>(this, "UDataListEntryButton_ListSession.bIsPVEServer"); }
	bool& bSessionHasActiveModsField() { return *GetNativePointerField<bool*>(this, "UDataListEntryButton_ListSession.bSessionHasActiveMods"); }
	bool& bIsOfficialServerField() { return *GetNativePointerField<bool*>(this, "UDataListEntryButton_ListSession.bIsOfficialServer"); }
	bool& bUsingBattleEyeField() { return *GetNativePointerField<bool*>(this, "UDataListEntryButton_ListSession.bUsingBattleEye"); }
	bool& bAllowDownloadCharactersField() { return *GetNativePointerField<bool*>(this, "UDataListEntryButton_ListSession.bAllowDownloadCharacters"); }
	bool& bAllowDownloadItemsField() { return *GetNativePointerField<bool*>(this, "UDataListEntryButton_ListSession.bAllowDownloadItems"); }
	FLinearColor& DisplayStringSelectedColorField() { return *GetNativePointerField<FLinearColor*>(this, "UDataListEntryButton_ListSession.DisplayStringSelectedColor"); }
	FShooterSessionData& CachedSessionResultField() { return *GetNativePointerField<FShooterSessionData*>(this, "UDataListEntryButton_ListSession.CachedSessionResult"); }
	FGuid& IdentifierField() { return *GetNativePointerField<FGuid*>(this, "UDataListEntryButton_ListSession.Identifier"); }
	UCustomButtonWidget * ButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UDataListEntryButton_ListSession.Button"); }
	USizeBox * BattleEyeIconField() { return GetNativePointerField<USizeBox *>(this, "UDataListEntryButton_ListSession.BattleEyeIcon"); }
	USizeBox * FavoriteIconField() { return GetNativePointerField<USizeBox *>(this, "UDataListEntryButton_ListSession.FavoriteIcon"); }
	USizeBox * LockIconField() { return GetNativePointerField<USizeBox *>(this, "UDataListEntryButton_ListSession.LockIcon"); }
	UTextBlock * SessionNameLabelField() { return GetNativePointerField<UTextBlock *>(this, "UDataListEntryButton_ListSession.SessionNameLabel"); }
	UTextBlock * MapNameLabelField() { return GetNativePointerField<UTextBlock *>(this, "UDataListEntryButton_ListSession.MapNameLabel"); }
	UTextBlock * PlayerNumLabelField() { return GetNativePointerField<UTextBlock *>(this, "UDataListEntryButton_ListSession.PlayerNumLabel"); }
	UTextBlock * PingLabelField() { return GetNativePointerField<UTextBlock *>(this, "UDataListEntryButton_ListSession.PingLabel"); }
	UTextBlock * DayLabelField() { return GetNativePointerField<UTextBlock *>(this, "UDataListEntryButton_ListSession.DayLabel"); }
	UTextBlock * BuildLabelField() { return GetNativePointerField<UTextBlock *>(this, "UDataListEntryButton_ListSession.BuildLabel"); }
	UTextBlock * GameModeLabelField() { return GetNativePointerField<UTextBlock *>(this, "UDataListEntryButton_ListSession.GameModeLabel"); }
	UTextBlock * HasModsLabelField() { return GetNativePointerField<UTextBlock *>(this, "UDataListEntryButton_ListSession.HasModsLabel"); }
	bool& bShowBuildColumnField() { return *GetNativePointerField<bool*>(this, "UDataListEntryButton_ListSession.bShowBuildColumn"); }

	// Functions

	void ClickedSecondaryButton(UWidget * clickedWidget) { NativeCall<void, UWidget *>(this, "UDataListEntryButton_ListSession.ClickedSecondaryButton", clickedWidget); }
	UCustomButtonWidget * GetButton() { return NativeCall<UCustomButtonWidget *>(this, "UDataListEntryButton_ListSession.GetButton"); }
	void InitializeMe() { NativeCall<void>(this, "UDataListEntryButton_ListSession.InitializeMe"); }
	bool IsSelected() { return NativeCall<bool>(this, "UDataListEntryButton_ListSession.IsSelected"); }
	void SetLastJoinedSession(bool bLastJoined) { NativeCall<void, bool>(this, "UDataListEntryButton_ListSession.SetLastJoinedSession", bLastJoined); }
	void SetParentScrollBox(UScrollBox * InParentScrollBox) { NativeCall<void, UScrollBox *>(this, "UDataListEntryButton_ListSession.SetParentScrollBox", InParentScrollBox); }
	void SetSelected(bool bSelected) { NativeCall<void, bool>(this, "UDataListEntryButton_ListSession.SetSelected", bSelected); }
	void SetShowBuildColumn(bool bShow) { NativeCall<void, bool>(this, "UDataListEntryButton_ListSession.SetShowBuildColumn", bShow); }
	void SynchronizeStrings() { NativeCall<void>(this, "UDataListEntryButton_ListSession.SynchronizeStrings"); }
	void UpdateButton() { NativeCall<void>(this, "UDataListEntryButton_ListSession.UpdateButton"); }
};

