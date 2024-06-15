#pragma once

#include "BaseDeclarations.h"
#include "IStreamingManager.h"

struct IAudioStreamingManager : IStreamingManager
{
};

struct FAudioStreamingManager : IAudioStreamingManager
{
	char __padding[0xb0L];

	// Functions

	void AddStreamingSoundSource(FSoundSource * SoundSource) { NativeCall<void, FSoundSource *>(this, "FAudioStreamingManager.AddStreamingSoundSource", SoundSource); }
	void AddStreamingSoundWave(USoundWave * SoundWave) { NativeCall<void, USoundWave *>(this, "FAudioStreamingManager.AddStreamingSoundWave", SoundWave); }
	bool CanCreateSoundSource(const FWaveInstance * WaveInstance) { return NativeCall<bool, const FWaveInstance *>(this, "FAudioStreamingManager.CanCreateSoundSource", WaveInstance); }
	const char * GetLoadedChunk(const USoundWave * SoundWave, unsigned int ChunkIndex) { return NativeCall<const char *, const USoundWave *, unsigned int>(this, "FAudioStreamingManager.GetLoadedChunk", SoundWave, ChunkIndex); }
	FWaveRequest * GetWaveRequest(USoundWave * SoundWave) { return NativeCall<FWaveRequest *, USoundWave *>(this, "FAudioStreamingManager.GetWaveRequest", SoundWave); }
	bool IsManagedStreamingSoundSource(const FSoundSource * SoundSource) { return NativeCall<bool, const FSoundSource *>(this, "FAudioStreamingManager.IsManagedStreamingSoundSource", SoundSource); }
	bool IsManagedStreamingSoundWave(const USoundWave * SoundWave) { return NativeCall<bool, const USoundWave *>(this, "FAudioStreamingManager.IsManagedStreamingSoundWave", SoundWave); }
	bool IsStreamingInProgress(const USoundWave * SoundWave) { return NativeCall<bool, const USoundWave *>(this, "FAudioStreamingManager.IsStreamingInProgress", SoundWave); }
	void RemoveStreamingSoundSource(FSoundSource * SoundSource) { NativeCall<void, FSoundSource *>(this, "FAudioStreamingManager.RemoveStreamingSoundSource", SoundSource); }
	void RemoveStreamingSoundWave(USoundWave * SoundWave) { NativeCall<void, USoundWave *>(this, "FAudioStreamingManager.RemoveStreamingSoundWave", SoundWave); }
	void UpdateResourceStreaming(float DeltaTime, bool bProcessEverything) { NativeCall<void, float, bool>(this, "FAudioStreamingManager.UpdateResourceStreaming", DeltaTime, bProcessEverything); }
};

