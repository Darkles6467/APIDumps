#pragma once

#include "BaseDeclarations.h"
struct FSlateLoadingSynchronizationMechanism
{
	char __padding[0x20L];
	FSpinLock& MainLoopField() { return *GetNativePointerField<FSpinLock*>(this, "FSlateLoadingSynchronizationMechanism.MainLoop"); }
	FThreadSafeCounter& IsRunningSlateMainLoopField() { return *GetNativePointerField<FThreadSafeCounter*>(this, "FSlateLoadingSynchronizationMechanism.IsRunningSlateMainLoop"); }
	FThreadSafeCounter& IsSlateDrawEnqueuedField() { return *GetNativePointerField<FThreadSafeCounter*>(this, "FSlateLoadingSynchronizationMechanism.IsSlateDrawEnqueued"); }
};

