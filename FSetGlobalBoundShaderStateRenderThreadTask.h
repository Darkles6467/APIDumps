#pragma once

#include "BaseDeclarations.h"
#include "FGraphEvent.h"

struct FSetGlobalBoundShaderStateRenderThreadTask
{
	char __padding[0x10L];
	FGlobalBoundShaderState * GlobalBoundShaderStateField() { return GetNativePointerField<FGlobalBoundShaderState *>(this, "FSetGlobalBoundShaderStateRenderThreadTask.GlobalBoundShaderState"); }

	// Functions

	void DoTask(ENamedThreads::Type CurrentThread, const TRefCountPtr<FGraphEvent> * MyCompletionGraphEvent) { NativeCall<void, ENamedThreads::Type, const TRefCountPtr<FGraphEvent> *>(this, "FSetGlobalBoundShaderStateRenderThreadTask.DoTask", CurrentThread, MyCompletionGraphEvent); }
};

