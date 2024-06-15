#pragma once

#include "BaseDeclarations.h"
struct FSoundSource
{
	char __padding[0x38L];
	FWaveInstance * WaveInstanceField() { return GetNativePointerField<FWaveInstance *>(this, "FSoundSource.WaveInstance"); }
	float& StereoBleedField() { return *GetNativePointerField<float*>(this, "FSoundSource.StereoBleed"); }
	float& LFEBleedField() { return *GetNativePointerField<float*>(this, "FSoundSource.LFEBleed"); }
	float& HighFrequencyGainField() { return *GetNativePointerField<float*>(this, "FSoundSource.HighFrequencyGain"); }
	int& LastUpdateField() { return *GetNativePointerField<int*>(this, "FSoundSource.LastUpdate"); }
	int& LastHeardUpdateField() { return *GetNativePointerField<int*>(this, "FSoundSource.LastHeardUpdate"); }

	// Functions

	FString * Describe(FString * result, bool bUseLongName) { return NativeCall<FString *, FString *, bool>(this, "FSoundSource.Describe", result, bUseLongName); }
	void SetHighFrequencyGain() { NativeCall<void>(this, "FSoundSource.SetHighFrequencyGain"); }
	float SetLFEBleed() { return NativeCall<float>(this, "FSoundSource.SetLFEBleed"); }
	bool SetReverbApplied(bool bHardwareAvailable) { return NativeCall<bool, bool>(this, "FSoundSource.SetReverbApplied", bHardwareAvailable); }
	float SetStereoBleed() { return NativeCall<float>(this, "FSoundSource.SetStereoBleed"); }
	void Stop() { NativeCall<void>(this, "FSoundSource.Stop"); }
};

struct FXAudio2SoundSource : FSoundSource
{
	enum EDataReadMode
	{
		Synchronous = 0x0,
		Asynchronous = 0x1,
		AsynchronousSkipFirstFrame = 0x2,
	};

	char __padding[0xf0L];
	FXAudio2Device * AudioDeviceField() { return GetNativePointerField<FXAudio2Device *>(this, "FXAudio2SoundSource.AudioDevice"); }
	FXAudio2EffectsManager * EffectsField() { return GetNativePointerField<FXAudio2EffectsManager *>(this, "FXAudio2SoundSource.Effects"); }
	FXAudio2SoundBuffer * XAudio2BufferField() { return GetNativePointerField<FXAudio2SoundBuffer *>(this, "FXAudio2SoundSource.XAudio2Buffer"); }
	IXAudio2SourceVoice * SourceField() { return GetNativePointerField<IXAudio2SourceVoice *>(this, "FXAudio2SoundSource.Source"); }
	FAsyncTask<FAsyncRealtimeAudioTaskWorker<FXAudio2SoundBuffer> > * RealtimeAsyncTaskField() { return GetNativePointerField<FAsyncTask<FAsyncRealtimeAudioTaskWorker<FXAudio2SoundBuffer> > *>(this, "FXAudio2SoundSource.RealtimeAsyncTask"); }
	FXAudio2SoundSourceCallback& SourceCallbackField() { return *GetNativePointerField<FXAudio2SoundSourceCallback*>(this, "FXAudio2SoundSource.SourceCallback"); }
	FieldArray<XAUDIO2_SEND_DESCRIPTOR[3], 23> DestinationsField() { return {this, "FXAudio2SoundSource.Destinations"}; }
	int& CurrentBufferField() { return *GetNativePointerField<int*>(this, "FXAudio2SoundSource.CurrentBuffer"); }
	FieldArray<XAUDIO2_BUFFER[3], 23> XAudio2BuffersField() { return {this, "FXAudio2SoundSource.XAudio2Buffers"}; }
	FieldArray<XAUDIO2_BUFFER_WMA[1], 21> XAudio2BufferXWMAField() { return {this, "FXAudio2SoundSource.XAudio2BufferXWMA"}; }

	// Functions

	bool CreateSource() { return NativeCall<bool>(this, "FXAudio2SoundSource.CreateSource"); }
	FString * Describe(FString * result, bool bUseLongName) { return NativeCall<FString *, FString *, bool>(this, "FXAudio2SoundSource.Describe", result, bUseLongName); }
	FString * Describe_Internal(FString * result, bool bUseLongName, bool bIncludeChannelVolumes) { return NativeCall<FString *, FString *, bool, bool>(this, "FXAudio2SoundSource.Describe_Internal", result, bUseLongName, bIncludeChannelVolumes); }
	void FreeResources() { NativeCall<void>(this, "FXAudio2SoundSource.FreeResources"); }
	void GetChannelVolumes(float * ChannelVolumes, float AttenuatedVolume) { NativeCall<void, float *, float>(this, "FXAudio2SoundSource.GetChannelVolumes", ChannelVolumes, AttenuatedVolume); }
	void HandleRealTimeSource(bool bBlockForData) { NativeCall<void, bool>(this, "FXAudio2SoundSource.HandleRealTimeSource", bBlockForData); }
	void HandleRealTimeSourceData(bool bLooped) { NativeCall<void, bool>(this, "FXAudio2SoundSource.HandleRealTimeSourceData", bLooped); }
	bool Init(FWaveInstance * InWaveInstance) { return NativeCall<bool, FWaveInstance *>(this, "FXAudio2SoundSource.Init", InWaveInstance); }
	bool IsFinished() { return NativeCall<bool>(this, "FXAudio2SoundSource.IsFinished"); }
	void Pause() { NativeCall<void>(this, "FXAudio2SoundSource.Pause"); }
	void Play() { NativeCall<void>(this, "FXAudio2SoundSource.Play"); }
	bool ReadMorePCMData(const int BufferIndex, FXAudio2SoundSource::EDataReadMode DataReadMode) { return NativeCall<bool, const int, FXAudio2SoundSource::EDataReadMode>(this, "FXAudio2SoundSource.ReadMorePCMData", BufferIndex, DataReadMode); }
	void RouteDryToSpeakers(float * ChannelVolumes) { NativeCall<void, float *>(this, "FXAudio2SoundSource.RouteDryToSpeakers", ChannelVolumes); }
	void RouteToRadio(float * ChannelVolumes) { NativeCall<void, float *>(this, "FXAudio2SoundSource.RouteToRadio", ChannelVolumes); }
	void RouteToReverb(float * ChannelVolumes) { NativeCall<void, float *>(this, "FXAudio2SoundSource.RouteToReverb", ChannelVolumes); }
	void Stop() { NativeCall<void>(this, "FXAudio2SoundSource.Stop"); }
	void SubmitPCMBuffers() { NativeCall<void>(this, "FXAudio2SoundSource.SubmitPCMBuffers"); }
	void SubmitPCMRTBuffers() { NativeCall<void>(this, "FXAudio2SoundSource.SubmitPCMRTBuffers"); }
	void SubmitXMA2Buffers() { NativeCall<void>(this, "FXAudio2SoundSource.SubmitXMA2Buffers"); }
	void SubmitXWMABuffers() { NativeCall<void>(this, "FXAudio2SoundSource.SubmitXWMABuffers"); }
	void Update() { NativeCall<void>(this, "FXAudio2SoundSource.Update"); }
};

