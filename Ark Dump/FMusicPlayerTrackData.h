#pragma once

#include "BaseDeclarations.h"
struct FMusicPlayerTrackData
{
	char __padding[0x48L];
	FString& TrackNameField() { return *GetNativePointerField<FString*>(this, "FMusicPlayerTrackData.TrackName"); }
	FAsyncTask<FAsyncMusicPlayerDecompressorWorker> * DecompressorField() { return GetNativePointerField<FAsyncTask<FAsyncMusicPlayerDecompressorWorker> *>(this, "FMusicPlayerTrackData.Decompressor"); }
	void * pSourceVoiceField() { return GetNativePointerField<void *>(this, "FMusicPlayerTrackData.pSourceVoice"); }
	EMusicTrackState& CurrentStateField() { return *GetNativePointerField<EMusicTrackState*>(this, "FMusicPlayerTrackData.CurrentState"); }
	float& CurrentVolumeField() { return *GetNativePointerField<float*>(this, "FMusicPlayerTrackData.CurrentVolume"); }
	bool& bLoopingField() { return *GetNativePointerField<bool*>(this, "FMusicPlayerTrackData.bLooping"); }
	bool& bWantsToAbandonField() { return *GetNativePointerField<bool*>(this, "FMusicPlayerTrackData.bWantsToAbandon"); }
	bool& bDontFadeInIfNoOtherTracksField() { return *GetNativePointerField<bool*>(this, "FMusicPlayerTrackData.bDontFadeInIfNoOtherTracks"); }
	long double& CrossFadeDurationField() { return *GetNativePointerField<long double*>(this, "FMusicPlayerTrackData.CrossFadeDuration"); }
	long double& CrossFadeInSpeedField() { return *GetNativePointerField<long double*>(this, "FMusicPlayerTrackData.CrossFadeInSpeed"); }
	long double& CrossFadeOutSpeedField() { return *GetNativePointerField<long double*>(this, "FMusicPlayerTrackData.CrossFadeOutSpeed"); }
};

