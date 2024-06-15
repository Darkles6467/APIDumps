#pragma once

#include "BaseDeclarations.h"
#include "USoundWave.h"
#include "USoundBase.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct USoundWaveStreaming : USoundWave
{
	char __padding[0x18L];
	TArray<unsigned char>& QueuedAudioField() { return *GetNativePointerField<TArray<unsigned char>*>(this, "USoundWaveStreaming.QueuedAudio"); }

	// Functions

	int GeneratePCMData(char * PCMData, const int SamplesNeeded) { return NativeCall<int, char *, const int>(this, "USoundWaveStreaming.GeneratePCMData", PCMData, SamplesNeeded); }
	int GetAvailableAudioByteCount() { return NativeCall<int>(this, "USoundWaveStreaming.GetAvailableAudioByteCount"); }
	void QueueAudio(const char * AudioData, const int BufferSize) { NativeCall<void, const char *, const int>(this, "USoundWaveStreaming.QueueAudio", AudioData, BufferSize); }
};

