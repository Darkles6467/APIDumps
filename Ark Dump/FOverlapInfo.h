#pragma once

#include "BaseDeclarations.h"
struct FOverlapInfo
{
	char __padding[0x98L];
	bool& bFromSweepField() { return *GetNativePointerField<bool*>(this, "FOverlapInfo.bFromSweep"); }
	FHitResult& OverlapInfoField() { return *GetNativePointerField<FHitResult*>(this, "FOverlapInfo.OverlapInfo"); }
	void * CachedCompPtrField() { return GetNativePointerField<void *>(this, "FOverlapInfo.CachedCompPtr"); }

	// Functions

	void UpdateCachedPtr() { NativeCall<void>(this, "FOverlapInfo.UpdateCachedPtr"); }
};

