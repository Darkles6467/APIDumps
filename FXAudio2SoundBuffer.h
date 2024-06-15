#pragma once

#include "BaseDeclarations.h"
struct FSoundBuffer
{
	char __padding[0x28L];
	int& ResourceIDField() { return *GetNativePointerField<int*>(this, "FSoundBuffer.ResourceID"); }
	int& NumChannelsField() { return *GetNativePointerField<int*>(this, "FSoundBuffer.NumChannels"); }
	FString& ResourceNameField() { return *GetNativePointerField<FString*>(this, "FSoundBuffer.ResourceName"); }
	bool& bAllocationInPermanentPoolField() { return *GetNativePointerField<bool*>(this, "FSoundBuffer.bAllocationInPermanentPool"); }

	// Functions

	FString * Describe(FString * result, bool bUseLongName) { return NativeCall<FString *, FString *, bool>(this, "FSoundBuffer.Describe", result, bUseLongName); }
	FString * GetChannelsDesc(FString * result) { return NativeCall<FString *, FString *>(this, "FSoundBuffer.GetChannelsDesc", result); }
	int GetSize() { return NativeCall<int>(this, "FSoundBuffer.GetSize"); }
	FName * GetSoundClassName(FName * result) { return NativeCall<FName *, FName *>(this, "FSoundBuffer.GetSoundClassName", result); }
};

struct FXAudio2SoundBuffer : FSoundBuffer
{
	char __padding[0x78L];
	int& SoundFormatField() { return *GetNativePointerField<int*>(this, "FXAudio2SoundBuffer.SoundFormat"); }
	bool& bDynamicResourceField() { return *GetNativePointerField<bool*>(this, "FXAudio2SoundBuffer.bDynamicResource"); }

	// Functions

	static FXAudio2SoundBuffer * CreateNativeBuffer(FXAudio2Device * XAudio2Device, USoundWave * Wave) { return NativeCall<FXAudio2SoundBuffer *, FXAudio2Device *, USoundWave *>(nullptr, "FXAudio2SoundBuffer.CreateNativeBuffer", XAudio2Device, Wave); }
	static FXAudio2SoundBuffer * CreatePreviewBuffer(FXAudio2Device * XAudio2Device, USoundWave * Wave, FXAudio2SoundBuffer * Buffer) { return NativeCall<FXAudio2SoundBuffer *, FXAudio2Device *, USoundWave *, FXAudio2SoundBuffer *>(nullptr, "FXAudio2SoundBuffer.CreatePreviewBuffer", XAudio2Device, Wave, Buffer); }
	static FXAudio2SoundBuffer * CreateProceduralBuffer(FXAudio2Device * XAudio2Device, USoundWave * Wave) { return NativeCall<FXAudio2SoundBuffer *, FXAudio2Device *, USoundWave *>(nullptr, "FXAudio2SoundBuffer.CreateProceduralBuffer", XAudio2Device, Wave); }
	static FXAudio2SoundBuffer * CreateQueuedBuffer(FXAudio2Device * XAudio2Device, USoundWave * Wave) { return NativeCall<FXAudio2SoundBuffer *, FXAudio2Device *, USoundWave *>(nullptr, "FXAudio2SoundBuffer.CreateQueuedBuffer", XAudio2Device, Wave); }
	static FXAudio2SoundBuffer * CreateStreamingBuffer(FXAudio2Device * XAudio2Device, USoundWave * Wave) { return NativeCall<FXAudio2SoundBuffer *, FXAudio2Device *, USoundWave *>(nullptr, "FXAudio2SoundBuffer.CreateStreamingBuffer", XAudio2Device, Wave); }
	int GetCurrentChunkIndex() { return NativeCall<int>(this, "FXAudio2SoundBuffer.GetCurrentChunkIndex"); }
	int GetCurrentChunkOffset() { return NativeCall<int>(this, "FXAudio2SoundBuffer.GetCurrentChunkOffset"); }
	int GetSize() { return NativeCall<int>(this, "FXAudio2SoundBuffer.GetSize"); }
	static FXAudio2SoundBuffer * Init(FAudioDevice * AudioDevice, USoundWave * Wave, bool bForceRealTime) { return NativeCall<FXAudio2SoundBuffer *, FAudioDevice *, USoundWave *, bool>(nullptr, "FXAudio2SoundBuffer.Init", AudioDevice, Wave, bForceRealTime); }
};

