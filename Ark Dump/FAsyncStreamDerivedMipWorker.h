#pragma once

#include "BaseDeclarations.h"
#include "FNonAbandonableTask.h"

struct FAsyncStreamDerivedMipWorker : FNonAbandonableTask
{
	char __padding[0x28L];
	FString& DerivedDataKeyField() { return *GetNativePointerField<FString*>(this, "FAsyncStreamDerivedMipWorker.DerivedDataKey"); }
	void * DestMipDataField() { return GetNativePointerField<void *>(this, "FAsyncStreamDerivedMipWorker.DestMipData"); }
	int& ExpectedMipSizeField() { return *GetNativePointerField<int*>(this, "FAsyncStreamDerivedMipWorker.ExpectedMipSize"); }
	bool& bRequestFailedField() { return *GetNativePointerField<bool*>(this, "FAsyncStreamDerivedMipWorker.bRequestFailed"); }
	FThreadSafeCounter * ThreadSafeCounterField() { return GetNativePointerField<FThreadSafeCounter *>(this, "FAsyncStreamDerivedMipWorker.ThreadSafeCounter"); }
};

