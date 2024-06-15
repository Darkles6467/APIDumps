#pragma once

#include "BaseDeclarations.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMissionTimerWidget : UUserWidget
{
	char __padding[0x10L];
	UTextBlock * TimeTextField() { return GetNativePointerField<UTextBlock *>(this, "UMissionTimerWidget.TimeText"); }
	UProgressBar * TimeRemainingProgressBarField() { return GetNativePointerField<UProgressBar *>(this, "UMissionTimerWidget.TimeRemainingProgressBar"); }

	// Functions

	void Initialize() { NativeCall<void>(this, "UMissionTimerWidget.Initialize"); }
	void SetTimeProgress(const float * InPercent) { NativeCall<void, const float *>(this, "UMissionTimerWidget.SetTimeProgress", InPercent); }
	void SetTimeText(const FString * InTime) { NativeCall<void, const FString *>(this, "UMissionTimerWidget.SetTimeText", InTime); }
	void SetTimer(const float * MissionStartTime, const float * MissionDuration, const FString * BPTimerText, EMissionTimerMode::Type TimerType) { NativeCall<void, const float *, const float *, const FString *, EMissionTimerMode::Type>(this, "UMissionTimerWidget.SetTimer", MissionStartTime, MissionDuration, BPTimerText, TimerType); }
};

