#pragma once

#include "BaseDeclarations.h"
struct MissionType_eventOnMissionPhaseEvent_Parms
{
	char __padding[0x18L];
	FName& OldPhaseNameField() { return *GetNativePointerField<FName*>(this, "MissionType_eventOnMissionPhaseEvent_Parms.OldPhaseName"); }
	FName& NewPhaseNameField() { return *GetNativePointerField<FName*>(this, "MissionType_eventOnMissionPhaseEvent_Parms.NewPhaseName"); }
};

