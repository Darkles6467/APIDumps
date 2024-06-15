#pragma once

#include "BaseDeclarations.h"
struct FStreamMemoryTracker
{
	char __padding[0x10L];
	volatile int& PendingStreamInField() { return *GetNativePointerField<volatile int*>(this, "FStreamMemoryTracker.PendingStreamIn"); }
	volatile int& PendingTempMemoryField() { return *GetNativePointerField<volatile int*>(this, "FStreamMemoryTracker.PendingTempMemory"); }
	volatile int& CurrentStreamOutField() { return *GetNativePointerField<volatile int*>(this, "FStreamMemoryTracker.CurrentStreamOut"); }
	volatile int& CurrentTempMemoryField() { return *GetNativePointerField<volatile int*>(this, "FStreamMemoryTracker.CurrentTempMemory"); }

	// Functions

	void RenderThread_Finalize(const UTexture2D * Texture, bool bSuccessful) { NativeCall<void, const UTexture2D *, bool>(this, "FStreamMemoryTracker.RenderThread_Finalize", Texture, bSuccessful); }
};

