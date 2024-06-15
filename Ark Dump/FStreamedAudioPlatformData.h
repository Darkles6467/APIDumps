#pragma once

#include "BaseDeclarations.h"
struct FStreamedAudioPlatformData
{
	char __padding[0x20L];
	int& NumChunksField() { return *GetNativePointerField<int*>(this, "FStreamedAudioPlatformData.NumChunks"); }
	FName& AudioFormatField() { return *GetNativePointerField<FName*>(this, "FStreamedAudioPlatformData.AudioFormat"); }
	TIndirectArray<FStreamedAudioChunk>& ChunksField() { return *GetNativePointerField<TIndirectArray<FStreamedAudioChunk>*>(this, "FStreamedAudioPlatformData.Chunks"); }

	// Functions

	void Serialize(FArchive * Ar, USoundWave * Owner) { NativeCall<void, FArchive *, USoundWave *>(this, "FStreamedAudioPlatformData.Serialize", Ar, Owner); }
	bool TryLoadChunk(int ChunkIndex, char ** OutChunkData) { return NativeCall<bool, int, char **>(this, "FStreamedAudioPlatformData.TryLoadChunk", ChunkIndex, OutChunkData); }
};

