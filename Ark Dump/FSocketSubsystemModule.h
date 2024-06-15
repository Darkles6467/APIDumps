#pragma once

#include "BaseDeclarations.h"
#include "IModuleInterface.h"

struct FSocketSubsystemModule : IModuleInterface
{
	char __padding[0x58L];
	FName& DefaultSocketSubsystemField() { return *GetNativePointerField<FName*>(this, "FSocketSubsystemModule.DefaultSocketSubsystem"); }

	// Functions

	void RegisterSocketSubsystem(const FName FactoryName, ISocketSubsystem * Factory, bool bMakeDefault) { NativeCall<void, const FName, ISocketSubsystem *, bool>(this, "FSocketSubsystemModule.RegisterSocketSubsystem", FactoryName, Factory, bMakeDefault); }
	void ShutdownSocketSubsystem() { NativeCall<void>(this, "FSocketSubsystemModule.ShutdownSocketSubsystem"); }
	void StartupModule() { NativeCall<void>(this, "FSocketSubsystemModule.StartupModule"); }
};

