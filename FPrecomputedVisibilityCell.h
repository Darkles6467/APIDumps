#pragma once

#include "BaseDeclarations.h"
struct FPrecomputedVisibilityCell
{
	char __padding[0x10L];
	FVector& MinField() { return *GetNativePointerField<FVector*>(this, "FPrecomputedVisibilityCell.Min"); }
	unsigned __int16& ChunkIndexField() { return *GetNativePointerField<unsigned __int16*>(this, "FPrecomputedVisibilityCell.ChunkIndex"); }
	unsigned __int16& DataOffsetField() { return *GetNativePointerField<unsigned __int16*>(this, "FPrecomputedVisibilityCell.DataOffset"); }
};

