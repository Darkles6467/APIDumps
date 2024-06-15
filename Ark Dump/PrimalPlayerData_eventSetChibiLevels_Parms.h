#pragma once

#include "BaseDeclarations.h"
struct PrimalPlayerData_eventSetChibiLevels_Parms
{
	char __padding[0x10L];
	int& newLevelsField() { return *GetNativePointerField<int*>(this, "PrimalPlayerData_eventSetChibiLevels_Parms.newLevels"); }
	AShooterPlayerController * ForPCField() { return GetNativePointerField<AShooterPlayerController *>(this, "PrimalPlayerData_eventSetChibiLevels_Parms.ForPC"); }
};

