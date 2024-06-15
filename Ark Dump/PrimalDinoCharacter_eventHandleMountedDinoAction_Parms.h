#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventHandleMountedDinoAction_Parms
{
	char __padding[0x8L];
	AShooterPlayerController * PCField() { return GetNativePointerField<AShooterPlayerController *>(this, "PrimalDinoCharacter_eventHandleMountedDinoAction_Parms.PC"); }
};

