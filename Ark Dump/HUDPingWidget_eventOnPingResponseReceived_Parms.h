#pragma once

#include "BaseDeclarations.h"
struct HUDPingWidget_eventOnPingResponseReceived_Parms
{
	char __padding[0x8L];
	const AShooterCharacter * RespondingPlayerField() { return GetNativePointerField<const AShooterCharacter *>(this, "HUDPingWidget_eventOnPingResponseReceived_Parms.RespondingPlayer"); }
};

