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
#include "AMissionType_ModularMissionBase.h"
#include "ULeaderboardRowWidget.h"
#include "FLeaderboardDisplayRow.h"

struct UUI_MissionList : UPrimalSubMenuUI
{
	char __padding[0x580L];
	FName& CloseButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_MissionList.CloseButtonName"); }
	FName& TitleLabelNameField() { return *GetNativePointerField<FName*>(this, "UUI_MissionList.TitleLabelName"); }
	FName& MissionListContainerNameField() { return *GetNativePointerField<FName*>(this, "UUI_MissionList.MissionListContainerName"); }
	FName& MissionDetailsContainerNameField() { return *GetNativePointerField<FName*>(this, "UUI_MissionList.MissionDetailsContainerName"); }
	FName& MissionDetails_MissionNameTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UUI_MissionList.MissionDetails_MissionNameTextBlockName"); }
	FName& MissionDetails_MissionDescriptionTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UUI_MissionList.MissionDetails_MissionDescriptionTextBlockName"); }
	FName& MissionDetails_StartMissionButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_MissionList.MissionDetails_StartMissionButtonName"); }
	FName& MissionDetails_StartMissionButtonTextNameField() { return *GetNativePointerField<FName*>(this, "UUI_MissionList.MissionDetails_StartMissionButtonTextName"); }
	FName& MissionDetails_LeaderboardsButtonNameField() { return *GetNativePointerField<FName*>(this, "UUI_MissionList.MissionDetails_LeaderboardsButtonName"); }
	FName& MissionDetails_LeaderboardsButtonTextNameField() { return *GetNativePointerField<FName*>(this, "UUI_MissionList.MissionDetails_LeaderboardsButtonTextName"); }
	FName& MissionDetails_DifficultyTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UUI_MissionList.MissionDetails_DifficultyTextBlockName"); }
	FName& MissionStatusPanelNameField() { return *GetNativePointerField<FName*>(this, "UUI_MissionList.MissionStatusPanelName"); }
	TSubclassOf<UMissionMetaTagInfo>& MetaTagInfoClassField() { return *GetNativePointerField<TSubclassOf<UMissionMetaTagInfo>*>(this, "UUI_MissionList.MetaTagInfoClass"); }
	TSubclassOf<UMissionListEntryWidget>& MissionList_WidgetTypeField() { return *GetNativePointerField<TSubclassOf<UMissionListEntryWidget>*>(this, "UUI_MissionList.MissionList_WidgetType"); }
	TSubclassOf<UMissionRequirementEntryWidget>& MissionRequirement_WidgetTypeField() { return *GetNativePointerField<TSubclassOf<UMissionRequirementEntryWidget>*>(this, "UUI_MissionList.MissionRequirement_WidgetType"); }
	TSubclassOf<UMissionObjectiveEntryWidget>& MissionObjective_WidgetTypeField() { return *GetNativePointerField<TSubclassOf<UMissionObjectiveEntryWidget>*>(this, "UUI_MissionList.MissionObjective_WidgetType"); }
	TSubclassOf<UMissionTimerWidget>& MissionTimer_WidgetTypeField() { return *GetNativePointerField<TSubclassOf<UMissionTimerWidget>*>(this, "UUI_MissionList.MissionTimer_WidgetType"); }
	TSubclassOf<UWorldBuffEntryWidget>& WorldBuffEffectListEntry_WidgetTypeField() { return *GetNativePointerField<TSubclassOf<UWorldBuffEntryWidget>*>(this, "UUI_MissionList.WorldBuffEffectListEntry_WidgetType"); }
	TSubclassOf<UMissionRequirementEntryWidget>& MissionRequirementEntry_WidgetTypeField() { return *GetNativePointerField<TSubclassOf<UMissionRequirementEntryWidget>*>(this, "UUI_MissionList.MissionRequirementEntry_WidgetType"); }
	FString& StartButtonDisplayText_StartMissionField() { return *GetNativePointerField<FString*>(this, "UUI_MissionList.StartButtonDisplayText_StartMission"); }
	FString& StartButtonDisplayText_LeaveMissionField() { return *GetNativePointerField<FString*>(this, "UUI_MissionList.StartButtonDisplayText_LeaveMission"); }
	FString& StartButtonDisplayText_EnableStatTrackerField() { return *GetNativePointerField<FString*>(this, "UUI_MissionList.StartButtonDisplayText_EnableStatTracker"); }
	FString& StartButtonDisplayText_DisableStatTrackerField() { return *GetNativePointerField<FString*>(this, "UUI_MissionList.StartButtonDisplayText_DisableStatTracker"); }
	FName& MissionList_EntryButtonWidgetNameField() { return *GetNativePointerField<FName*>(this, "UUI_MissionList.MissionList_EntryButtonWidgetName"); }
	FName& MissionList_NameWidgetNameField() { return *GetNativePointerField<FName*>(this, "UUI_MissionList.MissionList_NameWidgetName"); }
	FName& MissionList_DescWidgetNameField() { return *GetNativePointerField<FName*>(this, "UUI_MissionList.MissionList_DescWidgetName"); }
	FName& MissionList_ErrorTextWidgetNameField() { return *GetNativePointerField<FName*>(this, "UUI_MissionList.MissionList_ErrorTextWidgetName"); }
	FName& MissionList_EligibilityWidgetNameField() { return *GetNativePointerField<FName*>(this, "UUI_MissionList.MissionList_EligibilityWidgetName"); }
	FName& MissionList_StartButtonTextWidgetNameField() { return *GetNativePointerField<FName*>(this, "UUI_MissionList.MissionList_StartButtonTextWidgetName"); }
	FName& MissionList_StartButtonWidgetNameField() { return *GetNativePointerField<FName*>(this, "UUI_MissionList.MissionList_StartButtonWidgetName"); }
	float& TableWidthField() { return *GetNativePointerField<float*>(this, "UUI_MissionList.TableWidth"); }
	float& LatestScoreTableWidthField() { return *GetNativePointerField<float*>(this, "UUI_MissionList.LatestScoreTableWidth"); }
	int& MaxLeaderboardRowsToDisplayField() { return *GetNativePointerField<int*>(this, "UUI_MissionList.MaxLeaderboardRowsToDisplay"); }
	FLinearColor& SwitcherTextActiveColorField() { return *GetNativePointerField<FLinearColor*>(this, "UUI_MissionList.SwitcherTextActiveColor"); }
	FLinearColor& SwitcherTextInactiveColorField() { return *GetNativePointerField<FLinearColor*>(this, "UUI_MissionList.SwitcherTextInactiveColor"); }
	FLinearColor& AlphaMissionColorField() { return *GetNativePointerField<FLinearColor*>(this, "UUI_MissionList.AlphaMissionColor"); }
	FLinearColor& BetaMissionColorField() { return *GetNativePointerField<FLinearColor*>(this, "UUI_MissionList.BetaMissionColor"); }
	FLinearColor& GammaMissionColorField() { return *GetNativePointerField<FLinearColor*>(this, "UUI_MissionList.GammaMissionColor"); }
	FLinearColor& ActiveMissionColorField() { return *GetNativePointerField<FLinearColor*>(this, "UUI_MissionList.ActiveMissionColor"); }
	FLinearColor& InactiveMissionColorField() { return *GetNativePointerField<FLinearColor*>(this, "UUI_MissionList.InactiveMissionColor"); }
	FLinearColor& AvailableMissionColorField() { return *GetNativePointerField<FLinearColor*>(this, "UUI_MissionList.AvailableMissionColor"); }
	FLinearColor& UnavailableMissionColorField() { return *GetNativePointerField<FLinearColor*>(this, "UUI_MissionList.UnavailableMissionColor"); }
	FLinearColor& DefaultTextColorField() { return *GetNativePointerField<FLinearColor*>(this, "UUI_MissionList.DefaultTextColor"); }
	FLinearColor& GlitchTintColorField() { return *GetNativePointerField<FLinearColor*>(this, "UUI_MissionList.GlitchTintColor"); }
	FLinearColor& GlitchTextColorField() { return *GetNativePointerField<FLinearColor*>(this, "UUI_MissionList.GlitchTextColor"); }
	TArray<UMissionRequirementEntryWidget *>& MissionRequirementEntriesField() { return *GetNativePointerField<TArray<UMissionRequirementEntryWidget *>*>(this, "UUI_MissionList.MissionRequirementEntries"); }
	TArray<UMissionRequirementEntryWidget *>& CustomMissionRequirementEntriesField() { return *GetNativePointerField<TArray<UMissionRequirementEntryWidget *>*>(this, "UUI_MissionList.CustomMissionRequirementEntries"); }
	TArray<FTaggedString>& CustomMissionRequirementTaggedStringsField() { return *GetNativePointerField<TArray<FTaggedString>*>(this, "UUI_MissionList.CustomMissionRequirementTaggedStrings"); }
	UTextBlock * TitleLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_MissionList.TitleLabel"); }
	UVerticalBox * MissionListContainerField() { return GetNativePointerField<UVerticalBox *>(this, "UUI_MissionList.MissionListContainer"); }
	UVerticalBox * MissionDetailsContainerField() { return GetNativePointerField<UVerticalBox *>(this, "UUI_MissionList.MissionDetailsContainer"); }
	UTextBlock * MissionActiveLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_MissionList.MissionActiveLabel"); }
	UTextBlock * MissionDetails_MissionNameTextBlockField() { return GetNativePointerField<UTextBlock *>(this, "UUI_MissionList.MissionDetails_MissionNameTextBlock"); }
	UTextBlock * MissionDetails_MissionDescriptionTextBlockField() { return GetNativePointerField<UTextBlock *>(this, "UUI_MissionList.MissionDetails_MissionDescriptionTextBlock"); }
	UTextBlock * MissionDetails_StartMissionButtonTextField() { return GetNativePointerField<UTextBlock *>(this, "UUI_MissionList.MissionDetails_StartMissionButtonText"); }
	UTextBlock * MissionDetails_DifficultyTextBlockField() { return GetNativePointerField<UTextBlock *>(this, "UUI_MissionList.MissionDetails_DifficultyTextBlock"); }
	UMissionBiomeCompletionWidget * AllMissionsButtonField() { return GetNativePointerField<UMissionBiomeCompletionWidget *>(this, "UUI_MissionList.AllMissionsButton"); }
	UMissionBiomeCompletionWidget * ArcticBiomeButtonField() { return GetNativePointerField<UMissionBiomeCompletionWidget *>(this, "UUI_MissionList.ArcticBiomeButton"); }
	UMissionBiomeCompletionWidget * BogBiomeButtonField() { return GetNativePointerField<UMissionBiomeCompletionWidget *>(this, "UUI_MissionList.BogBiomeButton"); }
	UMissionBiomeCompletionWidget * LunarBiomeButtonField() { return GetNativePointerField<UMissionBiomeCompletionWidget *>(this, "UUI_MissionList.LunarBiomeButton"); }
	UMissionBiomeCompletionWidget * OceanBiomeButtonField() { return GetNativePointerField<UMissionBiomeCompletionWidget *>(this, "UUI_MissionList.OceanBiomeButton"); }
	UMissionBiomeCompletionWidget * VolcanicBiomeButtonField() { return GetNativePointerField<UMissionBiomeCompletionWidget *>(this, "UUI_MissionList.VolcanicBiomeButton"); }
	UVerticalBox * HexagonRewardsPanelField() { return GetNativePointerField<UVerticalBox *>(this, "UUI_MissionList.HexagonRewardsPanel"); }
	UVerticalBox * WorldBuffsRewardsPanelField() { return GetNativePointerField<UVerticalBox *>(this, "UUI_MissionList.WorldBuffsRewardsPanel"); }
	UVerticalBox * InnerWorldBuffsRewardsPanelField() { return GetNativePointerField<UVerticalBox *>(this, "UUI_MissionList.InnerWorldBuffsRewardsPanel"); }
	UTextBlock * HexagonRewardsTextLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_MissionList.HexagonRewardsTextLabel"); }
	UTextBlock * TrackMissionLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_MissionList.TrackMissionLabel"); }
	UTextBlock * MissionListBiomeLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_MissionList.MissionListBiomeLabel"); }
	UTextBlock * EmptyListPlaceholderTextBlockField() { return GetNativePointerField<UTextBlock *>(this, "UUI_MissionList.EmptyListPlaceholderTextBlock"); }
	FString& TrackMissionStringField() { return *GetNativePointerField<FString*>(this, "UUI_MissionList.TrackMissionString"); }
	FString& UntrackMissionStringField() { return *GetNativePointerField<FString*>(this, "UUI_MissionList.UntrackMissionString"); }
	FString& AllMissionListStringField() { return *GetNativePointerField<FString*>(this, "UUI_MissionList.AllMissionListString"); }
	FString& ArcticListStringField() { return *GetNativePointerField<FString*>(this, "UUI_MissionList.ArcticListString"); }
	FString& BogListStringField() { return *GetNativePointerField<FString*>(this, "UUI_MissionList.BogListString"); }
	FString& LunarListStringField() { return *GetNativePointerField<FString*>(this, "UUI_MissionList.LunarListString"); }
	FString& OceanListStringField() { return *GetNativePointerField<FString*>(this, "UUI_MissionList.OceanListString"); }
	FString& VolcanicListStringField() { return *GetNativePointerField<FString*>(this, "UUI_MissionList.VolcanicListString"); }
	TArray<UUI_MissionList::FMissionWidgetInfo>& MissionListField() { return *GetNativePointerField<TArray<UUI_MissionList::FMissionWidgetInfo>*>(this, "UUI_MissionList.MissionList"); }
	UVerticalBox * PlayerListContainerField() { return GetNativePointerField<UVerticalBox *>(this, "UUI_MissionList.PlayerListContainer"); }
	UVerticalBox * ActiveMissionContainerField() { return GetNativePointerField<UVerticalBox *>(this, "UUI_MissionList.ActiveMissionContainer"); }
	UVerticalBox * TrackedMissionContainerField() { return GetNativePointerField<UVerticalBox *>(this, "UUI_MissionList.TrackedMissionContainer"); }
	UMissionTimerWidget * MissionTimerField() { return GetNativePointerField<UMissionTimerWidget *>(this, "UUI_MissionList.MissionTimer"); }
	UCustomButtonWidget * DistanceSortButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_MissionList.DistanceSortButton"); }
	UCustomButtonWidget * AlphabeticalSortButtonField() { return GetNativePointerField<UCustomButtonWidget *>(this, "UUI_MissionList.AlphabeticalSortButton"); }
	UTextBlock * EffectsTabButtonLabelField() { return GetNativePointerField<UTextBlock *>(this, "UUI_MissionList.EffectsTabButtonLabel"); }
	UTextBlock * EmptyEffectsListTextBlockField() { return GetNativePointerField<UTextBlock *>(this, "UUI_MissionList.EmptyEffectsListTextBlock"); }
	UImage * TabBackgroundImageField() { return GetNativePointerField<UImage *>(this, "UUI_MissionList.TabBackgroundImage"); }
	UMissionRequirementEntryWidget * MissionsUI_RequirementEntry_MountedDinosOnlyField() { return GetNativePointerField<UMissionRequirementEntryWidget *>(this, "UUI_MissionList.MissionsUI_RequirementEntry_MountedDinosOnly"); }
	UMissionRequirementEntryWidget * MissionsUI_RequirementEntry_MaxDinosPerPlayerField() { return GetNativePointerField<UMissionRequirementEntryWidget *>(this, "UUI_MissionList.MissionsUI_RequirementEntry_MaxDinosPerPlayer"); }
	UTextBlock * RewardsLabelTextBlockField() { return GetNativePointerField<UTextBlock *>(this, "UUI_MissionList.RewardsLabelTextBlock"); }
	ULeaderboardRowWidget * HeaderRowWidgetField() { return GetNativePointerField<ULeaderboardRowWidget *>(this, "UUI_MissionList.HeaderRowWidget"); }
	UVerticalBox * RowContainerField() { return GetNativePointerField<UVerticalBox *>(this, "UUI_MissionList.RowContainer"); }
	TArray<ULeaderboardRowWidget *>& RowWidgetsField() { return *GetNativePointerField<TArray<ULeaderboardRowWidget *>*>(this, "UUI_MissionList.RowWidgets"); }
	ULeaderboardRowWidget * LatestScoreRowWidgetField() { return GetNativePointerField<ULeaderboardRowWidget *>(this, "UUI_MissionList.LatestScoreRowWidget"); }
	UVerticalBox * LatestPlayerScoreRowContainerField() { return GetNativePointerField<UVerticalBox *>(this, "UUI_MissionList.LatestPlayerScoreRowContainer"); }
	UTextBlock * MissionNotCompletedTextBlockField() { return GetNativePointerField<UTextBlock *>(this, "UUI_MissionList.MissionNotCompletedTextBlock"); }
	EListDisplay::Type& CurrentListTypeField() { return *GetNativePointerField<EListDisplay::Type*>(this, "UUI_MissionList.CurrentListType"); }
	FString& MissionFilterField() { return *GetNativePointerField<FString*>(this, "UUI_MissionList.MissionFilter"); }
	long double& LastSyncMissionTimeField() { return *GetNativePointerField<long double*>(this, "UUI_MissionList.LastSyncMissionTime"); }
	int& BiomeFilterMaskField() { return *GetNativePointerField<int*>(this, "UUI_MissionList.BiomeFilterMask"); }
	bool& bWaitingOnServerDataField() { return *GetNativePointerField<bool*>(this, "UUI_MissionList.bWaitingOnServerData"); }
	long double& LastMissionButtonPressTimeField() { return *GetNativePointerField<long double*>(this, "UUI_MissionList.LastMissionButtonPressTime"); }
	long double& LastActiveMissionSyncTimeField() { return *GetNativePointerField<long double*>(this, "UUI_MissionList.LastActiveMissionSyncTime"); }
	TArray<FName>& LastSyncedMissionListActiveMissionTagsField() { return *GetNativePointerField<TArray<FName>*>(this, "UUI_MissionList.LastSyncedMissionListActiveMissionTags"); }
	AMissionDispatcher * AccessedFromDispatcherField() { return GetNativePointerField<AMissionDispatcher *>(this, "UUI_MissionList.AccessedFromDispatcher"); }

