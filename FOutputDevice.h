#pragma once

#include "BaseDeclarations.h"
struct FOutputDevice
{
	char __padding[0x10L];
	bool& bSuppressEventTagField() { return *GetNativePointerField<bool*>(this, "FOutputDevice.bSuppressEventTag"); }
	bool& bAutoEmitLineTerminatorField() { return *GetNativePointerField<bool*>(this, "FOutputDevice.bAutoEmitLineTerminator"); }

	// Functions

	static FString * FormatLogLine(FString * result, ELogVerbosity::Type Verbosity, const FName * Category, const wchar_t * Message, ELogTimes::Type LogTime) { return NativeCall<FString *, FString *, ELogVerbosity::Type, const FName *, const wchar_t *, ELogTimes::Type>(nullptr, "FOutputDevice.FormatLogLine", result, Verbosity, Category, Message, LogTime); }
	void Log(const FString * S) { NativeCall<void, const FString *>(this, "FOutputDevice.Log", S); }
	void Log(const wchar_t * Str) { NativeCall<void, const wchar_t *>(this, "FOutputDevice.Log", Str); }
	static const wchar_t * VerbosityToString(ELogVerbosity::Type Verbosity) { return NativeCall<const wchar_t *, ELogVerbosity::Type>(nullptr, "FOutputDevice.VerbosityToString", Verbosity); }
};

