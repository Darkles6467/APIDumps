#pragma once

#include "BaseDeclarations.h"
#include "IOnlineSubsystem.h"

struct FOnlineSubsystemImpl : IOnlineSubsystem
{
	char __padding[0x58L];
	FName& InstanceNameField() { return *GetNativePointerField<FName*>(this, "FOnlineSubsystemImpl.InstanceName"); }
	bool& bForceDedicatedField() { return *GetNativePointerField<bool*>(this, "FOnlineSubsystemImpl.bForceDedicated"); }
	UNamedInterfaces * NamedInterfacesField() { return GetNativePointerField<UNamedInterfaces *>(this, "FOnlineSubsystemImpl.NamedInterfaces"); }
	bool& bTickerStartedField() { return *GetNativePointerField<bool*>(this, "FOnlineSubsystemImpl.bTickerStarted"); }

	// Functions

	void InitNamedInterfaces() { NativeCall<void>(this, "FOnlineSubsystemImpl.InitNamedInterfaces"); }
	bool IsLocalPlayer(const FUniqueNetId * UniqueId) { return NativeCall<bool, const FUniqueNetId *>(this, "FOnlineSubsystemImpl.IsLocalPlayer", UniqueId); }
	bool IsServer() { return NativeCall<bool>(this, "FOnlineSubsystemImpl.IsServer"); }
	void SetForceDedicated(bool bForce) { NativeCall<void, bool>(this, "FOnlineSubsystemImpl.SetForceDedicated", bForce); }
	void SetNamedInterface(FName InterfaceName, UObject * NewInterface) { NativeCall<void, FName, UObject *>(this, "FOnlineSubsystemImpl.SetNamedInterface", InterfaceName, NewInterface); }
	bool Tick(float DeltaTime) { return NativeCall<bool, float>(this, "FOnlineSubsystemImpl.Tick", DeltaTime); }
};

