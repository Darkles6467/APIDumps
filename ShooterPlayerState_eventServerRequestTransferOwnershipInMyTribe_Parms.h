#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerState_eventServerRequestTransferOwnershipInMyTribe_Parms
{
	char __padding[0x4L];
	int& PlayerIndexInTribeField() { return *GetNativePointerField<int*>(this, "ShooterPlayerState_eventServerRequestTransferOwnershipInMyTribe_Parms.PlayerIndexInTribe"); }
};

