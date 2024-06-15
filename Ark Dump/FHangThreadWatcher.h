#pragma once

#include "BaseDeclarations.h"
#include "FRunnable.h"

struct FHangThreadWatcher : FRunnable
{
	char __padding[0x28L];
	long double& LastTimerField() { return *GetNativePointerField<long double*>(this, "FHangThreadWatcher.LastTimer"); }
	long double& StartupTimeField() { return *GetNativePointerField<long double*>(this, "FHangThreadWatcher.StartupTime"); }
	volatile int& ErrorDurationField() { return *GetNativePointerField<volatile int*>(this, "FHangThreadWatcher.ErrorDuration"); }
	bool& StoppingField() { return *GetNativePointerField<bool*>(this, "FHangThreadWatcher.Stopping"); }
	FThreadSafeCounter& PingCounterField() { return *GetNativePointerField<FThreadSafeCounter*>(this, "FHangThreadWatcher.PingCounter"); }

	// Functions

	unsigned int Run() { return NativeCall<unsigned int>(this, "FHangThreadWatcher.Run"); }
	void Stop() { NativeCall<void>(this, "FHangThreadWatcher.Stop"); }
};

