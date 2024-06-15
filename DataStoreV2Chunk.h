#pragma once

#include "BaseDeclarations.h"
struct DataStoreV2Chunk
{
	char __padding[0x20L];
	int& ExtraDataArchiveIndexField() { return *GetNativePointerField<int*>(this, "DataStoreV2Chunk.ExtraDataArchiveIndex"); }
	unsigned __int64& ArOffsetField() { return *GetNativePointerField<unsigned __int64*>(this, "DataStoreV2Chunk.ArOffset"); }
	unsigned __int64& ChunkOffsetField() { return *GetNativePointerField<unsigned __int64*>(this, "DataStoreV2Chunk.ChunkOffset"); }
	unsigned __int64& ChunkLengthField() { return *GetNativePointerField<unsigned __int64*>(this, "DataStoreV2Chunk.ChunkLength"); }
};

