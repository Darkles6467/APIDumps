#pragma once

#include "BaseDeclarations.h"
#include "IModuleInterface.h"

struct IAudioDeviceModule : IModuleInterface
{

	// Functions

	IThreadedMusicPlayer * GetThreadedMusicPlayer() { return NativeCall<IThreadedMusicPlayer *>(this, "IAudioDeviceModule.GetThreadedMusicPlayer"); }
};

struct FXAudio2DeviceModule : IAudioDeviceModule
{

	// Functions

};

