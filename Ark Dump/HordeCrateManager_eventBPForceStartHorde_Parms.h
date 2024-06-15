#pragma once

#include "BaseDeclarations.h"
struct HordeCrateManager_eventBPForceStartHorde_Parms
{
	char __padding[0x20L];
	AShooterPlayerController * PCField() { return GetNativePointerField<AShooterPlayerController *>(this, "HordeCrateManager_eventBPForceStartHorde_Parms.PC"); }
	int& DifficultyIndexField() { return *GetNativePointerField<int*>(this, "HordeCrateManager_eventBPForceStartHorde_Parms.DifficultyIndex"); }
};

