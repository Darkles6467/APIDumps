#pragma once

#include "BaseDeclarations.h"
struct FBaseGraphTask
{
	char __padding[0x10L];
	ENamedThreads::Type& ThreadToExecuteOnField() { return *GetNativePointerField<ENamedThreads::Type*>(this, "FBaseGraphTask.ThreadToExecuteOn"); }
	FThreadSafeCounter& NumberOfPrerequistitesOutstandingField() { return *GetNativePointerField<FThreadSafeCounter*>(this, "FBaseGraphTask.NumberOfPrerequistitesOutstanding"); }

	// Functions

	void PrerequisitesComplete(ENamedThreads::Type CurrentThread, int NumAlreadyFinishedPrequistes, bool bUnlock) { NativeCall<void, ENamedThreads::Type, int, bool>(this, "FBaseGraphTask.PrerequisitesComplete", CurrentThread, NumAlreadyFinishedPrequistes, bUnlock); }
	static TLockFreeFixedSizeAllocator_TLSCache<256,128,FNoopCounter> * GetSmallTaskAllocator() { return NativeCall<TLockFreeFixedSizeAllocator_TLSCache<256,128,FNoopCounter> *>(nullptr, "FBaseGraphTask.GetSmallTaskAllocator"); }
};

