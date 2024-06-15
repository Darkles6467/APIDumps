#pragma once

#include "BaseDeclarations.h"
struct FCommandLine
{

	// Functions

	static void AddToSubprocessCommandline(const wchar_t * Param) { NativeCall<void, const wchar_t *>(nullptr, "FCommandLine.AddToSubprocessCommandline", Param); }
	static const wchar_t * Get() { return NativeCall<const wchar_t *>(nullptr, "FCommandLine.Get"); }
	static const FString * GetSubprocessCommandline() { return NativeCall<const FString *>(nullptr, "FCommandLine.GetSubprocessCommandline"); }
	static const wchar_t * RemoveExeName(const wchar_t * InCmdLine) { return NativeCall<const wchar_t *, const wchar_t *>(nullptr, "FCommandLine.RemoveExeName", InCmdLine); }
	static bool Set(const wchar_t * NewCommandLine) { return NativeCall<bool, const wchar_t *>(nullptr, "FCommandLine.Set", NewCommandLine); }
};

