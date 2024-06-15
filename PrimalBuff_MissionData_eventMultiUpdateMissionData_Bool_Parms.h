#pragma once

#include "BaseDeclarations.h"
struct PrimalBuff_MissionData_eventMultiUpdateMissionData_Bool_Parms
{
	char __padding[0x14L];
	FName& MissionTagField() { return *GetNativePointerField<FName*>(this, "PrimalBuff_MissionData_eventMultiUpdateMissionData_Bool_Parms.MissionTag"); }
	FName& KeyField() { return *GetNativePointerField<FName*>(this, "PrimalBuff_MissionData_eventMultiUpdateMissionData_Bool_Parms.Key"); }
	bool& ValueField() { return *GetNativePointerField<bool*>(this, "PrimalBuff_MissionData_eventMultiUpdateMissionData_Bool_Parms.Value"); }
};

