#pragma once

#include "BaseDeclarations.h"
struct PrimalPlayerData_eventBPForceDefeatedBoss_Parms
{
	char __padding[0x18L];
	int& DifficultyIndexField() { return *GetNativePointerField<int*>(this, "PrimalPlayerData_eventBPForceDefeatedBoss_Parms.DifficultyIndex"); }
	FName& BossNameField() { return *GetNativePointerField<FName*>(this, "PrimalPlayerData_eventBPForceDefeatedBoss_Parms.BossName"); }
	AShooterPlayerController * PlayerControllerField() { return GetNativePointerField<AShooterPlayerController *>(this, "PrimalPlayerData_eventBPForceDefeatedBoss_Parms.PlayerController"); }
};

