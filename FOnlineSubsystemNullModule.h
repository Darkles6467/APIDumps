#pragma once

#include "BaseDeclarations.h"
#include "IModuleInterface.h"

struct FOnlineSubsystemNullModule : IModuleInterface
{
	char __padding[0x8L];
	FOnlineFactoryNull * NullFactoryField() { return GetNativePointerField<FOnlineFactoryNull *>(this, "FOnlineSubsystemNullModule.NullFactory"); }

	// Functions

	void ShutdownModule() { NativeCall<void>(this, "FOnlineSubsystemNullModule.ShutdownModule"); }
	void StartupModule() { NativeCall<void>(this, "FOnlineSubsystemNullModule.StartupModule"); }
};

