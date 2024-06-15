#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerState_eventServerRequestCreateNewPlayer_Parms
{
	char __padding[0xb8L];
	FPrimalPlayerCharacterConfigStructReplicated& PlayerCharacterConfigField() { return *GetNativePointerField<FPrimalPlayerCharacterConfigStructReplicated*>(this, "ShooterPlayerState_eventServerRequestCreateNewPlayer_Parms.PlayerCharacterConfig"); }
};

