#pragma once

#include "BaseDeclarations.h"
#include "FArchive.h"

struct FSignedArchiveReader : FArchive
{
	char __padding[0x50L];
	int& ChunkCountField() { return *GetNativePointerField<int*>(this, "FSignedArchiveReader.ChunkCount"); }
	__int64& SizeOnDiskField() { return *GetNativePointerField<__int64*>(this, "FSignedArchiveReader.SizeOnDisk"); }
	__int64& PakSizeField() { return *GetNativePointerField<__int64*>(this, "FSignedArchiveReader.PakSize"); }
	__int64& PakOffsetField() { return *GetNativePointerField<__int64*>(this, "FSignedArchiveReader.PakOffset"); }
	FChunkBuffer& LastCachedChunkField() { return *GetNativePointerField<FChunkBuffer*>(this, "FSignedArchiveReader.LastCachedChunk"); }

	// Functions

	__int64 Tell() { return NativeCall<__int64>(this, "FSignedArchiveReader.Tell"); }
	void PrecacheChunks(TArray<FSignedArchiveReader::FReadInfo> * Chunks, __int64 Length) { NativeCall<void, TArray<FSignedArchiveReader::FReadInfo> *, __int64>(this, "FSignedArchiveReader.PrecacheChunks", Chunks, Length); }
	void Seek(__int64 InPos) { NativeCall<void, __int64>(this, "FSignedArchiveReader.Seek", InPos); }
	void Serialize(void * Data, __int64 Length) { NativeCall<void, void *, __int64>(this, "FSignedArchiveReader.Serialize", Data, Length); }
	void * TotalSize() { return NativeCall<void *>(this, "FSignedArchiveReader.TotalSize"); }
};

