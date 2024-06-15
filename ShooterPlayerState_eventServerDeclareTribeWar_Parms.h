#pragma once

#include "BaseDeclarations.h"
struct ShooterPlayerState_eventServerDeclareTribeWar_Parms
{
	char __padding[0x14L];
	int& EnemyTeamIDField() { return *GetNativePointerField<int*>(this, "ShooterPlayerState_eventServerDeclareTribeWar_Parms.EnemyTeamID"); }
	int& StartDayNumField() { return *GetNativePointerField<int*>(this, "ShooterPlayerState_eventServerDeclareTribeWar_Parms.StartDayNum"); }
	int& EndDayNumberField() { return *GetNativePointerField<int*>(this, "ShooterPlayerState_eventServerDeclareTribeWar_Parms.EndDayNumber"); }
	float& WarStartTimeField() { return *GetNativePointerField<float*>(this, "ShooterPlayerState_eventServerDeclareTribeWar_Parms.WarStartTime"); }
	float& WarEndTimeField() { return *GetNativePointerField<float*>(this, "ShooterPlayerState_eventServerDeclareTribeWar_Parms.WarEndTime"); }
};

