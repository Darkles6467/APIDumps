#pragma once

#include "BaseDeclarations.h"
struct PrimalDinoCharacter_eventMulti_OnCryo_Parms
{
	char __padding[0x8L];
	AShooterPlayerController * ForPCField() { return GetNativePointerField<AShooterPlayerController *>(this, "PrimalDinoCharacter_eventMulti_OnCryo_Parms.ForPC"); }
};

