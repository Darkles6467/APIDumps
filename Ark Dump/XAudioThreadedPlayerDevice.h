#pragma once

#include "BaseDeclarations.h"
struct IThreadedMusicPlayerDevice
{
	char __padding[0x8L];
};

struct XAudioThreadedPlayerDevice : IThreadedMusicPlayerDevice
{
	char __padding[0x10L];
	IXAudio2 * pXAudio2Field() { return GetNativePointerField<IXAudio2 *>(this, "XAudioThreadedPlayerDevice.pXAudio2"); }
	IXAudio2MasteringVoice * pMasteringVoiceField() { return GetNativePointerField<IXAudio2MasteringVoice *>(this, "XAudioThreadedPlayerDevice.pMasteringVoice"); }

	// Functions

	void * CreateTrack(FThreadedPlayerSoundQualityInfo * SoundQualityInfo) { return NativeCall<void *, FThreadedPlayerSoundQualityInfo *>(this, "XAudioThreadedPlayerDevice.CreateTrack", SoundQualityInfo); }
	void DestroyDevice() { NativeCall<void>(this, "XAudioThreadedPlayerDevice.DestroyDevice"); }
	void DestroyTrack(void * Track) { NativeCall<void, void *>(this, "XAudioThreadedPlayerDevice.DestroyTrack", Track); }
	float GetTrackVolume(void * Track) { return NativeCall<float, void *>(this, "XAudioThreadedPlayerDevice.GetTrackVolume", Track); }
	bool HasFinished(void * Track) { return NativeCall<bool, void *>(this, "XAudioThreadedPlayerDevice.HasFinished", Track); }
	bool InitDevice(bool bForceLoadLibraries) { return NativeCall<bool, bool>(this, "XAudioThreadedPlayerDevice.InitDevice", bForceLoadLibraries); }
	void SetMasterVolume(float Volume) { NativeCall<void, float>(this, "XAudioThreadedPlayerDevice.SetMasterVolume", Volume); }
	void SetTrackVolume(void * Track, float Volume) { NativeCall<void, void *, float>(this, "XAudioThreadedPlayerDevice.SetTrackVolume", Track, Volume); }
	bool SubmitBuffer(void * Track, char * Buffer, int BufferSize, bool bLooping) { return NativeCall<bool, void *, char *, int, bool>(this, "XAudioThreadedPlayerDevice.SubmitBuffer", Track, Buffer, BufferSize, bLooping); }
};

