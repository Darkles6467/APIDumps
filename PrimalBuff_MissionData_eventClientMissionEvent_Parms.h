#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_MissionData_eventClientMissionEvent_Parms
{
	char __padding[0x10L];
	bool& bMissionStartedField() { return *GetNativePointerField<bool*>(this, "PrimalBuff_MissionData_eventClientMissionEvent_Parms.bMissionStarted"); }
	bool& bMissionCompletedSuccessfullyField() { return *GetNativePointerField<bool*>(this, "PrimalBuff_MissionData_eventClientMissionEvent_Parms.bMissionCompletedSuccessfully"); }
};

