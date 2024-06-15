#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServer_Ping_Parms
{
	char __padding[0x28L];
	FReplicatePingData& WithPingDataField() { return *GetNativePointerField<FReplicatePingData*>(this, "ShooterPlayerController_eventServer_Ping_Parms.WithPingData"); }
};

