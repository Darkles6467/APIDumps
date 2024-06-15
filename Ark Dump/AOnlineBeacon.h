#pragma once

#include "BaseDeclarations.h"
#include "AActor.h"

struct AOnlineBeacon : AActor
{
	char __padding[0x28L];
	FName& BeaconNetDriverNameField() { return *GetNativePointerField<FName*>(this, "AOnlineBeacon.BeaconNetDriverName"); }
	EBeaconState::Type& BeaconStateField() { return *GetNativePointerField<EBeaconState::Type*>(this, "AOnlineBeacon.BeaconState"); }

	// Functions

	void DestroyBeacon() { NativeCall<void>(this, "AOnlineBeacon.DestroyBeacon"); }
	FString * GetBeaconType(FString * result) { return NativeCall<FString *, FString *>(this, "AOnlineBeacon.GetBeaconType", result); }
	void HandleNetworkFailure(UWorld * World, UNetDriver * InNetDriver, ENetworkFailure::Type FailureType, const FString * ErrorString) { NativeCall<void, UWorld *, UNetDriver *, ENetworkFailure::Type, const FString *>(this, "AOnlineBeacon.HandleNetworkFailure", World, InNetDriver, FailureType, ErrorString); }
	bool InitBase() { return NativeCall<bool>(this, "AOnlineBeacon.InitBase"); }
	bool NotifyAcceptingChannel(UChannel * Channel) { return NativeCall<bool, UChannel *>(this, "AOnlineBeacon.NotifyAcceptingChannel", Channel); }
	EAcceptConnection::Type NotifyAcceptingConnection() { return NativeCall<EAcceptConnection::Type>(this, "AOnlineBeacon.NotifyAcceptingConnection"); }
	void OnActorChannelOpen(FInBunch * Bunch, UNetConnection * Connection) { NativeCall<void, FInBunch *, UNetConnection *>(this, "AOnlineBeacon.OnActorChannelOpen", Bunch, Connection); }
	void OnFailure() { NativeCall<void>(this, "AOnlineBeacon.OnFailure"); }
	void SetNetConnection(UNetConnection * NetConnection) { NativeCall<void, UNetConnection *>(this, "AOnlineBeacon.SetNetConnection", NetConnection); }
};

