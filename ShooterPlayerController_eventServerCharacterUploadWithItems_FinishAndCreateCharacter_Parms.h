#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventServerCharacterUploadWithItems_FinishAndCreateCharacter_Parms
{
	char __padding[0x8L];
	unsigned __int64& PlayerDataIdField() { return *GetNativePointerField<unsigned __int64*>(this, "ShooterPlayerController_eventServerCharacterUploadWithItems_FinishAndCreateCharacter_Parms.PlayerDataId"); }
};

