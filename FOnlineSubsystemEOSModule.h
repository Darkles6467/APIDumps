#pragma once

#include "BaseDeclarations.h"
#include "IModuleInterface.h"

struct FOnlineSubsystemEOSModule : IModuleInterface
{
	char __padding[0x8L];
	FOnlineFactoryEOS * EOSFactoryField() { return GetNativePointerField<FOnlineFactoryEOS *>(this, "FOnlineSubsystemEOSModule.EOSFactory"); }

	// Functions

	void ShutdownModule() { NativeCall<void>(this, "FOnlineSubsystemEOSModule.ShutdownModule"); }
	void StartupModule() { NativeCall<void>(this, "FOnlineSubsystemEOSModule.StartupModule"); }
};

