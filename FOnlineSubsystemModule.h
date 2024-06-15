#pragma once

#include "BaseDeclarations.h"
#include "IModuleInterface.h"

struct FOnlineSubsystemModule : IModuleInterface
{
	char __padding[0xa8L];
	FName& DefaultPlatformServiceField() { return *GetNativePointerField<FName*>(this, "FOnlineSubsystemModule.DefaultPlatformService"); }

	// Functions

	void UnregisterPlatformService(const FName FactoryName) { NativeCall<void, const FName>(this, "FOnlineSubsystemModule.UnregisterPlatformService", FactoryName); }
	void DestroyOnlineSubsystem(const FName InSubsystemName) { NativeCall<void, const FName>(this, "FOnlineSubsystemModule.DestroyOnlineSubsystem", InSubsystemName); }
	bool IsOnlineSubsystemLoaded(const FName InSubsystemName) { return NativeCall<bool, const FName>(this, "FOnlineSubsystemModule.IsOnlineSubsystemLoaded", InSubsystemName); }
	void ParseOnlineSubsystemName(const FName * FullName, FName * SubsystemName, FName * InstanceName) { NativeCall<void, const FName *, FName *, FName *>(this, "FOnlineSubsystemModule.ParseOnlineSubsystemName", FullName, SubsystemName, InstanceName); }
	void RegisterPlatformService(const FName FactoryName, IOnlineFactory * Factory) { NativeCall<void, const FName, IOnlineFactory *>(this, "FOnlineSubsystemModule.RegisterPlatformService", FactoryName, Factory); }
	void ShutdownOnlineSubsystem() { NativeCall<void>(this, "FOnlineSubsystemModule.ShutdownOnlineSubsystem"); }
	void StartupModule() { NativeCall<void>(this, "FOnlineSubsystemModule.StartupModule"); }
};

