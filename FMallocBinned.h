#pragma once

#include "BaseDeclarations.h"
#include "FMalloc.h"
#include "FExec.h"

struct FMallocBinned : FMalloc
{
	char __padding[0x40e00L];
	unsigned __int64& TableAddressLimitField() { return *GetNativePointerField<unsigned __int64*>(this, "FMallocBinned.TableAddressLimit"); }
	FWindowsCriticalSection& AccessGuardField() { return *GetNativePointerField<FWindowsCriticalSection*>(this, "FMallocBinned.AccessGuard"); }
	unsigned __int64& MaxHashBucketsField() { return *GetNativePointerField<unsigned __int64*>(this, "FMallocBinned.MaxHashBuckets"); }
	unsigned __int64& MaxHashBucketBitsField() { return *GetNativePointerField<unsigned __int64*>(this, "FMallocBinned.MaxHashBucketBits"); }
	unsigned __int64& MaxHashBucketWasteField() { return *GetNativePointerField<unsigned __int64*>(this, "FMallocBinned.MaxHashBucketWaste"); }
	unsigned __int64& MaxBookKeepingOverheadField() { return *GetNativePointerField<unsigned __int64*>(this, "FMallocBinned.MaxBookKeepingOverhead"); }
	unsigned __int64& PoolBitShiftField() { return *GetNativePointerField<unsigned __int64*>(this, "FMallocBinned.PoolBitShift"); }
	unsigned __int64& IndirectPoolBitShiftField() { return *GetNativePointerField<unsigned __int64*>(this, "FMallocBinned.IndirectPoolBitShift"); }
	unsigned __int64& IndirectPoolBlockSizeField() { return *GetNativePointerField<unsigned __int64*>(this, "FMallocBinned.IndirectPoolBlockSize"); }
	unsigned __int64& HashKeyShiftField() { return *GetNativePointerField<unsigned __int64*>(this, "FMallocBinned.HashKeyShift"); }
	unsigned __int64& PoolMaskField() { return *GetNativePointerField<unsigned __int64*>(this, "FMallocBinned.PoolMask"); }
	unsigned __int64& BinnedSizeLimitField() { return *GetNativePointerField<unsigned __int64*>(this, "FMallocBinned.BinnedSizeLimit"); }
	unsigned __int64& BinnedOSTableIndexField() { return *GetNativePointerField<unsigned __int64*>(this, "FMallocBinned.BinnedOSTableIndex"); }
	unsigned int& PageSizeField() { return *GetNativePointerField<unsigned int*>(this, "FMallocBinned.PageSize"); }
	unsigned int& FreedPageBlocksNumField() { return *GetNativePointerField<unsigned int*>(this, "FMallocBinned.FreedPageBlocksNum"); }
	unsigned int& CachedTotalField() { return *GetNativePointerField<unsigned int*>(this, "FMallocBinned.CachedTotal"); }

	// Functions

	void FPoolTable() { NativeCall<void>(this, "FMallocBinned.FPoolTable"); }
	void FPoolTable() { NativeCall<void>(this, "FMallocBinned.FPoolTable"); }
	void DumpAllocatorStats(FOutputDevice * Ar) { NativeCall<void, FOutputDevice *>(this, "FMallocBinned.DumpAllocatorStats", Ar); }
	void FlushAllocCache() { NativeCall<void>(this, "FMallocBinned.FlushAllocCache"); }
	void Free(void * Ptr) { NativeCall<void, void *>(this, "FMallocBinned.Free", Ptr); }
	void FreeInternal(void * Ptr) { NativeCall<void, void *>(this, "FMallocBinned.FreeInternal", Ptr); }
	void FreeTrack(void * Ptr, bool * IsTracked) { NativeCall<void, void *, bool *>(this, "FMallocBinned.FreeTrack", Ptr, IsTracked); }
	bool GetAllocationSize(void * Original, unsigned __int64 * SizeOut) { return NativeCall<bool, void *, unsigned __int64 *>(this, "FMallocBinned.GetAllocationSize", Original, SizeOut); }
	const wchar_t * GetDescriptiveName() { return NativeCall<const wchar_t *>(this, "FMallocBinned.GetDescriptiveName"); }
	void * Malloc(unsigned __int64 Size, unsigned int Alignment) { return NativeCall<void *, unsigned __int64, unsigned int>(this, "FMallocBinned.Malloc", Size, Alignment); }
	void * MallocTrack(unsigned __int64 Size, bool * IsTracked, unsigned int Alignment) { return NativeCall<void *, unsigned __int64, bool *, unsigned int>(this, "FMallocBinned.MallocTrack", Size, IsTracked, Alignment); }
	void * Realloc(void * Ptr, unsigned __int64 NewSize, unsigned int Alignment) { return NativeCall<void *, void *, unsigned __int64, unsigned int>(this, "FMallocBinned.Realloc", Ptr, NewSize, Alignment); }
	void * ReallocTrack(void * Ptr, unsigned __int64 NewSize, char * IsTrackedCombine, unsigned int Alignment) { return NativeCall<void *, void *, unsigned __int64, char *, unsigned int>(this, "FMallocBinned.ReallocTrack", Ptr, NewSize, IsTrackedCombine, Alignment); }
	bool ValidateHeap() { return NativeCall<bool>(this, "FMallocBinned.ValidateHeap"); }
};

