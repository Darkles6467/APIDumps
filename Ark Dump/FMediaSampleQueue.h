#pragma once

#include "BaseDeclarations.h"
#include "IMediaSink.h"
#include "FTimespan.h"

struct FMediaSampleQueue : IMediaSink
{
	char __padding[0x18L];

	// Functions

	void ProcessMediaSample(const void * Buffer, unsigned int BufferSize, FTimespan Duration, FTimespan Time) { NativeCall<void, const void *, unsigned int, FTimespan, FTimespan>(this, "FMediaSampleQueue.ProcessMediaSample", Buffer, BufferSize, Duration, Time); }
};

