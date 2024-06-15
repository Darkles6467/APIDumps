#pragma once

#include "BaseDeclarations.h"
struct VivoxConfig
{
	char __padding[0x258L];
	vx_sdk_config& configField() { return *GetNativePointerField<vx_sdk_config*>(this, "VivoxConfig.config"); }

	// Functions

	static void VivoxFree(void * ptr) { NativeCall<void, void *>(nullptr, "VivoxConfig.VivoxFree", ptr); }
	static void * VivoxRealloc(void * ptr, unsigned __int64 bytes) { return NativeCall<void *, void *, unsigned __int64>(nullptr, "VivoxConfig.VivoxRealloc", ptr, bytes); }
	static void * VivoxCalloc(unsigned __int64 num, unsigned __int64 bytes) { return NativeCall<void *, unsigned __int64, unsigned __int64>(nullptr, "VivoxConfig.VivoxCalloc", num, bytes); }
	static void * VivoxMallocAligned(unsigned __int64 alignment, unsigned __int64 bytes) { return NativeCall<void *, unsigned __int64, unsigned __int64>(nullptr, "VivoxConfig.VivoxMallocAligned", alignment, bytes); }
};

