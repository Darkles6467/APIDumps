#pragma once

#include "BaseDeclarations.h"
struct MissionType_eventOnMissionPhaseEnded_Parms
{
	char __padding[0x10L];
	FName& OldPhaseField() { return *GetNativePointerField<FName*>(this, "MissionType_eventOnMissionPhaseEnded_Parms.OldPhase"); }
	FName& NewPhaseField() { return *GetNativePointerField<FName*>(this, "MissionType_eventOnMissionPhaseEnded_Parms.NewPhase"); }
};

