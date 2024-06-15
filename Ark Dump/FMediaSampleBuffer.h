#pragma once

#include "BaseDeclarations.h"
#include "IMediaSink.h"
#include "FTimespan.h"

struct FMediaSampleBuffer : IMediaSink
{
	char __padding[0x58L];
	FWindowsCriticalSection& MediaDataCriticalSectionField() { return *GetNativePointerField<FWindowsCriticalSection*>(this, "FMediaSampleBuffer.MediaDataCriticalSection"); }
	TSharedPtr<TArray<unsigned char>,1>& CurrentSampleField() { return *GetNativePointerField<TSharedPtr<TArray<unsigned char>,1>*>(this, "FMediaSampleBuffer.CurrentSample"); }
	FTimespan& CurrentSampleTimeField() { return *GetNativePointerField<FTimespan*>(this, "FMediaSampleBuffer.CurrentSampleTime"); }

	// Functions

	void GetLockedSampleData(TArray<unsigned char> * OutData) { NativeCall<void, TArray<unsigned char> *>(this, "FMediaSampleBuffer.GetLockedSampleData", OutData); }
	void ProcessMediaSample(const void * Buffer, unsigned int BufferSize, FTimespan Duration, FTimespan Time) { NativeCall<void, const void *, unsigned int, FTimespan, FTimespan>(this, "FMediaSampleBuffer.ProcessMediaSample", Buffer, BufferSize, Duration, Time); }
};

