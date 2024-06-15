#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_MissionData_eventOnMissionClientBoolEvent_Parms
{
	char __padding[0x18L];
	bool& bSuccessField() { return *GetNativePointerField<bool*>(this, "PrimalBuff_MissionData_eventOnMissionClientBoolEvent_Parms.bSuccess"); }
};

