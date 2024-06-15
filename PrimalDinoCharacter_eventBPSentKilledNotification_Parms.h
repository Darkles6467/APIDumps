#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBPSentKilledNotification_Parms
{
	char __padding[0x8L];
	AShooterPlayerController * ToPCField() { return GetNativePointerField<AShooterPlayerController *>(this, "PrimalDinoCharacter_eventBPSentKilledNotification_Parms.ToPC"); }
};

