#pragma once

#include "BaseDeclarations.h"
#include "FSubtitleCue.h"

struct FSubtitleManager
{
	char __padding[0x58L];
	float& CurrentSubtitleHeightField() { return *GetNativePointerField<float*>(this, "FSubtitleManager.CurrentSubtitleHeight"); }

	// Functions

	void DisplaySubtitle(FCanvas * Canvas, FActiveSubtitle * Subtitle, FIntRect * Parms, const FLinearColor * Color) { NativeCall<void, FCanvas *, FActiveSubtitle *, FIntRect *, const FLinearColor *>(this, "FSubtitleManager.DisplaySubtitle", Canvas, Subtitle, Parms, Color); }
	void DisplaySubtitles(FCanvas * InCanvas, FIntRect * InSubtitleRegion, float InAudioTimeSeconds) { NativeCall<void, FCanvas *, FIntRect *, float>(this, "FSubtitleManager.DisplaySubtitles", InCanvas, InSubtitleRegion, InAudioTimeSeconds); }
	__int64 FindHighestPrioritySubtitle(float CurrentTime) { return NativeCall<__int64, float>(this, "FSubtitleManager.FindHighestPrioritySubtitle", CurrentTime); }
	static FSubtitleManager * GetSubtitleManager() { return NativeCall<FSubtitleManager *>(nullptr, "FSubtitleManager.GetSubtitleManager"); }
	void KillSubtitles(__int64 SubtitleID) { NativeCall<void, __int64>(this, "FSubtitleManager.KillSubtitles", SubtitleID); }
	void QueueSubtitles(__int64 SubtitleID, float Priority, bool bManualWordWrap, bool bSingleLine, float SoundDuration, TArray<FSubtitleCue> * Subtitles, float InStartTime) { NativeCall<void, __int64, float, bool, bool, float, TArray<FSubtitleCue> *, float>(this, "FSubtitleManager.QueueSubtitles", SubtitleID, Priority, bManualWordWrap, bSingleLine, SoundDuration, Subtitles, InStartTime); }
	void SplitLinesToSafeZone(FIntRect * SubtitleRegion) { NativeCall<void, FIntRect *>(this, "FSubtitleManager.SplitLinesToSafeZone", SubtitleRegion); }
	void TrimRegionToSafeZone(FCanvas * Canvas, FIntRect * SubtitleRegion) { NativeCall<void, FCanvas *, FIntRect *>(this, "FSubtitleManager.TrimRegionToSafeZone", Canvas, SubtitleRegion); }
};

