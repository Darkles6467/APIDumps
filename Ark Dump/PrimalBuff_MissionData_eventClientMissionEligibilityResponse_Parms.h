#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_MissionData_eventClientMissionEligibilityResponse_Parms
{
	char __padding[0x10L];
	TArray<FMissionEligibilityData>& EligibilityDataField() { return *GetNativePointerField<TArray<FMissionEligibilityData>*>(this, "PrimalBuff_MissionData_eventClientMissionEligibilityResponse_Parms.EligibilityData"); }
};

