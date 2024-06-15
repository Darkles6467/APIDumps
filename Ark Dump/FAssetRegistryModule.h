#pragma once

#include "BaseDeclarations.h"
#include "IModuleInterface.h"

struct FAssetRegistryModule : IModuleInterface
{
	char __padding[0x10L];
	FAssetRegistryConsoleCommands * ConsoleCommandsField() { return GetNativePointerField<FAssetRegistryConsoleCommands *>(this, "FAssetRegistryModule.ConsoleCommands"); }

	// Functions

	void ShutdownModule() { NativeCall<void>(this, "FAssetRegistryModule.ShutdownModule"); }
	void StartupModule() { NativeCall<void>(this, "FAssetRegistryModule.StartupModule"); }
};

