#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClient_ReceivePing_Parms
{
	char __padding[0x28L];
	FReplicatePingData& ReceivedPingDataField() { return *GetNativePointerField<FReplicatePingData*>(this, "ShooterPlayerController_eventClient_ReceivePing_Parms.ReceivedPingData"); }
};

