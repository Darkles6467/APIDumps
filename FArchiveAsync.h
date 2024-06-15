#pragma once

#include "BaseDeclarations.h"
#include "FArchive.h"
#include "FCompressedChunk.h"

struct FArchiveAsync : FArchive
{
	char __padding[0x80L];
	FString& FileNameField() { return *GetNativePointerField<FString*>(this, "FArchiveAsync.FileName"); }
	__int64& FileSizeField() { return *GetNativePointerField<__int64*>(this, "FArchiveAsync.FileSize"); }
	__int64& UncompressedFileSizeField() { return *GetNativePointerField<__int64*>(this, "FArchiveAsync.UncompressedFileSize"); }
	__int64& BulkDataAreaSizeField() { return *GetNativePointerField<__int64*>(this, "FArchiveAsync.BulkDataAreaSize"); }
	__int64& CurrentPosField() { return *GetNativePointerField<__int64*>(this, "FArchiveAsync.CurrentPos"); }
	FieldArray<__int64[2], 642> PrecacheStartPosField() { return {this, "FArchiveAsync.PrecacheStartPos"}; }
	FieldArray<__int64[2], 642> PrecacheEndPosField() { return {this, "FArchiveAsync.PrecacheEndPos"}; }
	FieldArray<char *, 2> PrecacheBufferField() { return {this, "FArchiveAsync.PrecacheBuffer"}; }
	FieldArray<FThreadSafeCounter, 2> PrecacheReadStatusField() { return {this, "FArchiveAsync.PrecacheReadStatus"}; }
	TArray<FCompressedChunk> * CompressedChunksField() { return GetNativePointerField<TArray<FCompressedChunk> *>(this, "FArchiveAsync.CompressedChunks"); }
	__int64& CurrentChunkIndexField() { return *GetNativePointerField<__int64*>(this, "FArchiveAsync.CurrentChunkIndex"); }
	ECompressionFlags& CompressionFlagsField() { return *GetNativePointerField<ECompressionFlags*>(this, "FArchiveAsync.CompressionFlags"); }

	// Functions

	void BufferSwitcheroo() { NativeCall<void>(this, "FArchiveAsync.BufferSwitcheroo"); }
	bool Close() { return NativeCall<bool>(this, "FArchiveAsync.Close"); }
	int FindCompressedChunkIndex(__int64 RequestOffset) { return NativeCall<int, __int64>(this, "FArchiveAsync.FindCompressedChunkIndex", RequestOffset); }
	void FlushCache() { NativeCall<void>(this, "FArchiveAsync.FlushCache"); }
	void PreCacheNext(__int64 RequestOffset, __int64 RequestSize) { NativeCall<void, __int64, __int64>(this, "FArchiveAsync.PreCacheNext", RequestOffset, RequestSize); }
	bool Precache(__int64 RequestOffset, __int64 RequestSize) { return NativeCall<bool, __int64, __int64>(this, "FArchiveAsync.Precache", RequestOffset, RequestSize); }
	void PrecacheCompressedChunk(__int64 ChunkIndex, __int64 BufferIndex) { NativeCall<void, __int64, __int64>(this, "FArchiveAsync.PrecacheCompressedChunk", ChunkIndex, BufferIndex); }
	void Serialize(void * Data, __int64 Count) { NativeCall<void, void *, __int64>(this, "FArchiveAsync.Serialize", Data, Count); }
	bool SetCompressionMap(TArray<FCompressedChunk> * InCompressedChunks, ECompressionFlags InCompressionFlags) { return NativeCall<bool, TArray<FCompressedChunk> *, ECompressionFlags>(this, "FArchiveAsync.SetCompressionMap", InCompressedChunks, InCompressionFlags); }
	__int64 TotalSize() { return NativeCall<__int64>(this, "FArchiveAsync.TotalSize"); }
};

