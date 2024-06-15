#pragma once

#include "BaseDeclarations.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMissionObjectiveEntryWidget : UUserWidget
{
	char __padding[0x28L];
	FString& ItemLabelNameField() { return *GetNativePointerField<FString*>(this, "UMissionObjectiveEntryWidget.ItemLabelName"); }
	UImage * MissionCompleteIconField() { return GetNativePointerField<UImage *>(this, "UMissionObjectiveEntryWidget.MissionCompleteIcon"); }
	UTextBlock * MissionObjectiveTextField() { return GetNativePointerField<UTextBlock *>(this, "UMissionObjectiveEntryWidget.MissionObjectiveText"); }
	UProgressBar * ObjectiveProgressBarField() { return GetNativePointerField<UProgressBar *>(this, "UMissionObjectiveEntryWidget.ObjectiveProgressBar"); }

	// Functions

	void Initialize() { NativeCall<void>(this, "UMissionObjectiveEntryWidget.Initialize"); }
	void SetIsComplete(const bool * bIsComplete) { NativeCall<void, const bool *>(this, "UMissionObjectiveEntryWidget.SetIsComplete", bIsComplete); }
	void SetMissionObjective(const FString * Objective) { NativeCall<void, const FString *>(this, "UMissionObjectiveEntryWidget.SetMissionObjective", Objective); }
	void SetShowProgressBar(const bool * bInShowProgressBar) { NativeCall<void, const bool *>(this, "UMissionObjectiveEntryWidget.SetShowProgressBar", bInShowProgressBar); }
};

