#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerState_eventServerRequestPromotePlayerInMyTribe_Parms
{
	char __padding[0x4L];
	int& PlayerIndexInTribeField() { return *GetNativePointerField<int*>(this, "ShooterPlayerState_eventServerRequestPromotePlayerInMyTribe_Parms.PlayerIndexInTribe"); }
};

