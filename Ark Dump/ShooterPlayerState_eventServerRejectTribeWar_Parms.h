#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerState_eventServerRejectTribeWar_Parms
{
	char __padding[0x4L];
	int& EnemyTeamIDField() { return *GetNativePointerField<int*>(this, "ShooterPlayerState_eventServerRejectTribeWar_Parms.EnemyTeamID"); }
};

