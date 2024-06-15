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

struct UUI_TribeManager : UPrimalSubMenuUI
{
	char __padding[0x4b0L];
	FName& CreateNewTribeButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_TribeManager.CreateNewTribeButtonName"); }
	FName& LeaveTribeButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_TribeManager.LeaveTribeButtonName"); }
	FName& TribeNameLabelNameField() { return *GetNativePointerField<FName*>(this, "UUI_TribeManager.TribeNameLabelName"); }
	FName& TribeNameEditBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_TribeManager.TribeNameEditBoxName"); }
	FName& RemovePlayerFromTribeButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_TribeManager.RemovePlayerFromTribeButtonName"); }
	FName& ManageTribePanelNameField() { return *GetNativePointerField<FName*>(this, "UUI_TribeManager.ManageTribePanelName"); }
	FName& NewTribePanelNameField() { return *GetNativePointerField<FName*>(this, "UUI_TribeManager.NewTribePanelName"); }
	FName& MyScrollBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_TribeManager.MyScrollBoxName"); }
	FName& ReverseLogOrderButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_TribeManager.ReverseLogOrderButtonName"); }
	TSubclassOf<UTribeMemberButtonWidget>& TribePlayerEntryButtonTemplateField() { return *GetNativePointerField<TSubclassOf<UTribeMemberButtonWidget>*>(this, "UUI_TribeManager.TribePlayerEntryButtonTemplate"); }
	TSubclassOf<UTribeWarButtonWidget>& TribeWarEntryButtonTemplateField() { return *GetNativePointerField<TSubclassOf<UTribeWarButtonWidget>*>(this, "UUI_TribeManager.TribeWarEntryButtonTemplate"); }
	TSubclassOf<UTribeManagerListButton>& TribeAllianceEntryButtonTemplateField() { return *GetNativePointerField<TSubclassOf<UTribeManagerListButton>*>(this, "UUI_TribeManager.TribeAllianceEntryButtonTemplate"); }
	TSubclassOf<UTribeMemberButtonWidget>& TribeAllianceMemberEntryButtonTemplateField() { return *GetNativePointerField<TSubclassOf<UTribeMemberButtonWidget>*>(this, "UUI_TribeManager.TribeAllianceMemberEntryButtonTemplate"); }
	TSubclassOf<UTribeManagerListButton>& RankEntryButtonTemplateField() { return *GetNativePointerField<TSubclassOf<UTribeManagerListButton>*>(this, "UUI_TribeManager.RankEntryButtonTemplate"); }
	FLinearColor& SwitcherTextActiveColorField() { return *GetNativePointerField<FLinearColor*>(this, "UUI_TribeManager.SwitcherTextActiveColor"); }
	FLinearColor& SwitcherTextInactiveColorField() { return *GetNativePointerField<FLinearColor*>(this, "UUI_TribeManager.SwitcherTextInactiveColor"); }
	long double& LastPlayerRefreshTimeField() { return *GetNativePointerField<long double*>(this, "UUI_TribeManager.LastPlayerRefreshTime"); }
	UTextBlock * TribeNameLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_TribeManager.TribeNameLabel"); }
	UTextBlock * RenameTribeCooldownLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_TribeManager.RenameTribeCooldownLabel"); }
	TArray<UTribeMemberButtonWidget *>& EntryWidgetsField() { return *GetNativePointerField<TArray<UTribeMemberButtonWidget *>*>(this, "UUI_TribeManager.EntryWidgets"); }
	TArray<UTribeWarButtonWidget *>& TribeWarEntryWidgetsField() { return *GetNativePointerField<TArray<UTribeWarButtonWidget *>*>(this, "UUI_TribeManager.TribeWarEntryWidgets"); }
	TArray<UTribeManagerListButton *>& TribeAllianceEntryWidgetsField() { return *GetNativePointerField<TArray<UTribeManagerListButton *>*>(this, "UUI_TribeManager.TribeAllianceEntryWidgets"); }
	TArray<UTribeMemberButtonWidget *>& TribeAllianceMemberWidgetsField() { return *GetNativePointerField<TArray<UTribeMemberButtonWidget *>*>(this, "UUI_TribeManager.TribeAllianceMemberWidgets"); }
	TArray<UDataListEntryWidget *>& MemberRankWidgetsField() { return *GetNativePointerField<TArray<UDataListEntryWidget *>*>(this, "UUI_TribeManager.MemberRankWidgets"); }
	TArray<UTribeManagerListButton *>& GroupRankWidgetsField() { return *GetNativePointerField<TArray<UTribeManagerListButton *>*>(this, "UUI_TribeManager.GroupRankWidgets"); }
	UProgressBar * OnlineMembersBarField() { return GetNativePointerField<UProgressBar *>(this, "UUI_TribeManager.OnlineMembersBar"); }
	UCustomButtonWidget * ToggleOnlineButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_TribeManager.ToggleOnlineButton"); }
	UComboBoxString * GroupRankComboBoxField() { return GetNativePointerField<UComboBoxString *>(this, "UUI_TribeManager.GroupRankComboBox"); }
	UTextBlock * TribeMemberNameLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_TribeManager.TribeMemberNameLabel"); }
	UTextBlock * AllianceNameLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_TribeManager.AllianceNameLabel"); }
	UTextBlock * GroupRankLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_TribeManager.GroupRankLabel"); }
	UTextBlock * OnlineMembersValueBlockField() { return GetNativePointerField<UTextBlock *>(this, "UUI_TribeManager.OnlineMembersValueBlock"); }
	UComboBoxString * Combo_TribeGovern_DinoOwnershipField() { return GetNativePointerField<UComboBoxString *>(this, "UUI_TribeManager.Combo_TribeGovern_DinoOwnership"); }
	UComboBoxString * Combo_TribeGovern_DinoTamingField() { return GetNativePointerField<UComboBoxString *>(this, "UUI_TribeManager.Combo_TribeGovern_DinoTaming"); }
	UComboBoxString * Combo_TribeGovern_StructureOwnershipField() { return GetNativePointerField<UComboBoxString *>(this, "UUI_TribeManager.Combo_TribeGovern_StructureOwnership"); }
	UComboBoxString * Combo_TribeGovern_PINCodeField() { return GetNativePointerField<UComboBoxString *>(this, "UUI_TribeManager.Combo_TribeGovern_PINCode"); }
	UComboBoxString * Combo_TribeGovern_DinoUnclaimingField() { return GetNativePointerField<UComboBoxString *>(this, "UUI_TribeManager.Combo_TribeGovern_DinoUnclaiming"); }
	UCheckBox * GroupRankSettingsDefaultRankCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_TribeManager.GroupRankSettingsDefaultRankCheckbox"); }
	UCheckBox * GroupRankSettingsStructureDemolishCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_TribeManager.GroupRankSettingsStructureDemolishCheckbox"); }
	UCheckBox * GroupRankSettingsStructureAttachmentCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_TribeManager.GroupRankSettingsStructureAttachmentCheckbox"); }
	UCheckBox * GroupRankSettingsStructureBuildInRangeCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_TribeManager.GroupRankSettingsStructureBuildInRangeCheckbox"); }
	UCheckBox * GroupRankSettingsPetUnclaimCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_TribeManager.GroupRankSettingsPetUnclaimCheckbox"); }
	UCheckBox * GroupRankSettingsLimitInvitesCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_TribeManager.GroupRankSettingsLimitInvitesCheckbox"); }
	UCheckBox * GroupRankSettingsAllowInvitesCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_TribeManager.GroupRankSettingsAllowInvitesCheckbox"); }
	UCheckBox * GroupRankSettingsAllowBanishmentsCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_TribeManager.GroupRankSettingsAllowBanishmentsCheckbox"); }
	UCheckBox * GroupRankSettingsAllowPromotionsCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_TribeManager.GroupRankSettingsAllowPromotionsCheckbox"); }
	UCheckBox * GroupRankSettingsAllowDemotionsCheckboxField() { return GetNativePointerField<UCheckBox *>(this, "UUI_TribeManager.GroupRankSettingsAllowDemotionsCheckbox"); }
	TArray<FTribeRankGroup>& PrevRankGroupsField() { return *GetNativePointerField<TArray<FTribeRankGroup>*>(this, "UUI_TribeManager.PrevRankGroups"); }
	TArray<unsigned char>& LastMembersRankGroupsField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "UUI_TribeManager.LastMembersRankGroups"); }
	TArray<unsigned int>& LastMembersPlayerDataIDField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "UUI_TribeManager.LastMembersPlayerDataID"); }
	TArray<unsigned int>& LastTribeAdminsField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "UUI_TribeManager.LastTribeAdmins"); }
	TArray<unsigned int>& LastTribeAllianceMemberIDField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "UUI_TribeManager.LastTribeAllianceMemberID"); }
	TArray<unsigned int>& LastTribeAllianceAdminIDField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "UUI_TribeManager.LastTribeAllianceAdminID"); }
	TArray<unsigned __int64>& LastOnlineTribeMembersField() { return *GetNativePointerField<TArray<unsigned __int64>*>(this, "UUI_TribeManager.LastOnlineTribeMembers"); }
	TArray<FTribeAlliance>& LastTribeAlliancesField() { return *GetNativePointerField<TArray<FTribeAlliance>*>(this, "UUI_TribeManager.LastTribeAlliances"); }
	TArray<FTribeRankGroup>& LastTribeRankGroupsField() { return *GetNativePointerField<TArray<FTribeRankGroup>*>(this, "UUI_TribeManager.LastTribeRankGroups"); }
	unsigned int& LastOwnerPlayerDataIDField() { return *GetNativePointerField<unsigned int*>(this, "UUI_TribeManager.LastOwnerPlayerDataID"); }
	bool& bTribeNameCooldownIsActiveField() { return *GetNativePointerField<bool*>(this, "UUI_TribeManager.bTribeNameCooldownIsActive"); }
	long double& lastTribeNameChangeAttemptTimeField() { return *GetNativePointerField<long double*>(this, "UUI_TribeManager.lastTribeNameChangeAttemptTime"); }
	bool& bSetInitialTribeGovernmentOptionsField() { return *GetNativePointerField<bool*>(this, "UUI_TribeManager.bSetInitialTribeGovernmentOptions"); }
	bool& bSetInitialTribeGovernmentOptionsLockedField() { return *GetNativePointerField<bool*>(this, "UUI_TribeManager.bSetInitialTribeGovernmentOptionsLocked"); }
	bool& bForInviteDataField() { return *GetNativePointerField<bool*>(this, "UUI_TribeManager.bForInviteData"); }
	bool& bInitializedLogField() { return *GetNativePointerField<bool*>(this, "UUI_TribeManager.bInitializedLog"); }
	bool& bLastOnlinePlayerFilterField() { return *GetNativePointerField<bool*>(this, "UUI_TribeManager.bLastOnlinePlayerFilter"); }
	TArray<FTribeWar>& PrevTribeWarsField() { return *GetNativePointerField<TArray<FTribeWar>*>(this, "UUI_TribeManager.PrevTribeWars"); }
	TArray<FTribeAlliance>& PrevTribeAlliancesField() { return *GetNativePointerField<TArray<FTribeAlliance>*>(this, "UUI_TribeManager.PrevTribeAlliances"); }
	TArray<unsigned int>& PrevAllianceMemberIDsField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "UUI_TribeManager.PrevAllianceMemberIDs"); }
	long double& LastTribeLogRequestTimeField() { return *GetNativePointerField<long double*>(this, "UUI_TribeManager.LastTribeLogRequestTime"); }
	TextEntryInstigator& SourceOfTextEntryField() { return *GetNativePointerField<TextEntryInstigator*>(this, "UUI_TribeManager.SourceOfTextEntry"); }
	bool& bDisplayOnlineOnlyField() { return *GetNativePointerField<bool*>(this, "UUI_TribeManager.bDisplayOnlineOnly"); }
	int& OnlinePlayerCountField() { return *GetNativePointerField<int*>(this, "UUI_TribeManager.OnlinePlayerCount"); }
	int& ConfirmationDialogIDField() { return *GetNativePointerField<int*>(this, "UUI_TribeManager.ConfirmationDialogID"); }

	// Functions

	void ClickedButton(UWidget * clickedWidget) { NativeCall<void, UWidget *>(this, "UUI_TribeManager.ClickedButton", clickedWidget); }
	void ConfirmationDialogAccepted() { NativeCall<void>(this, "UUI_TribeManager.ConfirmationDialogAccepted"); }
	int GetSelectedAllianceButtonIndex() { return NativeCall<int>(this, "UUI_TribeManager.GetSelectedAllianceButtonIndex"); }
	int GetSelectedAllianceMemberButtonIndex() { return NativeCall<int>(this, "UUI_TribeManager.GetSelectedAllianceMemberButtonIndex"); }
	int GetSelectedGroupRanksButtonIndex() { return NativeCall<int>(this, "UUI_TribeManager.GetSelectedGroupRanksButtonIndex"); }
	int GetSelectedMemberRankButtonIndex() { return NativeCall<int>(this, "UUI_TribeManager.GetSelectedMemberRankButtonIndex"); }
	int GetSelectedPlayerButtonIndex() { return NativeCall<int>(this, "UUI_TribeManager.GetSelectedPlayerButtonIndex"); }
	int GetSelectedPlayerIndex() { return NativeCall<int>(this, "UUI_TribeManager.GetSelectedPlayerIndex"); }
	int GetSelectedTribeWarButtonIndex() { return NativeCall<int>(this, "UUI_TribeManager.GetSelectedTribeWarButtonIndex"); }
	TextEntryInstigator GetSourceOfTextEntry() { return NativeCall<TextEntryInstigator>(this, "UUI_TribeManager.GetSourceOfTextEntry"); }
	void IniteForInviteData() { NativeCall<void>(this, "UUI_TribeManager.IniteForInviteData"); }
	void InitializeSubMenu(UUI_Hub * Hub) { NativeCall<void, UUI_Hub *>(this, "UUI_TribeManager.InitializeSubMenu", Hub); }
	bool IsPlayerOnline(const TArray<unsigned __int64> * OnlinePlayers, int PlayerID) { return NativeCall<bool, const TArray<unsigned __int64> *, int>(this, "UUI_TribeManager.IsPlayerOnline", OnlinePlayers, PlayerID); }
	void OnGroupRankSelected(FString SelectedItem, ESelectInfo::Type SelectionType) { NativeCall<void, FString, ESelectInfo::Type>(this, "UUI_TribeManager.OnGroupRankSelected", SelectedItem, SelectionType); }
	void OnTextEntryReturned(FString StringEntry) { NativeCall<void, FString>(this, "UUI_TribeManager.OnTextEntryReturned", StringEntry); }
	void PlayerEntryButtonSelected(UWidget * theWidget) { NativeCall<void, UWidget *>(this, "UUI_TribeManager.PlayerEntryButtonSelected", theWidget); }
	void RankGroupButtonSelected(UWidget * theWidget) { NativeCall<void, UWidget *>(this, "UUI_TribeManager.RankGroupButtonSelected", theWidget); }
	void RefreshGroupRankList() { NativeCall<void>(this, "UUI_TribeManager.RefreshGroupRankList"); }
	void RefreshGroupRanksPanel() { NativeCall<void>(this, "UUI_TribeManager.RefreshGroupRanksPanel"); }
	void RefreshTribeAlliances(const FTribeData * TribeData, bool ForceRefresh, bool RefreshMembersOnly) { NativeCall<void, const FTribeData *, bool, bool>(this, "UUI_TribeManager.RefreshTribeAlliances", TribeData, ForceRefresh, RefreshMembersOnly); }
	void RefreshTribePlayers(const FTribeData * TribeData) { NativeCall<void, const FTribeData *>(this, "UUI_TribeManager.RefreshTribePlayers", TribeData); }
	void Tick_Implementation(FGeometry MyGeometry, float InDeltaTime) { NativeCall<void, FGeometry, float>(this, "UUI_TribeManager.Tick_Implementation", MyGeometry, InDeltaTime); }
	void TribeAllianceEntryButtonSelected(UWidget * theWidget) { NativeCall<void, UWidget *>(this, "UUI_TribeManager.TribeAllianceEntryButtonSelected", theWidget); }
	void TribeAllianceMemberButtonSelected(UWidget * theWidget) { NativeCall<void, UWidget *>(this, "UUI_TribeManager.TribeAllianceMemberButtonSelected", theWidget); }
	void TribeLogRefreshed() { NativeCall<void>(this, "UUI_TribeManager.TribeLogRefreshed"); }
	void TribeWarEntryButtonSelected(UWidget * theWidget) { NativeCall<void, UWidget *>(this, "UUI_TribeManager.TribeWarEntryButtonSelected", theWidget); }
	void UpdateTribeMembers(const FTribeData * TribeData) { NativeCall<void, const FTribeData *>(this, "UUI_TribeManager.UpdateTribeMembers", TribeData); }
};

