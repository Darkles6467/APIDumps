#pragma once

#include "BaseDeclarations.h"
struct NewMissionModuleBase_eventHandleMissionTriggerOverlapEnd_Parms
{
	char __padding[0x20L];
	AMissionTrigger * TriggerField() { return GetNativePointerField<AMissionTrigger *>(this, "NewMissionModuleBase_eventHandleMissionTriggerOverlapEnd_Parms.Trigger"); }
	int& OtherBodyIndexField() { return *GetNativePointerField<int*>(this, "NewMissionModuleBase_eventHandleMissionTriggerOverlapEnd_Parms.OtherBodyIndex"); }
	int& ReturnValueField() { return *GetNativePointerField<int*>(this, "NewMissionModuleBase_eventHandleMissionTriggerOverlapEnd_Parms.ReturnValue"); }

	// Functions

};

