#pragma once

#include "BaseDeclarations.h"
struct FStreamingWaveData
{
	char __padding[0x58L];
	FThreadSafeCounter& PendingChunkChangeRequestStatusField() { return *GetNativePointerField<FThreadSafeCounter*>(this, "FStreamingWaveData.PendingChunkChangeRequestStatus"); }
	TArray<FLoadedAudioChunk>& LoadedChunksField() { return *GetNativePointerField<TArray<FLoadedAudioChunk>*>(this, "FStreamingWaveData.LoadedChunks"); }
	TArray<unsigned __int64>& IORequestIndicesField() { return *GetNativePointerField<TArray<unsigned __int64>*>(this, "FStreamingWaveData.IORequestIndices"); }
	TArray<unsigned int>& LoadedChunkIndicesField() { return *GetNativePointerField<TArray<unsigned int>*>(this, "FStreamingWaveData.LoadedChunkIndices"); }
	FWaveRequest& CurrentRequestField() { return *GetNativePointerField<FWaveRequest*>(this, "FStreamingWaveData.CurrentRequest"); }

	// Functions

	FLoadedAudioChunk * AddNewLoadedChunk(int ChunkSize) { return NativeCall<FLoadedAudioChunk *, int>(this, "FStreamingWaveData.AddNewLoadedChunk", ChunkSize); }
	void BeginPendingRequests(const TArray<unsigned int> * IndicesToLoad, const TArray<unsigned int> * IndicesToFree) { NativeCall<void, const TArray<unsigned int> *, const TArray<unsigned int> *>(this, "FStreamingWaveData.BeginPendingRequests", IndicesToLoad, IndicesToFree); }
	bool HasPendingRequests(TArray<unsigned int> * IndicesToLoad, TArray<unsigned int> * IndicesToFree) { return NativeCall<bool, TArray<unsigned int> *, TArray<unsigned int> *>(this, "FStreamingWaveData.HasPendingRequests", IndicesToLoad, IndicesToFree); }
	void Initialize(USoundWave * InSoundWave) { NativeCall<void, USoundWave *>(this, "FStreamingWaveData.Initialize", InSoundWave); }
	bool UpdateStreamingStatus() { return NativeCall<bool>(this, "FStreamingWaveData.UpdateStreamingStatus"); }
};

