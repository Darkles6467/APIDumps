#pragma once

#include "BaseDeclarations.h"
#include "IModuleInterface.h"

struct FOnlineSubsystemSteamEOSCompositeModule : IModuleInterface
{
	char __padding[0x8L];
	TUniquePtr<FSteamEOSCompositeFactory>& FactoryField() { return *GetNativePointerField<TUniquePtr<FSteamEOSCompositeFactory>*>(this, "FOnlineSubsystemSteamEOSCompositeModule.Factory"); }

	// Functions

	void ShutdownModule() { NativeCall<void>(this, "FOnlineSubsystemSteamEOSCompositeModule.ShutdownModule"); }
	void StartupModule() { NativeCall<void>(this, "FOnlineSubsystemSteamEOSCompositeModule.StartupModule"); }
};

