#pragma once

#include "BaseDeclarations.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"
#include "FMissionAlertEntry.h"
#include "FMissionPhaseRequirement.h"

struct UHUDActiveMissionWidget : UPrimalUI
{
	char __padding[0x400L];
	TArray<FName>& ActiveMissionVisibilityWidgetNamesField() { return *GetNativePointerField<TArray<FName>*>(this, "UHUDActiveMissionWidget.ActiveMissionVisibilityWidgetNames"); }
	FName& MissionNameTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.MissionNameTextBlockName"); }
	FName& MissionDifficultyTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.MissionDifficultyTextBlockName"); }
	FName& MissionDescriptionTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.MissionDescriptionTextBlockName"); }
	FName& ObjectiveTimeValueTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.ObjectiveTimeValueTextBlockName"); }
	FName& ObjectiveTimeLabelTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.ObjectiveTimeLabelTextBlockName"); }
	FName& ObjectiveTimePanelNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.ObjectiveTimePanelName"); }
	FName& ObjectiveTimeProgressBarNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.ObjectiveTimeProgressBarName"); }
	FName& MissionDifficultyPanelNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.MissionDifficultyPanelName"); }
	FName& PhaseRequirementContainerNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.PhaseRequirementContainerName"); }
	FLinearColor& MissionTimeRemainingDefaultTextColorField() { return *GetNativePointerField<FLinearColor*>(this, "UHUDActiveMissionWidget.MissionTimeRemainingDefaultTextColor"); }
	TArray<FName>& MissionStatTrackerVisibilityWidgetNamesField() { return *GetNativePointerField<TArray<FName>*>(this, "UHUDActiveMissionWidget.MissionStatTrackerVisibilityWidgetNames"); }
	FName& MissionStatTrackerContainerNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.MissionStatTrackerContainerName"); }
	FName& PhaseBackgroundBorderWidgetNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.PhaseBackgroundBorderWidgetName"); }
	FName& PhaseRichTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.PhaseRichTextBlockName"); }
	FName& PhaseDescriptionBlockNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.PhaseDescriptionBlockName"); }
	FName& PhaseDescriptionPrefixBlockNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.PhaseDescriptionPrefixBlockName"); }
	FName& PhaseDescriptionSuffixBlockNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.PhaseDescriptionSuffixBlockName"); }
	FName& PhaseValueContainerNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.PhaseValueContainerName"); }
	FName& PhaseValueTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.PhaseValueTextBlockName"); }
	FName& PhaseValueSlashTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.PhaseValueSlashTextBlockName"); }
	FName& PhaseMaxValueTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.PhaseMaxValueTextBlockName"); }
	FName& PhaseProgressContainerNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.PhaseProgressContainerName"); }
	FName& PhaseProgressBarNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.PhaseProgressBarName"); }
	FLinearColor& PhaseNormalBackgroundColorField() { return *GetNativePointerField<FLinearColor*>(this, "UHUDActiveMissionWidget.PhaseNormalBackgroundColor"); }
	FLinearColor& PhaseCompleteBackgroundColorField() { return *GetNativePointerField<FLinearColor*>(this, "UHUDActiveMissionWidget.PhaseCompleteBackgroundColor"); }
	FName& MissionAlertFlyoutContainerNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.MissionAlertFlyoutContainerName"); }
	FName& MissionAlertEntryContainerNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.MissionAlertEntryContainerName"); }
	FName& MissionAlertTitleTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.MissionAlertTitleTextBlockName"); }
	FName& MissionAlertBorderNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.MissionAlertBorderName"); }
	FName& TopMissionAlertFlyoutContainerNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.TopMissionAlertFlyoutContainerName"); }
	FName& TopMissionAlertEntryContainerNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.TopMissionAlertEntryContainerName"); }
	FName& TopMissionAlertTitleTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.TopMissionAlertTitleTextBlockName"); }
	FName& TopMissionAlertBorderNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.TopMissionAlertBorderName"); }
	FLinearColor& MissionAlertColor_NegativeField() { return *GetNativePointerField<FLinearColor*>(this, "UHUDActiveMissionWidget.MissionAlertColor_Negative"); }
	FLinearColor& MissionAlertColor_NeutralField() { return *GetNativePointerField<FLinearColor*>(this, "UHUDActiveMissionWidget.MissionAlertColor_Neutral"); }
	FLinearColor& MissionAlertColor_PositiveField() { return *GetNativePointerField<FLinearColor*>(this, "UHUDActiveMissionWidget.MissionAlertColor_Positive"); }
	float& AlertFlyoutAnimationDurationField() { return *GetNativePointerField<float*>(this, "UHUDActiveMissionWidget.AlertFlyoutAnimationDuration"); }
	TEnumAsByte<enum ESimpleCurve::Type>& AlertFlyoutCurveField() { return *GetNativePointerField<TEnumAsByte<enum ESimpleCurve::Type>*>(this, "UHUDActiveMissionWidget.AlertFlyoutCurve"); }
	FVector2D& AlertOffscreenTransformField() { return *GetNativePointerField<FVector2D*>(this, "UHUDActiveMissionWidget.AlertOffscreenTransform"); }
	FVector2D& TopAlertOffscreenTransformField() { return *GetNativePointerField<FVector2D*>(this, "UHUDActiveMissionWidget.TopAlertOffscreenTransform"); }
	FName& AlertEntryIconContainerNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.AlertEntryIconContainerName"); }
	FName& AlertEntryIconNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.AlertEntryIconName"); }
	FName& AlertCountTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.AlertCountTextBlockName"); }
	FName& AlertContentTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.AlertContentTextBlockName"); }
	FName& RacePanelNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.RacePanelName"); }
	FName& RacePositionTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.RacePositionTextBlockName"); }
	FName& RaceMaxPositionTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.RaceMaxPositionTextBlockName"); }
	FName& MissionTimeValueTextBlockNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.MissionTimeValueTextBlockName"); }
	FName& BestRaceTimeNameField() { return *GetNativePointerField<FName*>(this, "UHUDActiveMissionWidget.BestRaceTimeName"); }
	FLinearColor& ObjectiveTimeRemainingProgressBarColorField() { return *GetNativePointerField<FLinearColor*>(this, "UHUDActiveMissionWidget.ObjectiveTimeRemainingProgressBarColor"); }
	FLinearColor& LowObjectiveTimeRemainingProgressBarColorField() { return *GetNativePointerField<FLinearColor*>(this, "UHUDActiveMissionWidget.LowObjectiveTimeRemainingProgressBarColor"); }
	FLinearColor& PhaseReqTextColor_NegativeField() { return *GetNativePointerField<FLinearColor*>(this, "UHUDActiveMissionWidget.PhaseReqTextColor_Negative"); }
	FLinearColor& PhaseReqTextColor_NeutralField() { return *GetNativePointerField<FLinearColor*>(this, "UHUDActiveMissionWidget.PhaseReqTextColor_Neutral"); }
	FLinearColor& PhaseReqTextColor_PositiveField() { return *GetNativePointerField<FLinearColor*>(this, "UHUDActiveMissionWidget.PhaseReqTextColor_Positive"); }
	FLinearColor& PhaseReqProgressColor_NegativeField() { return *GetNativePointerField<FLinearColor*>(this, "UHUDActiveMissionWidget.PhaseReqProgressColor_Negative"); }
	FLinearColor& PhaseReqProgressColor_NeutralField() { return *GetNativePointerField<FLinearColor*>(this, "UHUDActiveMissionWidget.PhaseReqProgressColor_Neutral"); }
	FLinearColor& PhaseReqProgressColor_PositiveField() { return *GetNativePointerField<FLinearColor*>(this, "UHUDActiveMissionWidget.PhaseReqProgressColor_Positive"); }
	float& OpacityForSlashAndMaxValueTextField() { return *GetNativePointerField<float*>(this, "UHUDActiveMissionWidget.OpacityForSlashAndMaxValueText"); }
	TSubclassOf<UWorldBuffEntryWidget>& WorldBuffEffectListEntry_WidgetTypeField() { return *GetNativePointerField<TSubclassOf<UWorldBuffEntryWidget>*>(this, "UHUDActiveMissionWidget.WorldBuffEffectListEntry_WidgetType"); }
	long double& LastEffectsListSyncTimeField() { return *GetNativePointerField<long double*>(this, "UHUDActiveMissionWidget.LastEffectsListSyncTime"); }
	UTextBlock * BestRaceTimeTextBlockField() { return GetNativePointerField<UTextBlock *>(this, "UHUDActiveMissionWidget.BestRaceTimeTextBlock"); }
	int& MaxWorldBuffsDisplayedAtOnceField() { return *GetNativePointerField<int*>(this, "UHUDActiveMissionWidget.MaxWorldBuffsDisplayedAtOnce"); }
	TArray<FMissionPhaseRequirement>& PhaseRequirementsField() { return *GetNativePointerField<TArray<FMissionPhaseRequirement>*>(this, "UHUDActiveMissionWidget.PhaseRequirements"); }
	TArray<UHUDActiveMissionWidget::FAlertEntryData>& AlertEntriesField() { return *GetNativePointerField<TArray<UHUDActiveMissionWidget::FAlertEntryData>*>(this, "UHUDActiveMissionWidget.AlertEntries"); }
	TArray<UHUDActiveMissionWidget::FAlertEntryData>& TopAlertEntriesField() { return *GetNativePointerField<TArray<UHUDActiveMissionWidget::FAlertEntryData>*>(this, "UHUDActiveMissionWidget.TopAlertEntries"); }
	UTextBlock * MissionNameTextBlockField() { return GetNativePointerField<UTextBlock *>(this, "UHUDActiveMissionWidget.MissionNameTextBlock"); }
	UTextBlock * MissionDifficultyTextBlockField() { return GetNativePointerField<UTextBlock *>(this, "UHUDActiveMissionWidget.MissionDifficultyTextBlock"); }
	UTextBlock * MissionDescTextBlockField() { return GetNativePointerField<UTextBlock *>(this, "UHUDActiveMissionWidget.MissionDescTextBlock"); }
	UTextBlock * ObjectiveTimeValueTextBlockField() { return GetNativePointerField<UTextBlock *>(this, "UHUDActiveMissionWidget.ObjectiveTimeValueTextBlock"); }
	UTextBlock * ObjectiveTimeLabelTextBlockField() { return GetNativePointerField<UTextBlock *>(this, "UHUDActiveMissionWidget.ObjectiveTimeLabelTextBlock"); }
	UProgressBar * ObjectiveTimeProgressBarField() { return GetNativePointerField<UProgressBar *>(this, "UHUDActiveMissionWidget.ObjectiveTimeProgressBar"); }
	UTextBlock * RacePositionTextBlockField() { return GetNativePointerField<UTextBlock *>(this, "UHUDActiveMissionWidget.RacePositionTextBlock"); }
	UTextBlock * RaceMaxPositionTextBlockField() { return GetNativePointerField<UTextBlock *>(this, "UHUDActiveMissionWidget.RaceMaxPositionTextBlock"); }
	UTextBlock * MissionAlertTitleTextBlockField() { return GetNativePointerField<UTextBlock *>(this, "UHUDActiveMissionWidget.MissionAlertTitleTextBlock"); }
	UTextBlock * TopMissionAlertTitleTextBlockField() { return GetNativePointerField<UTextBlock *>(this, "UHUDActiveMissionWidget.TopMissionAlertTitleTextBlock"); }
	long double& AlertFlyoutStartTimeField() { return *GetNativePointerField<long double*>(this, "UHUDActiveMissionWidget.AlertFlyoutStartTime"); }
	long double& TopAlertFlyoutStartTimeField() { return *GetNativePointerField<long double*>(this, "UHUDActiveMissionWidget.TopAlertFlyoutStartTime"); }
	bool& bAlertFlyoutInField() { return *GetNativePointerField<bool*>(this, "UHUDActiveMissionWidget.bAlertFlyoutIn"); }
	bool& bWantsToBeVisibleField() { return *GetNativePointerField<bool*>(this, "UHUDActiveMissionWidget.bWantsToBeVisible"); }
	UCanvasPanel * CustomStatusCanvasField() { return GetNativePointerField<UCanvasPanel *>(this, "UHUDActiveMissionWidget.CustomStatusCanvas"); }
	UTextBlock * MissionTimeValueTextBlockField() { return GetNativePointerField<UTextBlock *>(this, "UHUDActiveMissionWidget.MissionTimeValueTextBlock"); }
	TArray<FName>& ActiveWorldBuffsLastSyncField() { return *GetNativePointerField<TArray<FName>*>(this, "UHUDActiveMissionWidget.ActiveWorldBuffsLastSync"); }

