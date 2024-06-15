#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerCharacterUploadWithItems_Start_Parms
{
	char __padding[0x128L];
	unsigned __int64& PlayerDataIdField() { return *GetNativePointerField<unsigned __int64*>(this, "ShooterPlayerController_eventServerCharacterUploadWithItems_Start_Parms.PlayerDataId"); }
	FArkTributePlayerData& PlayerDataField() { return *GetNativePointerField<FArkTributePlayerData*>(this, "ShooterPlayerController_eventServerCharacterUploadWithItems_Start_Parms.PlayerData"); }
};

