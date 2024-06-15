#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_MissionData_eventServerRequestMissionEligibilityCheck_Parms
{
	char __padding[0x8L];
	const AMissionDispatcher * dispatcherFilterField() { return GetNativePointerField<const AMissionDispatcher *>(this, "PrimalBuff_MissionData_eventServerRequestMissionEligibilityCheck_Parms.dispatcherFilter"); }
};

