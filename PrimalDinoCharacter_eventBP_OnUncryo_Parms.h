#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventBP_OnUncryo_Parms
{
	char __padding[0x8L];
	AShooterPlayerController * ForPCField() { return GetNativePointerField<AShooterPlayerController *>(this, "PrimalDinoCharacter_eventBP_OnUncryo_Parms.ForPC"); }
};

