#pragma once

#include "BaseDeclarations.h"
#include "FGraphEvent.h"

struct FCompletionList
{
	char __padding[0x8L];
	TLockFreePointerListUnordered<FGraphEvent,0>& PrerequisitesField() { return *GetNativePointerField<TLockFreePointerListUnordered<FGraphEvent,0>*>(this, "FCompletionList.Prerequisites"); }

	// Functions

	void ChainWaitForPrerequisites(ENamedThreads::Type CurrentThread, const TRefCountPtr<FGraphEvent> * MyCompletionGraphEvent) { NativeCall<void, ENamedThreads::Type, const TRefCountPtr<FGraphEvent> *>(this, "FCompletionList.ChainWaitForPrerequisites", CurrentThread, MyCompletionGraphEvent); }
	TRefCountPtr<FGraphEvent> * CreatePrerequisiteCompletionHandle(TRefCountPtr<FGraphEvent> * result, ENamedThreads::Type CurrentThread) { return NativeCall<TRefCountPtr<FGraphEvent> *, TRefCountPtr<FGraphEvent> *, ENamedThreads::Type>(this, "FCompletionList.CreatePrerequisiteCompletionHandle", result, CurrentThread); }
};

