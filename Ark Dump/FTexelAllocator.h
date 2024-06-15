#pragma once

#include "BaseDeclarations.h"
#include "FTexelAllocation.h"

struct FTexelAllocator
{
	char __padding[0x28L];
	TArray<FTexelAllocator::FBlock *>& FreeBlocksField() { return *GetNativePointerField<TArray<FTexelAllocator::FBlock *>*>(this, "FTexelAllocator.FreeBlocks"); }
	FTexelAllocator::FBlock * BlockPoolField() { return GetNativePointerField<FTexelAllocator::FBlock *>(this, "FTexelAllocator.BlockPool"); }
	int& BlockCountField() { return *GetNativePointerField<int*>(this, "FTexelAllocator.BlockCount"); }
	int& TextureSizeXField() { return *GetNativePointerField<int*>(this, "FTexelAllocator.TextureSizeX"); }
	int& TextureSizeYField() { return *GetNativePointerField<int*>(this, "FTexelAllocator.TextureSizeY"); }
	int& FreeTexelsField() { return *GetNativePointerField<int*>(this, "FTexelAllocator.FreeTexels"); }

	// Functions

	FTexelAllocation * Allocate(FTexelAllocation * result, int Size) { return NativeCall<FTexelAllocation *, FTexelAllocation *, int>(this, "FTexelAllocator.Allocate", result, Size); }
	void Free(FTexelAllocation Allocation) { NativeCall<void, FTexelAllocation>(this, "FTexelAllocator.Free", Allocation); }
};

