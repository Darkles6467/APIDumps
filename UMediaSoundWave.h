#pragma once

#include "BaseDeclarations.h"
#include "USoundWave.h"
#include "USoundBase.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct UMediaSoundWave : USoundWave
{
	char __padding[0x48L];
	int& AudioTrackIndexField() { return *GetNativePointerField<int*>(this, "UMediaSoundWave.AudioTrackIndex"); }
	UMediaPlayer * MediaPlayerField() { return GetNativePointerField<UMediaPlayer *>(this, "UMediaSoundWave.MediaPlayer"); }
	TSharedRef<FMediaSampleQueue,1>& AudioQueueField() { return *GetNativePointerField<TSharedRef<FMediaSampleQueue,1>*>(this, "UMediaSoundWave.AudioQueue"); }
	UMediaPlayer * CurrentMediaPlayerField() { return GetNativePointerField<UMediaPlayer *>(this, "UMediaSoundWave.CurrentMediaPlayer"); }
	TArray<unsigned char>& QueuedAudioField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "UMediaSoundWave.QueuedAudio"); }

	// Functions

	int GeneratePCMData(char * PCMData, const int SamplesNeeded) { return NativeCall<int, char *, const int>(this, "UMediaSoundWave.GeneratePCMData", PCMData, SamplesNeeded); }
	void HandleMediaPlayerMediaChanged() { NativeCall<void>(this, "UMediaSoundWave.HandleMediaPlayerMediaChanged"); }
	void InitializeTrack() { NativeCall<void>(this, "UMediaSoundWave.InitializeTrack"); }
	void SetMediaPlayer(UMediaPlayer * InMediaPlayer) { NativeCall<void, UMediaPlayer *>(this, "UMediaSoundWave.SetMediaPlayer", InMediaPlayer); }
};

