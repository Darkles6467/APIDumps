#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_Companion_eventNotifyHasTamedDino_Parms
{
	char __padding[0x8L];
	TSubclassOf<APrimalDinoCharacter>& DinoClassField() { return *GetNativePointerField<TSubclassOf<APrimalDinoCharacter>*>(this, "PrimalBuff_Companion_eventNotifyHasTamedDino_Parms.DinoClass"); }
};

