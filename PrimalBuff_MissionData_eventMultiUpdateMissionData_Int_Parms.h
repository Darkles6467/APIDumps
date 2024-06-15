#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_MissionData_eventMultiUpdateMissionData_Int_Parms
{
	char __padding[0x14L];
	FName& MissionTagField() { return *GetNativePointerField<FName*>(this, "PrimalBuff_MissionData_eventMultiUpdateMissionData_Int_Parms.MissionTag"); }
	FName& KeyField() { return *GetNativePointerField<FName*>(this, "PrimalBuff_MissionData_eventMultiUpdateMissionData_Int_Parms.Key"); }
	int& ValueField() { return *GetNativePointerField<int*>(this, "PrimalBuff_MissionData_eventMultiUpdateMissionData_Int_Parms.Value"); }
};

