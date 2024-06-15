#pragma once

#include "BaseDeclarations.h"
struct ShooterGameMode_eventBPPreSpawnedDino_Parms
{
	char __padding[0x8L];
	APrimalDinoCharacter * theDinoField() { return GetNativePointerField<APrimalDinoCharacter *>(this, "ShooterGameMode_eventBPPreSpawnedDino_Parms.theDino"); }
};

