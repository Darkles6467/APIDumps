#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClient_ReceivePingResponse_Parms
{
	char __padding[0x30L];
	FReplicatePingData& ResponseDataField() { return *GetNativePointerField<FReplicatePingData*>(this, "ShooterPlayerController_eventClient_ReceivePingResponse_Parms.ResponseData"); }
	AShooterCharacter * RespondingPlayerField() { return GetNativePointerField<AShooterCharacter *>(this, "ShooterPlayerController_eventClient_ReceivePingResponse_Parms.RespondingPlayer"); }
};

