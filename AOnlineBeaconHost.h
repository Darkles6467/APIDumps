#pragma once

#include "BaseDeclarations.h"
#include "AOnlineBeacon.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct AOnlineBeaconHost : AOnlineBeacon
{
	char __padding[0xb8L];
	int& ListenPortField() { return *GetNativePointerField<int*>(this, "AOnlineBeaconHost.ListenPort"); }

	// Functions

	int GetListenPort() { return NativeCall<int>(this, "AOnlineBeaconHost.GetListenPort"); }
	void HandleNetworkFailure(UWorld * World, UNetDriver * NetDriver, ENetworkFailure::Type FailureType, const FString * ErrorString) { NativeCall<void, UWorld *, UNetDriver *, ENetworkFailure::Type, const FString *>(this, "AOnlineBeaconHost.HandleNetworkFailure", World, NetDriver, FailureType, ErrorString); }
	bool InitHost() { return NativeCall<bool>(this, "AOnlineBeaconHost.InitHost"); }
	void NotifyControlMessage(UNetConnection * Connection, char MessageType, FInBunch * Bunch) { NativeCall<void, UNetConnection *, char, FInBunch *>(this, "AOnlineBeaconHost.NotifyControlMessage", Connection, MessageType, Bunch); }
	void RegisterHost(AOnlineBeaconHostObject * NewHostObject) { NativeCall<void, AOnlineBeaconHostObject *>(this, "AOnlineBeaconHost.RegisterHost", NewHostObject); }
	void RemoveClientActor(AOnlineBeaconClient * ClientActor) { NativeCall<void, AOnlineBeaconClient *>(this, "AOnlineBeaconHost.RemoveClientActor", ClientActor); }
	void UnregisterHost(const FString * BeaconType) { NativeCall<void, const FString *>(this, "AOnlineBeaconHost.UnregisterHost", BeaconType); }
};

