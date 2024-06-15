#pragma once

#include "BaseDeclarations.h"
struct ShooterGameMode_eventOnRemovePlayerFromTribe_Parms
{
	char __padding[0x8L];
	int& TribeIDField() { return *GetNativePointerField<int*>(this, "ShooterGameMode_eventOnRemovePlayerFromTribe_Parms.TribeID"); }
	int& PlayerDataIDField() { return *GetNativePointerField<int*>(this, "ShooterGameMode_eventOnRemovePlayerFromTribe_Parms.PlayerDataID"); }
};

