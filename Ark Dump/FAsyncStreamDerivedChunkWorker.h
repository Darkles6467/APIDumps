#pragma once

#include "BaseDeclarations.h"
#include "FNonAbandonableTask.h"

struct FAsyncStreamDerivedChunkWorker : FNonAbandonableTask
{
	char __padding[0x28L];
	FString& DerivedDataKeyField() { return *GetNativePointerField<FString*>(this, "FAsyncStreamDerivedChunkWorker.DerivedDataKey"); }
	void * DestChunkDataField() { return GetNativePointerField<void *>(this, "FAsyncStreamDerivedChunkWorker.DestChunkData"); }
	int& ExpectedChunkSizeField() { return *GetNativePointerField<int*>(this, "FAsyncStreamDerivedChunkWorker.ExpectedChunkSize"); }
	bool& bRequestFailedField() { return *GetNativePointerField<bool*>(this, "FAsyncStreamDerivedChunkWorker.bRequestFailed"); }
	FThreadSafeCounter * ThreadSafeCounterField() { return GetNativePointerField<FThreadSafeCounter *>(this, "FAsyncStreamDerivedChunkWorker.ThreadSafeCounter"); }
};

