#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerCheckIsValidPlayerToDownload_Parms
{
	char __padding[0x120L];
	FArkTributePlayerData& PlayerDataField() { return *GetNativePointerField<FArkTributePlayerData*>(this, "ShooterPlayerController_eventServerCheckIsValidPlayerToDownload_Parms.PlayerData"); }
};

