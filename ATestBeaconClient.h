#pragma once

#include "BaseDeclarations.h"
#include "AOnlineBeaconClient.h"
#include "AOnlineBeacon.h"
#include "AActor.h"
#include "UObject.h"
#include "UObjectBaseUtility.h"
#include "UObjectBase.h"

struct ATestBeaconClient : AOnlineBeaconClient
{

	// Functions

	FString * GetBeaconType(FString * result) { return NativeCall<FString *, FString *>(this, "ATestBeaconClient.GetBeaconType", result); }
	void OnFailure() { NativeCall<void>(this, "ATestBeaconClient.OnFailure"); }
	void ClientPing() { NativeCall<void>(this, "ATestBeaconClient.ClientPing"); }
	void ServerPong() { NativeCall<void>(this, "ATestBeaconClient.ServerPong"); }
};

