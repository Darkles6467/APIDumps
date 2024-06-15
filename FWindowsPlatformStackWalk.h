#pragma once

#include "BaseDeclarations.h"
struct FGenericPlatformStackWalk
{

	// Functions

	static bool ProgramCounterToHumanReadableString(int CurrentCallDepth, unsigned __int64 ProgramCounter, char * HumanReadableString, unsigned __int64 HumanReadableStringSize, FGenericCrashContext * Context) { return NativeCall<bool, int, unsigned __int64, char *, unsigned __int64, FGenericCrashContext *>(nullptr, "FGenericPlatformStackWalk.ProgramCounterToHumanReadableString", CurrentCallDepth, ProgramCounter, HumanReadableString, HumanReadableStringSize, Context); }
	static void ReportStack(FOutputDevice * Ar, int MaxDepth, int IgnoreCount, bool callOutputDeviceLogFnOnce) { NativeCall<void, FOutputDevice *, int, int, bool>(nullptr, "FGenericPlatformStackWalk.ReportStack", Ar, MaxDepth, IgnoreCount, callOutputDeviceLogFnOnce); }
	static void StackWalkAndDump(char * HumanReadableString, unsigned __int64 HumanReadableStringSize, int IgnoreCount, void * Context) { NativeCall<void, char *, unsigned __int64, int, void *>(nullptr, "FGenericPlatformStackWalk.StackWalkAndDump", HumanReadableString, HumanReadableStringSize, IgnoreCount, Context); }
};

struct FWindowsPlatformStackWalk : FGenericPlatformStackWalk
{

	// Functions

	static void CaptureStackBackTrace(unsigned __int64 * BackTrace, unsigned int MaxDepth, void * Context, unsigned int SkipFrames) { NativeCall<void, unsigned __int64 *, unsigned int, void *, unsigned int>(nullptr, "FWindowsPlatformStackWalk.CaptureStackBackTrace", BackTrace, MaxDepth, Context, SkipFrames); }
	static bool InitStackWalking() { return NativeCall<bool>(nullptr, "FWindowsPlatformStackWalk.InitStackWalking"); }
	static void ProgramCounterToSymbolInfo(unsigned __int64 ProgramCounter, FProgramCounterSymbolInfo * out_SymbolInfo) { NativeCall<void, unsigned __int64, FProgramCounterSymbolInfo *>(nullptr, "FWindowsPlatformStackWalk.ProgramCounterToSymbolInfo", ProgramCounter, out_SymbolInfo); }
	static void ReportStack(FOutputDevice * Ar, int MaxDepth, int IgnoreCount) { NativeCall<void, FOutputDevice *, int, int>(nullptr, "FWindowsPlatformStackWalk.ReportStack", Ar, MaxDepth, IgnoreCount); }
	static void StackWalkAndDump(char * HumanReadableString, unsigned __int64 HumanReadableStringSize, int IgnoreCount, void * Context) { NativeCall<void, char *, unsigned __int64, int, void *>(nullptr, "FWindowsPlatformStackWalk.StackWalkAndDump", HumanReadableString, HumanReadableStringSize, IgnoreCount, Context); }
};

