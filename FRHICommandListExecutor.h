#pragma once

#include "BaseDeclarations.h"
#include "FGraphEvent.h"

struct FRHICommandListExecutor
{
	char __padding[0x3a0L];
	bool& bLatchedBypassField() { return *GetNativePointerField<bool*>(this, "FRHICommandListExecutor.bLatchedBypass"); }
	bool& bLatchedUseParallelAlgorithmsField() { return *GetNativePointerField<bool*>(this, "FRHICommandListExecutor.bLatchedUseParallelAlgorithms"); }
	FThreadSafeCounter& UIDCounterField() { return *GetNativePointerField<FThreadSafeCounter*>(this, "FRHICommandListExecutor.UIDCounter"); }
	FThreadSafeCounter& OutstandingCmdListCountField() { return *GetNativePointerField<FThreadSafeCounter*>(this, "FRHICommandListExecutor.OutstandingCmdListCount"); }

	// Functions

	void ExecuteInner(FRHICommandListBase * CmdList) { NativeCall<void, FRHICommandListBase *>(this, "FRHICommandListExecutor.ExecuteInner", CmdList); }
	void ExecuteList(FRHICommandListBase * CmdList) { NativeCall<void, FRHICommandListBase *>(this, "FRHICommandListExecutor.ExecuteList", CmdList); }
	void ExecuteList(FRHICommandListImmediate * CmdList) { NativeCall<void, FRHICommandListImmediate *>(this, "FRHICommandListExecutor.ExecuteList", CmdList); }
	static bool IsRHIThreadActive() { return NativeCall<bool>(nullptr, "FRHICommandListExecutor.IsRHIThreadActive"); }
	static void WaitOnRHIThreadFence(TRefCountPtr<FGraphEvent> * Fence) { NativeCall<void, TRefCountPtr<FGraphEvent> *>(nullptr, "FRHICommandListExecutor.WaitOnRHIThreadFence", Fence); }
};

