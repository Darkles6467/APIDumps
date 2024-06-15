#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_MissionData_eventServerRequestStartMissionWithMissionTag_Parms
{
	char __padding[0x10L];
	FName& MissionTagField() { return *GetNativePointerField<FName*>(this, "PrimalBuff_MissionData_eventServerRequestStartMissionWithMissionTag_Parms.MissionTag"); }
	AMissionDispatcher * FromDispatcherField() { return GetNativePointerField<AMissionDispatcher *>(this, "PrimalBuff_MissionData_eventServerRequestStartMissionWithMissionTag_Parms.FromDispatcher"); }
};

