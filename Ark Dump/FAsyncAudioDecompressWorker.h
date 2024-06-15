#pragma once

#include "BaseDeclarations.h"
#include "FNonAbandonableTask.h"

struct FAsyncAudioDecompressWorker : FNonAbandonableTask
{
	char __padding[0x10L];

	// Functions

	void DoWork() { NativeCall<void>(this, "FAsyncAudioDecompressWorker.DoWork"); }
};

