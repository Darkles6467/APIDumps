#pragma once

#include "BaseDeclarations.h"
struct FStreamedAudioChunk
{
	char __padding[0x50L];
	int& DataSizeField() { return *GetNativePointerField<int*>(this, "FStreamedAudioChunk.DataSize"); }
	FByteBulkData& BulkDataField() { return *GetNativePointerField<FByteBulkData*>(this, "FStreamedAudioChunk.BulkData"); }

	// Functions

	void Serialize(FArchive * Ar, UObject * Owner, int ChunkIndex) { NativeCall<void, FArchive *, UObject *, int>(this, "FStreamedAudioChunk.Serialize", Ar, Owner, ChunkIndex); }
};

