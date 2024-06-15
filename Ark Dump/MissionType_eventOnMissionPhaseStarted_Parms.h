#pragma once

#include "BaseDeclarations.h"
struct MissionType_eventOnMissionPhaseStarted_Parms
{
	char __padding[0x10L];
	FName& OldPhaseField() { return *GetNativePointerField<FName*>(this, "MissionType_eventOnMissionPhaseStarted_Parms.OldPhase"); }
	FName& NewPhaseField() { return *GetNativePointerField<FName*>(this, "MissionType_eventOnMissionPhaseStarted_Parms.NewPhase"); }
};

