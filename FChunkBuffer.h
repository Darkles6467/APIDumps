#pragma once

#include "BaseDeclarations.h"
struct FChunkBuffer
{
	char __padding[0x18L];
	char * DataField() { return GetNativePointerField<char *>(this, "FChunkBuffer.Data"); }
	int& LockCountField() { return *GetNativePointerField<int*>(this, "FChunkBuffer.LockCount"); }
	int& ChunkIndexField() { return *GetNativePointerField<int*>(this, "FChunkBuffer.ChunkIndex"); }
	long double& LastAccessTimeField() { return *GetNativePointerField<long double*>(this, "FChunkBuffer.LastAccessTime"); }

	// Functions

};

