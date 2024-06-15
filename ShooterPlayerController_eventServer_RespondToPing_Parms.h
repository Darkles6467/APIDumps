#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServer_RespondToPing_Parms
{
	char __padding[0x28L];
	FReplicatePingData& RespondToPingDataField() { return *GetNativePointerField<FReplicatePingData*>(this, "ShooterPlayerController_eventServer_RespondToPing_Parms.RespondToPingData"); }
};

