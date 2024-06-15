#pragma once

#include "BaseDeclarations.h"
struct ShooterGameState_eventNetUpdateOfflinePvPExpiringTeams_Parms
{
	char __padding[0x20L];
	TArray<int>& NewPreventOfflinePvPExpiringTeamsField() { return *GetNativePointerField<TArray<int>*>(this, "ShooterGameState_eventNetUpdateOfflinePvPExpiringTeams_Parms.NewPreventOfflinePvPExpiringTeams"); }
	TArray<double>& NewPreventOfflinePvPExpiringTimesField() { return *GetNativePointerField<TArray<double>*>(this, "ShooterGameState_eventNetUpdateOfflinePvPExpiringTeams_Parms.NewPreventOfflinePvPExpiringTimes"); }

	// Functions

};

