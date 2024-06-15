#pragma once

#include "BaseDeclarations.h"
struct ITTSAudioBuffer
{
	char __padding[0x8L];
};

struct TTSAudioBufferImpl : ITTSAudioBuffer
{
	char __padding[0x10L];
	unsigned int& _managerIdField() { return *GetNativePointerField<unsigned int*>(this, "TTSAudioBufferImpl._managerId"); }
	vx_tts_utterance * _utteranceStructField() { return GetNativePointerField<vx_tts_utterance *>(this, "TTSAudioBufferImpl._utteranceStruct"); }

	// Functions

	bool IsEmpty() { return NativeCall<bool>(this, "TTSAudioBufferImpl.IsEmpty"); }
	const int * NumChannels() { return NativeCall<const int *>(this, "TTSAudioBufferImpl.NumChannels"); }
	const int * NumFrames() { return NativeCall<const int *>(this, "TTSAudioBufferImpl.NumFrames"); }
	const int * SampleRate() { return NativeCall<const int *>(this, "TTSAudioBufferImpl.SampleRate"); }
	const __int16 * SpeechBuffer() { return NativeCall<const __int16 *>(this, "TTSAudioBufferImpl.SpeechBuffer"); }
};

