#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_MissionData_eventServerRequestStartMission_Parms
{
	char __padding[0x10L];
	AMissionDispatcher * FromDispatcherField() { return GetNativePointerField<AMissionDispatcher *>(this, "PrimalBuff_MissionData_eventServerRequestStartMission_Parms.FromDispatcher"); }
};

