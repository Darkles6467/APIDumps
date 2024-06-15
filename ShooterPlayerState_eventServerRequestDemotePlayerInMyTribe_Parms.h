#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerState_eventServerRequestDemotePlayerInMyTribe_Parms
{
	char __padding[0x4L];
	int& PlayerIndexInTribeField() { return *GetNativePointerField<int*>(this, "ShooterPlayerState_eventServerRequestDemotePlayerInMyTribe_Parms.PlayerIndexInTribe"); }
};

