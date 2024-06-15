#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerController_eventClientNotifyTamedDino_Parms
{
	char __padding[0x8L];
	TSubclassOf<APrimalDinoCharacter>& DinoClassField() { return *GetNativePointerField<TSubclassOf<APrimalDinoCharacter>*>(this, "ShooterPlayerController_eventClientNotifyTamedDino_Parms.DinoClass"); }
};

