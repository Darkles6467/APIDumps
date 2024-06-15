#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientShowSpawnUIForTransferringPlayer_Parms
{
	char __padding[0x18L];
	unsigned __int64& TransferingPlayerIDField() { return *GetNativePointerField<unsigned __int64*>(this, "ShooterPlayerController_eventClientShowSpawnUIForTransferringPlayer_Parms.TransferingPlayerID"); }
	bool& bUseTimerField() { return *GetNativePointerField<bool*>(this, "ShooterPlayerController_eventClientShowSpawnUIForTransferringPlayer_Parms.bUseTimer"); }
};

