#pragma once

#include "BaseDeclarations.h"
#include "FRunnableThread.h"

struct FRunnableThreadWin : FRunnableThread
{
	char __padding[0x40L];
	void * ThreadField() { return GetNativePointerField<void *>(this, "FRunnableThreadWin.Thread"); }
	EThreadPriority& ThreadPriorityField() { return *GetNativePointerField<EThreadPriority*>(this, "FRunnableThreadWin.ThreadPriority"); }
	unsigned __int64& ThreadAffintyMaskField() { return *GetNativePointerField<unsigned __int64*>(this, "FRunnableThreadWin.ThreadAffintyMask"); }
	unsigned int& ThreadIDField() { return *GetNativePointerField<unsigned int*>(this, "FRunnableThreadWin.ThreadID"); }
	FString& ThreadNameField() { return *GetNativePointerField<FString*>(this, "FRunnableThreadWin.ThreadName"); }

	// Functions

	bool CreateInternal(FRunnable * InRunnable, const wchar_t * InThreadName, unsigned int InStackSize, EThreadPriority InThreadPri, unsigned __int64 InThreadAffinityMask) { return NativeCall<bool, FRunnable *, const wchar_t *, unsigned int, EThreadPriority, unsigned __int64>(this, "FRunnableThreadWin.CreateInternal", InRunnable, InThreadName, InStackSize, InThreadPri, InThreadAffinityMask); }
	FString * GetThreadName(FString * result) { return NativeCall<FString *, FString *>(this, "FRunnableThreadWin.GetThreadName", result); }
	unsigned int GuardedRun() { return NativeCall<unsigned int>(this, "FRunnableThreadWin.GuardedRun"); }
	bool Kill(bool bShouldWait) { return NativeCall<bool, bool>(this, "FRunnableThreadWin.Kill", bShouldWait); }
	unsigned int Run() { return NativeCall<unsigned int>(this, "FRunnableThreadWin.Run"); }
	static void SetThreadName(unsigned int ThreadID, const char * ThreadName) { NativeCall<void, unsigned int, const char *>(nullptr, "FRunnableThreadWin.SetThreadName", ThreadID, ThreadName); }
	void SetThreadPriority(EThreadPriority NewPriority) { NativeCall<void, EThreadPriority>(this, "FRunnableThreadWin.SetThreadPriority", NewPriority); }
	void Suspend(bool bShouldPause) { NativeCall<void, bool>(this, "FRunnableThreadWin.Suspend", bShouldPause); }
	static int TranslateThreadPriority(EThreadPriority Priority) { return NativeCall<int, EThreadPriority>(nullptr, "FRunnableThreadWin.TranslateThreadPriority", Priority); }
	void WaitForCompletion() { NativeCall<void>(this, "FRunnableThreadWin.WaitForCompletion"); }
	static unsigned int _ThreadProc(void * pThis) { return NativeCall<unsigned int, void *>(nullptr, "FRunnableThreadWin._ThreadProc", pThis); }
};

