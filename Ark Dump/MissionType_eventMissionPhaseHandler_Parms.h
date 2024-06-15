#pragma once

#include "BaseDeclarations.h"
struct MissionType_eventMissionPhaseHandler_Parms
{
	char __padding[0x10L];
	FName& OldPhaseNameField() { return *GetNativePointerField<FName*>(this, "MissionType_eventMissionPhaseHandler_Parms.OldPhaseName"); }
	FName& NewPhaseNameField() { return *GetNativePointerField<FName*>(this, "MissionType_eventMissionPhaseHandler_Parms.NewPhaseName"); }
};

