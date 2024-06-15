#pragma once

#include "BaseDeclarations.h"
struct ShooterGameState_eventNetUpdateOfflinePvPLiveTeams_Parms
{
	char __padding[0x10L];
	TArray<int>& NewPreventOfflinePvPLiveTeamsField() { return *GetNativePointerField<TArray<int>*>(this, "ShooterGameState_eventNetUpdateOfflinePvPLiveTeams_Parms.NewPreventOfflinePvPLiveTeams"); }
};

