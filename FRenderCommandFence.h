#pragma once

#include "BaseDeclarations.h"
struct FRenderCommandFence
{
	char __padding[0x8L];
	TRefCountPtr<FGraphEvent>& CompletionEventField() { return *GetNativePointerField<TRefCountPtr<FGraphEvent>*>(this, "FRenderCommandFence.CompletionEvent"); }

	// Functions

	void BeginFence() { NativeCall<void>(this, "FRenderCommandFence.BeginFence"); }
	bool IsFenceComplete() { return NativeCall<bool>(this, "FRenderCommandFence.IsFenceComplete"); }
	void Wait(bool bProcessGameThreadTasks) { NativeCall<void, bool>(this, "FRenderCommandFence.Wait", bProcessGameThreadTasks); }
};

