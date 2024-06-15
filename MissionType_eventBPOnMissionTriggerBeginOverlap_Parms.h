#pragma once

#include "BaseDeclarations.h"
struct MissionType_eventBPOnMissionTriggerBeginOverlap_Parms
{
	char __padding[0x20L];
	AMissionTrigger * TriggerField() { return GetNativePointerField<AMissionTrigger *>(this, "MissionType_eventBPOnMissionTriggerBeginOverlap_Parms.Trigger"); }
	int& OtherBodyIndexField() { return *GetNativePointerField<int*>(this, "MissionType_eventBPOnMissionTriggerBeginOverlap_Parms.OtherBodyIndex"); }
};

