#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_MissionData_eventClientUnloadMissionLevels_Parms
{
	char __padding[0x8L];
	FName& MissionTagField() { return *GetNativePointerField<FName*>(this, "PrimalBuff_MissionData_eventClientUnloadMissionLevels_Parms.MissionTag"); }
};

