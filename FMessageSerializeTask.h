#pragma once

#include "BaseDeclarations.h"
#include "FGraphEvent.h"

struct FMessageSerializeTask
{
	char __padding[0x30L];
	TSharedRef<FMessageData,1>& MessageDataField() { return *GetNativePointerField<TSharedRef<FMessageData,1>*>(this, "FMessageSerializeTask.MessageData"); }

	// Functions

	void DoTask(ENamedThreads::Type CurrentThread, const TRefCountPtr<FGraphEvent> * MyCompletionGraphEvent) { NativeCall<void, ENamedThreads::Type, const TRefCountPtr<FGraphEvent> *>(this, "FMessageSerializeTask.DoTask", CurrentThread, MyCompletionGraphEvent); }
};

