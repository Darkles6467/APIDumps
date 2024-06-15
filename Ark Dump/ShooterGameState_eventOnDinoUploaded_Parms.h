#pragma once

#include "BaseDeclarations.h"
struct ShooterGameState_eventOnDinoUploaded_Parms
{
	char __padding[0x8L];
	APrimalDinoCharacter * TheDinoField() { return GetNativePointerField<APrimalDinoCharacter *>(this, "ShooterGameState_eventOnDinoUploaded_Parms.TheDino"); }
};

