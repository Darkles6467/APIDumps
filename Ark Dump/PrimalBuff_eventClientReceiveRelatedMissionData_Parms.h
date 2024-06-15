#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_eventClientReceiveRelatedMissionData_Parms
{
	char __padding[0x10L];
	bool& InHasRelatedMissionField() { return *GetNativePointerField<bool*>(this, "PrimalBuff_eventClientReceiveRelatedMissionData_Parms.InHasRelatedMission"); }
};

