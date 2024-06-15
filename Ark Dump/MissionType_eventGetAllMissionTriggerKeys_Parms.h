#pragma once

#include "BaseDeclarations.h"
struct MissionType_eventGetAllMissionTriggerKeys_Parms
{
	char __padding[0x10L];
	TArray<FName>& ReturnValueField() { return *GetNativePointerField<TArray<FName>*>(this, "MissionType_eventGetAllMissionTriggerKeys_Parms.ReturnValue"); }
};

