#pragma once

#include "BaseDeclarations.h"
#include "IModuleInterface.h"

struct FVoiceModule : IModuleInterface
{
	char __padding[0x10L];
	bool& bEnabledField() { return *GetNativePointerField<bool*>(this, "FVoiceModule.bEnabled"); }

	// Functions

	bool Exec(UWorld * InWorld, const wchar_t * Cmd, FOutputDevice * Ar) { return NativeCall<bool, UWorld *, const wchar_t *, FOutputDevice *>(this, "FVoiceModule.Exec", InWorld, Cmd, Ar); }
	void ShutdownModule() { NativeCall<void>(this, "FVoiceModule.ShutdownModule"); }
	void StartupModule() { NativeCall<void>(this, "FVoiceModule.StartupModule"); }
};

