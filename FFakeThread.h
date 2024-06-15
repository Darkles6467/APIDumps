#pragma once

#include "BaseDeclarations.h"
#include "FRunnableThread.h"

struct FFakeThread : FRunnableThread
{
	char __padding[0x28L];
	bool& bIsSuspendedField() { return *GetNativePointerField<bool*>(this, "FFakeThread.bIsSuspended"); }
	FString& NameField() { return *GetNativePointerField<FString*>(this, "FFakeThread.Name"); }
	FSingleThreadRunnable * RunnableField() { return GetNativePointerField<FSingleThreadRunnable *>(this, "FFakeThread.Runnable"); }
	unsigned int& ThreadIdField() { return *GetNativePointerField<unsigned int*>(this, "FFakeThread.ThreadId"); }

	// Functions

	bool CreateInternal(FRunnable * InRunnable, const wchar_t * ThreadName, unsigned int InStackSize, EThreadPriority InThreadPri, unsigned __int64 InThreadAffinityMask) { return NativeCall<bool, FRunnable *, const wchar_t *, unsigned int, EThreadPriority, unsigned __int64>(this, "FFakeThread.CreateInternal", InRunnable, ThreadName, InStackSize, InThreadPri, InThreadAffinityMask); }
	FString * GetThreadName(FString * result) { return NativeCall<FString *, FString *>(this, "FFakeThread.GetThreadName", result); }
	bool Kill(bool bShouldWait) { return NativeCall<bool, bool>(this, "FFakeThread.Kill", bShouldWait); }
	void Suspend(bool bShouldPause) { NativeCall<void, bool>(this, "FFakeThread.Suspend", bShouldPause); }
	void WaitForCompletion() { NativeCall<void>(this, "FFakeThread.WaitForCompletion"); }
	unsigned int GetThreadID() { return NativeCall<unsigned int>(this, "FFakeThread.GetThreadID"); }
};

