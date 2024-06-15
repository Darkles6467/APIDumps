#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventSpawnedPlayerFor_Parms
{
	char __padding[0x10L];
	AShooterPlayerController * PCField() { return GetNativePointerField<AShooterPlayerController *>(this, "PrimalDinoCharacter_eventSpawnedPlayerFor_Parms.PC"); }
};