	// Functions

	void FMissionWidgetInfo(UMissionListEntryWidget * Container, const TSubclassOf<AMissionType> * Mission) { NativeCall<void, UMissionListEntryWidget *, const TSubclassOf<AMissionType> *>(this, "UUI_MissionList.FMissionWidgetInfo", Container, Mission); }
	void FMissionWidgetInfo() { NativeCall<void>(this, "UUI_MissionList.FMissionWidgetInfo"); }
	void ClickedButton(UWidget * ClickedWidget) { NativeCall<void, UWidget *>(this, "UUI_MissionList.ClickedButton", ClickedWidget); }
	void ClickedLeaderboardsButton(int MissionListIndex) { NativeCall<void, int>(this, "UUI_MissionList.ClickedLeaderboardsButton", MissionListIndex); }
	void ClickedMissionEntryButton(int MissionListIndex) { NativeCall<void, int>(this, "UUI_MissionList.ClickedMissionEntryButton", MissionListIndex); }
	bool ClickedStartMissionButton(int MissionListIndex) { return NativeCall<bool, int>(this, "UUI_MissionList.ClickedStartMissionButton", MissionListIndex); }
	UMissionListEntryWidget * CreateMissionListWidget() { return NativeCall<UMissionListEntryWidget *>(this, "UUI_MissionList.CreateMissionListWidget"); }
	void FMissionWidgetInfo() { NativeCall<void>(this, "UUI_MissionList.FMissionWidgetInfo"); }
	void FMissionWidgetInfo(UUI_MissionList * MissionListWidget, UMissionListEntryWidget * InContainer) { NativeCall<void, UUI_MissionList *, UMissionListEntryWidget *>(this, "UUI_MissionList.FMissionWidgetInfo", MissionListWidget, InContainer); }
	EBiomeFilter::Type GetCurrentPlayerBiomeType() { return NativeCall<EBiomeFilter::Type>(this, "UUI_MissionList.GetCurrentPlayerBiomeType"); }
	FString * FMissionWidgetInfo(FString * result, APlayerController * Controller) { return NativeCall<FString *, FString *, APlayerController *>(this, "UUI_MissionList.FMissionWidgetInfo", result, Controller); }
	void GetListOnlyInfo(AMissionType * InMissionA, AMissionType * InMissionB, bool * OutListA, bool * OutListB) { NativeCall<void, AMissionType *, AMissionType *, bool *, bool *>(this, "UUI_MissionList.GetListOnlyInfo", InMissionA, InMissionB, OutListA, OutListB); }
	const UMissionMetaTagInfo * GetMetaTagInfoFast() { return NativeCall<const UMissionMetaTagInfo *>(this, "UUI_MissionList.GetMetaTagInfoFast"); }
	FString * GetMissionDuration(FString * result, AMissionType * Mission) { return NativeCall<FString *, FString *, AMissionType *>(this, "UUI_MissionList.GetMissionDuration", result, Mission); }
	int GetMissionIndexAtSortOrder(int InSortOrder) { return NativeCall<int, int>(this, "UUI_MissionList.GetMissionIndexAtSortOrder", InSortOrder); }
	UMissionRequirementEntryWidget * GetMissionRequirementEntryByTag(FName Tag) { return NativeCall<UMissionRequirementEntryWidget *, FName>(this, "UUI_MissionList.GetMissionRequirementEntryByTag", Tag); }
	int GetNumAvailableMissions() { return NativeCall<int>(this, "UUI_MissionList.GetNumAvailableMissions"); }
	int GetSelectedMissionIndex() { return NativeCall<int>(this, "UUI_MissionList.GetSelectedMissionIndex"); }
	void ManageMissionRequirementWidget(UMissionRequirementEntryWidget * ReqEntry, FName CustomTag, FString DisplayText) { NativeCall<void, UMissionRequirementEntryWidget *, FName, FString>(this, "UUI_MissionList.ManageMissionRequirementWidget", ReqEntry, CustomTag, DisplayText); }
	void OnHide() { NativeCall<void>(this, "UUI_MissionList.OnHide"); }
	void OnMissionClientDataUpdated(APrimalBuff_MissionData * DataBuff) { NativeCall<void, APrimalBuff_MissionData *>(this, "UUI_MissionList.OnMissionClientDataUpdated", DataBuff); }
	void OnMissionFilterChanged(const FText * Text) { NativeCall<void, const FText *>(this, "UUI_MissionList.OnMissionFilterChanged", Text); }
	void OnShow() { NativeCall<void>(this, "UUI_MissionList.OnShow"); }
	void SetLatestPlayerScore(TSubclassOf<ULeaderboardRowWidget> LeaderboardRowWidget, bool bPlayerHasValidLatestScore, const FLeaderboardDisplayRow * ScoreRow) { NativeCall<void, TSubclassOf<ULeaderboardRowWidget>, bool, const FLeaderboardDisplayRow *>(this, "UUI_MissionList.SetLatestPlayerScore", LeaderboardRowWidget, bPlayerHasValidLatestScore, ScoreRow); }
	void SetLeaderboardRows(TSubclassOf<ULeaderboardRowWidget> LeaderboardRowWidget, const FLeaderboardDisplayRow * HeaderRow, const TArray<FLeaderboardDisplayRow> * Rows) { NativeCall<void, TSubclassOf<ULeaderboardRowWidget>, const FLeaderboardDisplayRow *, const TArray<FLeaderboardDisplayRow> *>(this, "UUI_MissionList.SetLeaderboardRows", LeaderboardRowWidget, HeaderRow, Rows); }
	bool ShouldBeFiltered(AMissionType * InMission) { return NativeCall<bool, AMissionType *>(this, "UUI_MissionList.ShouldBeFiltered", InMission); }
	void ShowEffectsInfo() { NativeCall<void>(this, "UUI_MissionList.ShowEffectsInfo"); }
	void ShowLeaderboards() { NativeCall<void>(this, "UUI_MissionList.ShowLeaderboards"); }
	void ShowMissionInfo() { NativeCall<void>(this, "UUI_MissionList.ShowMissionInfo"); }
	void ShowMissionsList() { NativeCall<void>(this, "UUI_MissionList.ShowMissionsList"); }
	void SortHelperGetDifficultyInts(AMissionType * InMissionA, AMissionType * InMissionB, int * OutIntA, int * OutIntB) { NativeCall<void, AMissionType *, AMissionType *, int *, int *>(this, "UUI_MissionList.SortHelperGetDifficultyInts", InMissionA, InMissionB, OutIntA, OutIntB); }
	void SortHelperGetHasDispatcher(AMissionType * InMissionA, AMissionType * InMissionB, bool * OutDispatcherA, bool * OutDispatcherB) { NativeCall<void, AMissionType *, AMissionType *, bool *, bool *>(this, "UUI_MissionList.SortHelperGetHasDispatcher", InMissionA, InMissionB, OutDispatcherA, OutDispatcherB); }
	void SortMissions(bool bForceSort) { NativeCall<void, bool>(this, "UUI_MissionList.SortMissions", bForceSort); }
	void SyncEffectsList() { NativeCall<void>(this, "UUI_MissionList.SyncEffectsList"); }
	void SyncMissionList(EListDisplay::Type ListType, bool bSelectActiveMission, bool bForceUpdate) { NativeCall<void, EListDisplay::Type, bool, bool>(this, "UUI_MissionList.SyncMissionList", ListType, bSelectActiveMission, bForceUpdate); }
	void FMissionWidgetInfo(UUI_MissionList * MissionListWidget, APlayerController * Controller, APrimalBuff_MissionData * DataBuff, bool bOnlyUpdateTimers) { NativeCall<void, UUI_MissionList *, APlayerController *, APrimalBuff_MissionData *, bool>(this, "UUI_MissionList.FMissionWidgetInfo", MissionListWidget, Controller, DataBuff, bOnlyUpdateTimers); }
	void Tick_Implementation(FGeometry MyGeometry, float InDeltaTime) { NativeCall<void, FGeometry, float>(this, "UUI_MissionList.Tick_Implementation", MyGeometry, InDeltaTime); }
	void UpdateBiomeButtonStates() { NativeCall<void>(this, "UUI_MissionList.UpdateBiomeButtonStates"); }
	void UpdateEffectsTabText() { NativeCall<void>(this, "UUI_MissionList.UpdateEffectsTabText"); }
	void UpdateMissionWaypoint() { NativeCall<void>(this, "UUI_MissionList.UpdateMissionWaypoint"); }
};

