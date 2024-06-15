#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientPlayerIsValidToDownload_Parms
{
	char __padding[0x128L];
	bool& bIsValidField() { return *GetNativePointerField<bool*>(this, "ShooterPlayerController_eventClientPlayerIsValidToDownload_Parms.bIsValid"); }
	FArkTributePlayerData& PlayerDataField() { return *GetNativePointerField<FArkTributePlayerData*>(this, "ShooterPlayerController_eventClientPlayerIsValidToDownload_Parms.PlayerData"); }
};

