#pragma once

#include "BaseDeclarations.h"
#include "FSelfRegisteringExec.h"
#include "FExec.h"

struct FMessagingModule : FSelfRegisteringExec
{
	char __padding[0x18L];

	// Functions

	bool Exec(UWorld * InWorld, const wchar_t * Cmd, FOutputDevice * Ar) { return NativeCall<bool, UWorld *, const wchar_t *, FOutputDevice *>(this, "FMessagingModule.Exec", InWorld, Cmd, Ar); }
	void HandleCorePreExit() { NativeCall<void>(this, "FMessagingModule.HandleCorePreExit"); }
	void ShutdownDefaultBus() { NativeCall<void>(this, "FMessagingModule.ShutdownDefaultBus"); }
	void ShutdownModule() { NativeCall<void>(this, "FMessagingModule.ShutdownModule"); }
	void StartupModule() { NativeCall<void>(this, "FMessagingModule.StartupModule"); }
};

