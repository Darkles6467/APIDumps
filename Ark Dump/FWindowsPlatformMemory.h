#pragma once

#include "BaseDeclarations.h"
struct FGenericPlatformMemory
{
	enum ESharedMemoryAccess
	{
		Read = 0x2,
		Write = 0x4,
	};

	enum EMemoryCounterRegion
	{
		MCR_Invalid = 0x0,
		MCR_Physical = 0x1,
		MCR_GPU = 0x2,
		MCR_GPUSystem = 0x3,
		MCR_TexturePool = 0x4,
		MCR_MAX = 0x5,
	};


	// Functions

	static void DumpStats(FOutputDevice * Ar) { NativeCall<void, FOutputDevice *>(nullptr, "FGenericPlatformMemory.DumpStats", Ar); }
	static void Memswap(void * Ptr1, void * Ptr2, unsigned __int64 Size) { NativeCall<void, void *, void *, unsigned __int64>(nullptr, "FGenericPlatformMemory.Memswap", Ptr1, Ptr2, Size); }
	static void OnOutOfMemory(unsigned __int64 Size, unsigned int Alignment) { NativeCall<void, unsigned __int64, unsigned int>(nullptr, "FGenericPlatformMemory.OnOutOfMemory", Size, Alignment); }
};

struct FWindowsPlatformMemory : FGenericPlatformMemory
{
	enum EMemoryCounterRegion
	{
		MCR_Invalid = 0x0,
		MCR_Physical = 0x1,
		MCR_GPU = 0x2,
		MCR_GPUSystem = 0x3,
		MCR_TexturePool = 0x4,
		MCR_SamplePlatformSpecifcMemoryRegion = 0x5,
		MCR_MAX = 0x6,
	};


	// Functions

	static FPlatformMemoryStats * GetStats(FPlatformMemoryStats * result) { return NativeCall<FPlatformMemoryStats *, FPlatformMemoryStats *>(nullptr, "FWindowsPlatformMemory.GetStats", result); }
	static bool ProtectPages(void * Ptr, unsigned __int64 Size, bool bDoProtect) { return NativeCall<bool, void *, unsigned __int64, bool>(nullptr, "FWindowsPlatformMemory.ProtectPages", Ptr, Size, bDoProtect); }
};

