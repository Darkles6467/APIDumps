#pragma once

#include "BaseDeclarations.h"
struct IXAudio2VoiceCallback
{
	char __padding[0x8L];
};

struct FXAudio2SoundSourceCallback : IXAudio2VoiceCallback
{

	// Functions

	void OnLoopEnd(void * BufferContext) { NativeCall<void, void *>(this, "FXAudio2SoundSourceCallback.OnLoopEnd", BufferContext); }
};

