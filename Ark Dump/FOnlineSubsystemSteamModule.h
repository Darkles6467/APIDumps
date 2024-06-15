#pragma once

#include "BaseDeclarations.h"
#include "IModuleInterface.h"

struct FOnlineSubsystemSteamModule : IModuleInterface
{
	char __padding[0x18L];
	FOnlineFactorySteam * SteamFactoryField() { return GetNativePointerField<FOnlineFactorySteam *>(this, "FOnlineSubsystemSteamModule.SteamFactory"); }
	void * SteamDLLHandleField() { return GetNativePointerField<void *>(this, "FOnlineSubsystemSteamModule.SteamDLLHandle"); }
	void * SteamServerDLLHandleField() { return GetNativePointerField<void *>(this, "FOnlineSubsystemSteamModule.SteamServerDLLHandle"); }

	// Functions

	void LoadSteamModules() { NativeCall<void>(this, "FOnlineSubsystemSteamModule.LoadSteamModules"); }
	void ShutdownModule() { NativeCall<void>(this, "FOnlineSubsystemSteamModule.ShutdownModule"); }
	void StartupModule() { NativeCall<void>(this, "FOnlineSubsystemSteamModule.StartupModule"); }
};

