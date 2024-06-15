#pragma once

#include "BaseDeclarations.h"
struct MissionType_eventBPOnMissionTriggerEndOverlap_Parms
{
	char __padding[0x20L];
	AMissionTrigger * TriggerField() { return GetNativePointerField<AMissionTrigger *>(this, "MissionType_eventBPOnMissionTriggerEndOverlap_Parms.Trigger"); }
	int& OtherBodyIndexField() { return *GetNativePointerField<int*>(this, "MissionType_eventBPOnMissionTriggerEndOverlap_Parms.OtherBodyIndex"); }
};

