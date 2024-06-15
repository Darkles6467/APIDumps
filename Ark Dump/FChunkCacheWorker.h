#pragma once

#include "BaseDeclarations.h"
#include "FRunnable.h"

struct FChunkCacheWorker : FRunnable
{
	char __padding[0x170L];
	FieldArray<FChunkBuffer, 8> CachedChunksField() { return {this, "FChunkCacheWorker.CachedChunks"}; }
	TArray<FChunkRequest *>& RequestQueueField() { return *GetNativePointerField<TArray<FChunkRequest *>*>(this, "FChunkCacheWorker.RequestQueue"); }
	FWindowsCriticalSection& QueueLockField() { return *GetNativePointerField<FWindowsCriticalSection*>(this, "FChunkCacheWorker.QueueLock"); }
	TArray<FChunkRequest *>& ActiveRequestsField() { return *GetNativePointerField<TArray<FChunkRequest *>*>(this, "FChunkCacheWorker.ActiveRequests"); }
	FThreadSafeCounter& StopTaskCounterField() { return *GetNativePointerField<FThreadSafeCounter*>(this, "FChunkCacheWorker.StopTaskCounter"); }
	TLockFreePointerListLIFO<FChunkRequest>& FreeChunkRequestsField() { return *GetNativePointerField<TLockFreePointerListLIFO<FChunkRequest>*>(this, "FChunkCacheWorker.FreeChunkRequests"); }
	TEncryptionKey<TBigInt<256> >& DecryptionKeyField() { return *GetNativePointerField<TEncryptionKey<TBigInt<256> >*>(this, "FChunkCacheWorker.DecryptionKey"); }

	// Functions

	void Decrypt(char * DecryptedData, const TBigInt<256> * Data, const __int64 DataLength) { NativeCall<void, char *, const TBigInt<256> *, const __int64>(this, "FChunkCacheWorker.Decrypt", DecryptedData, Data, DataLength); }
	FChunkBuffer * GetFreeBuffer() { return NativeCall<FChunkBuffer *>(this, "FChunkCacheWorker.GetFreeBuffer"); }
	FChunkRequest * RequestChunk(int ChunkIndex, __int64 StartOffset, __int64 ChunkSize) { return NativeCall<FChunkRequest *, int, __int64, __int64>(this, "FChunkCacheWorker.RequestChunk", ChunkIndex, StartOffset, ChunkSize); }
	unsigned int Run() { return NativeCall<unsigned int>(this, "FChunkCacheWorker.Run"); }
	void Stop() { NativeCall<void>(this, "FChunkCacheWorker.Stop"); }
};

