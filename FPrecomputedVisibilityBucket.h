#pragma once

#include "BaseDeclarations.h"
struct FPrecomputedVisibilityBucket
{
	char __padding[0x28L];
	int& CellDataSizeField() { return *GetNativePointerField<int*>(this, "FPrecomputedVisibilityBucket.CellDataSize"); }
	TArray<FPrecomputedVisibilityCell>& CellsField() { return *GetNativePointerField<TArray<FPrecomputedVisibilityCell>*>(this, "FPrecomputedVisibilityBucket.Cells"); }
	TArray<FCompressedVisibilityChunk>& CellDataChunksField() { return *GetNativePointerField<TArray<FCompressedVisibilityChunk>*>(this, "FPrecomputedVisibilityBucket.CellDataChunks"); }
};

