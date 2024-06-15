#pragma once

#include "BaseDeclarations.h"
#include "FMalloc.h"
#include "FExec.h"

struct FMallocThreadSafeProxy : FMalloc
{
	char __padding[0x30L];
	FWindowsCriticalSection& SynchronizationObjectField() { return *GetNativePointerField<FWindowsCriticalSection*>(this, "FMallocThreadSafeProxy.SynchronizationObject"); }

	// Functions

	void DumpAllocatorStats(FOutputDevice * Ar) { NativeCall<void, FOutputDevice *>(this, "FMallocThreadSafeProxy.DumpAllocatorStats", Ar); }
	bool Exec(UWorld * InWorld, const wchar_t * Cmd, FOutputDevice * Ar) { return NativeCall<bool, UWorld *, const wchar_t *, FOutputDevice *>(this, "FMallocThreadSafeProxy.Exec", InWorld, Cmd, Ar); }
	void Free(void * Ptr) { NativeCall<void, void *>(this, "FMallocThreadSafeProxy.Free", Ptr); }
	bool GetAllocationSize(void * Original, unsigned __int64 * SizeOut) { return NativeCall<bool, void *, unsigned __int64 *>(this, "FMallocThreadSafeProxy.GetAllocationSize", Original, SizeOut); }
	void GetAllocatorStats(FGenericMemoryStats * out_Stats) { NativeCall<void, FGenericMemoryStats *>(this, "FMallocThreadSafeProxy.GetAllocatorStats", out_Stats); }
	const wchar_t * GetDescriptiveName() { return NativeCall<const wchar_t *>(this, "FMallocThreadSafeProxy.GetDescriptiveName"); }
	void * Malloc(unsigned __int64 Size, unsigned int Alignment) { return NativeCall<void *, unsigned __int64, unsigned int>(this, "FMallocThreadSafeProxy.Malloc", Size, Alignment); }
	unsigned __int64 QuantizeSize(unsigned __int64 Size, unsigned int Alignment) { return NativeCall<unsigned __int64, unsigned __int64, unsigned int>(this, "FMallocThreadSafeProxy.QuantizeSize", Size, Alignment); }
	void * Realloc(void * Ptr, unsigned __int64 NewSize, unsigned int Alignment) { return NativeCall<void *, void *, unsigned __int64, unsigned int>(this, "FMallocThreadSafeProxy.Realloc", Ptr, NewSize, Alignment); }
	void UpdateStats() { NativeCall<void>(this, "FMallocThreadSafeProxy.UpdateStats"); }
	bool ValidateHeap() { return NativeCall<bool>(this, "FMallocThreadSafeProxy.ValidateHeap"); }
};

