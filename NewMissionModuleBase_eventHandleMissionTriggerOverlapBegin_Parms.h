#pragma once

#include "BaseDeclarations.h"
struct NewMissionModuleBase_eventHandleMissionTriggerOverlapBegin_Parms
{
	char __padding[0x20L];
	AMissionTrigger * TriggerField() { return GetNativePointerField<AMissionTrigger *>(this, "NewMissionModuleBase_eventHandleMissionTriggerOverlapBegin_Parms.Trigger"); }
	int& OtherBodyIndexField() { return *GetNativePointerField<int*>(this, "NewMissionModuleBase_eventHandleMissionTriggerOverlapBegin_Parms.OtherBodyIndex"); }
	int& ReturnValueField() { return *GetNativePointerField<int*>(this, "NewMissionModuleBase_eventHandleMissionTriggerOverlapBegin_Parms.ReturnValue"); }
};

