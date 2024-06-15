#pragma once

#include "BaseDeclarations.h"
struct MissionType_eventMultiMissionPhaseStarted_Parms
{
	char __padding[0x10L];
	FName& OldPhaseNameField() { return *GetNativePointerField<FName*>(this, "MissionType_eventMultiMissionPhaseStarted_Parms.OldPhaseName"); }
	FName& NewPhaseNameField() { return *GetNativePointerField<FName*>(this, "MissionType_eventMultiMissionPhaseStarted_Parms.NewPhaseName"); }
};

