#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientNotifySummonedDino_Parms
{
	char __padding[0x8L];
	TSubclassOf<APrimalDinoCharacter>& DinoClassField() { return *GetNativePointerField<TSubclassOf<APrimalDinoCharacter>*>(this, "ShooterPlayerController_eventClientNotifySummonedDino_Parms.DinoClass"); }
};