	// Functions

	void AddToViewport() { NativeCall<void>(this, "UHUDActiveMissionWidget.AddToViewport"); }
	static UHUDActiveMissionWidget * GetActiveMissionWidget(APlayerController * PlayerController) { return NativeCall<UHUDActiveMissionWidget *, APlayerController *>(nullptr, "UHUDActiveMissionWidget.GetActiveMissionWidget", PlayerController); }
	bool HaveActiveMission() { return NativeCall<bool>(this, "UHUDActiveMissionWidget.HaveActiveMission"); }
	void HideMissionAlert(bool bInstant, bool bHideTop) { NativeCall<void, bool, bool>(this, "UHUDActiveMissionWidget.HideMissionAlert", bInstant, bHideTop); }
	bool IsMissionAlertVisible(bool bIsTop) { return NativeCall<bool, bool>(this, "UHUDActiveMissionWidget.IsMissionAlertVisible", bIsTop); }
	void SetActiveMissionVisible(bool bIsVisible) { NativeCall<void, bool>(this, "UHUDActiveMissionWidget.SetActiveMissionVisible", bIsVisible); }
	void SetMissionUIVisible(bool bIsVisible) { NativeCall<void, bool>(this, "UHUDActiveMissionWidget.SetMissionUIVisible", bIsVisible); }
	void SetRacePanelVisibility(ESlateVisibility::Type NewVisibility) { NativeCall<void, ESlateVisibility::Type>(this, "UHUDActiveMissionWidget.SetRacePanelVisibility", NewVisibility); }
	void SetRacePositionText(FText PositionText) { NativeCall<void, FText>(this, "UHUDActiveMissionWidget.SetRacePositionText", PositionText); }
	void ShowMissionAlert(TEnumAsByte<enum EMissionAlertType::Type> AlertType, const FString * AlertTitle, const TArray<FMissionAlertEntry> * NewEntries, bool bInstant, bool bFlyoutFromTop) { NativeCall<void, TEnumAsByte<enum EMissionAlertType::Type>, const FString *, const TArray<FMissionAlertEntry> *, bool, bool>(this, "UHUDActiveMissionWidget.ShowMissionAlert", AlertType, AlertTitle, NewEntries, bInstant, bFlyoutFromTop); }
	void SyncEffectsList() { NativeCall<void>(this, "UHUDActiveMissionWidget.SyncEffectsList"); }
	void SyncMissionAlertEntries(const TArray<FMissionAlertEntry> * NewEntries, bool bSyncTop) { NativeCall<void, const TArray<FMissionAlertEntry> *, bool>(this, "UHUDActiveMissionWidget.SyncMissionAlertEntries", NewEntries, bSyncTop); }
	void SyncPhaseRequirementWidget(UWidget * WidgetRoot, int ReqIndex, const FMissionPhaseRequirement * PhaseReq, bool bForActiveMission, UClass * MissionStatType) { NativeCall<void, UWidget *, int, const FMissionPhaseRequirement *, bool, UClass *>(this, "UHUDActiveMissionWidget.SyncPhaseRequirementWidget", WidgetRoot, ReqIndex, PhaseReq, bForActiveMission, MissionStatType); }
	void SyncPhaseRequirementWidgetArray(UPanelWidget * Container, const TArray<FMissionPhaseRequirement> * Reqs, TArray<UUserWidget *> * ReqWidgets, bool bForActiveMission, UClass * MissionStatType) { NativeCall<void, UPanelWidget *, const TArray<FMissionPhaseRequirement> *, TArray<UUserWidget *> *, bool, UClass *>(this, "UHUDActiveMissionWidget.SyncPhaseRequirementWidgetArray", Container, Reqs, ReqWidgets, bForActiveMission, MissionStatType); }
	void Tick_Implementation(FGeometry MyGeometry, float InDeltaTime) { NativeCall<void, FGeometry, float>(this, "UHUDActiveMissionWidget.Tick_Implementation", MyGeometry, InDeltaTime); }
};

