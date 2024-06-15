#pragma once

#include "BaseDeclarations.h"
struct ShooterGameState_eventAllowDownloadDino_Parms
{
	char __padding[0x10L];
	TSubclassOf<APrimalDinoCharacter>& TheDinoClassField() { return *GetNativePointerField<TSubclassOf<APrimalDinoCharacter>*>(this, "ShooterGameState_eventAllowDownloadDino_Parms.TheDinoClass"); }
	bool& ReturnValueField() { return *GetNativePointerField<bool*>(this, "ShooterGameState_eventAllowDownloadDino_Parms.ReturnValue"); }
};

