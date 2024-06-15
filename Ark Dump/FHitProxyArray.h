#pragma once

#include "BaseDeclarations.h"
struct FHitProxyArray
{
	char __padding[0x60L];
	FWindowsCriticalSection& LockField() { return *GetNativePointerField<FWindowsCriticalSection*>(this, "FHitProxyArray.Lock"); }

	// Functions

	int Add(HHitProxy * Proxy) { return NativeCall<int, HHitProxy *>(this, "FHitProxyArray.Add", Proxy); }
	static FHitProxyArray * Get() { return NativeCall<FHitProxyArray *>(nullptr, "FHitProxyArray.Get"); }
};

