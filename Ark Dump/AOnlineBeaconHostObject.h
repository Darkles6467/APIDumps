#pragma once

#include "BaseDeclarations.h"
#include "AActor.h"

struct AOnlineBeaconHostObject : AActor
{
	char __padding[0x10L];
	FString& BeaconTypeNameField() { return *GetNativePointerField<FString*>(this, "AOnlineBeaconHostObject.BeaconTypeName"); }

	// Functions

	void ClientConnected(AOnlineBeaconClient * NewClientActor, UNetConnection * ClientConnection) { NativeCall<void, AOnlineBeaconClient *, UNetConnection *>(this, "AOnlineBeaconHostObject.ClientConnected", NewClientActor, ClientConnection); }
	void RemoveClientActor(AOnlineBeaconClient * ClientActor) { NativeCall<void, AOnlineBeaconClient *>(this, "AOnlineBeaconHostObject.RemoveClientActor", ClientActor); }
};

