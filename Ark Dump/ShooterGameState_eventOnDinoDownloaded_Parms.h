#pragma once

#include "BaseDeclarations.h"
struct ShooterGameState_eventOnDinoDownloaded_Parms
{
	char __padding[0x10L];
	APrimalDinoCharacter * TheDinoField() { return GetNativePointerField<APrimalDinoCharacter *>(this, "ShooterGameState_eventOnDinoDownloaded_Parms.TheDino"); }
	AShooterPlayerController * TamerControllerField() { return GetNativePointerField<AShooterPlayerController *>(this, "ShooterGameState_eventOnDinoDownloaded_Parms.TamerController"); }
};

