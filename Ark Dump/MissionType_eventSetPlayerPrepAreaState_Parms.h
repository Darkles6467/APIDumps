#pragma once

#include "BaseDeclarations.h"
struct MissionType_eventSetPlayerPrepAreaState_Parms
{
	char __padding[0x10L];
	AShooterCharacter * PlayerPawnField() { return GetNativePointerField<AShooterCharacter *>(this, "MissionType_eventSetPlayerPrepAreaState_Parms.PlayerPawn"); }
	bool& bInsidePrepAreaField() { return *GetNativePointerField<bool*>(this, "MissionType_eventSetPlayerPrepAreaState_Parms.bInsidePrepArea"); }
};

