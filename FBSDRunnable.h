#pragma once

#include "BaseDeclarations.h"
#include "FRunnable.h"

struct FBSDRunnable : FRunnable
{
	char __padding[0x60L];
	FThreadSafeCounter& IncomingSizeField() { return *GetNativePointerField<FThreadSafeCounter*>(this, "FBSDRunnable.IncomingSize"); }
	FBSDRingBuffer& IncomingBufferField() { return *GetNativePointerField<FBSDRingBuffer*>(this, "FBSDRunnable.IncomingBuffer"); }
	TBasicRingBuffer<FDataChunk>& IncomingField() { return *GetNativePointerField<TBasicRingBuffer<FDataChunk>*>(this, "FBSDRunnable.Incoming"); }
	bool& bRunningField() { return *GetNativePointerField<bool*>(this, "FBSDRunnable.bRunning"); }

	// Functions

	bool RecvFrom(char * Data, int BufferSize, int * BytesRead, FInternetAddr * Source, ESocketReceiveFlags::Type Flags) { return NativeCall<bool, char *, int, int *, FInternetAddr *, ESocketReceiveFlags::Type>(this, "FBSDRunnable.RecvFrom", Data, BufferSize, BytesRead, Source, Flags); }
	unsigned int Run() { return NativeCall<unsigned int>(this, "FBSDRunnable.Run"); }
	void Stop() { NativeCall<void>(this, "FBSDRunnable.Stop"); }
};

