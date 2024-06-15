#pragma once

#include "BaseDeclarations.h"
#include "UPrimalUI.h"
#include "UUserWidget.h"
#include "UWidget.h"
#include "UVisual.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UUI_Subtitles : UPrimalUI
{
	char __padding[0xa0L];
	FName& SubtitlesTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_Subtitles.SubtitlesTextBoxName"); }
	FName& DialogueTextBoxNameField() { return *GetNativePointerField<FName*>(this, "UUI_Subtitles.DialogueTextBoxName"); }
	FName& DialogueIconImageNameField() { return *GetNativePointerField<FName*>(this, "UUI_Subtitles.DialogueIconImageName"); }
	TArray<FSubtitleCue>& SoundWaveSubtitlesField() { return *GetNativePointerField<TArray<FSubtitleCue>*>(this, "UUI_Subtitles.SoundWaveSubtitles"); }
	UTextBlock * SubtitleTextBlockField() { return GetNativePointerField<UTextBlock *>(this, "UUI_Subtitles.SubtitleTextBlock"); }
	UImage * DialogueIconImageField() { return GetNativePointerField<UImage *>(this, "UUI_Subtitles.DialogueIconImage"); }
	UTextBlock * DialogueTextBlockField() { return GetNativePointerField<UTextBlock *>(this, "UUI_Subtitles.DialogueTextBlock"); }
	USoundCue * CurrentlyPlayingSoundField() { return GetNativePointerField<USoundCue *>(this, "UUI_Subtitles.CurrentlyPlayingSound"); }
	long double& CurrentlyPlayingSoundStartTimeField() { return *GetNativePointerField<long double*>(this, "UUI_Subtitles.CurrentlyPlayingSoundStartTime"); }
	int& CurrentlyPlayingLastSubtitleIndexField() { return *GetNativePointerField<int*>(this, "UUI_Subtitles.CurrentlyPlayingLastSubtitleIndex"); }
	float& CurrentlyPlayingSoundEndDelayTimeField() { return *GetNativePointerField<float*>(this, "UUI_Subtitles.CurrentlyPlayingSoundEndDelayTime"); }
	FName& CurrentlyLoadedIconNameField() { return *GetNativePointerField<FName*>(this, "UUI_Subtitles.CurrentlyLoadedIconName"); }
	FSlateColor& CurrentColorToUseField() { return *GetNativePointerField<FSlateColor*>(this, "UUI_Subtitles.CurrentColorToUse"); }

	// Functions

	void AddToViewport() { NativeCall<void>(this, "UUI_Subtitles.AddToViewport"); }
	void ForceSetSubtitlesManualTime(float ManualGlobalStartTime) { NativeCall<void, float>(this, "UUI_Subtitles.ForceSetSubtitlesManualTime", ManualGlobalStartTime); }
	void HideSubtitles() { NativeCall<void>(this, "UUI_Subtitles.HideSubtitles"); }
	bool IsCurrentIconEqualToGivenIcon(UMaterialInterface * DialogueIcon) { return NativeCall<bool, UMaterialInterface *>(this, "UUI_Subtitles.IsCurrentIconEqualToGivenIcon", DialogueIcon); }
	bool IsIconVisible() { return NativeCall<bool>(this, "UUI_Subtitles.IsIconVisible"); }
	void SetIconMaterialParams(TArray<FNameScalarPair> scalarParams, TArray<FNameColorPair> colorParams, UTexture2D * CurrentAT) { NativeCall<void, TArray<FNameScalarPair>, TArray<FNameColorPair>, UTexture2D *>(this, "UUI_Subtitles.SetIconMaterialParams", scalarParams, colorParams, CurrentAT); }
	void SetSubtitleFromSoundCue(USoundCue * SoundCueWithSubtitles, float AutoHideAfterSeconds, UMaterialInterface * DialogueIcon) { NativeCall<void, USoundCue *, float, UMaterialInterface *>(this, "UUI_Subtitles.SetSubtitleFromSoundCue", SoundCueWithSubtitles, AutoHideAfterSeconds, DialogueIcon); }
	void SetSubtitleFromSoundWave(USoundWave * SoundWave, float AutoHideAfterSeconds, UMaterialInterface * DialogueIcon) { NativeCall<void, USoundWave *, float, UMaterialInterface *>(this, "UUI_Subtitles.SetSubtitleFromSoundWave", SoundWave, AutoHideAfterSeconds, DialogueIcon); }
	void SetSubtitleFromString(const FString * SubtitleTextLine) { NativeCall<void, const FString *>(this, "UUI_Subtitles.SetSubtitleFromString", SubtitleTextLine); }
	void SetSubtitleFromStringWithDurationAndIcon(const FString * SubtitleTextLine, float AutoHideAfterSeconds, UMaterialInterface * DialogueIcon) { NativeCall<void, const FString *, float, UMaterialInterface *>(this, "UUI_Subtitles.SetSubtitleFromStringWithDurationAndIcon", SubtitleTextLine, AutoHideAfterSeconds, DialogueIcon); }
	void SetSubtitleFromText(const FText * SubtitleTextLine) { NativeCall<void, const FText *>(this, "UUI_Subtitles.SetSubtitleFromText", SubtitleTextLine); }
	void Tick_Implementation(FGeometry MyGeometry, float InDeltaTime) { NativeCall<void, FGeometry, float>(this, "UUI_Subtitles.Tick_Implementation", MyGeometry, InDeltaTime); }
	void OnHideSubtitles() { NativeCall<void>(this, "UUI_Subtitles.OnHideSubtitles"); }
	void OnShowSubtitles() { NativeCall<void>(this, "UUI_Subtitles.OnShowSubtitles"); }
};

