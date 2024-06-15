#pragma once

#include "BaseDeclarations.h"
struct MissionType_eventBPOnMissionCheat_Parms
{
	char __padding[0x10L];
	FName& CheatNameField() { return *GetNativePointerField<FName*>(this, "MissionType_eventBPOnMissionCheat_Parms.CheatName"); }
	bool& bSetValueField() { return *GetNativePointerField<bool*>(this, "MissionType_eventBPOnMissionCheat_Parms.bSetValue"); }
	float& ValueField() { return *GetNativePointerField<float*>(this, "MissionType_eventBPOnMissionCheat_Parms.Value"); }
};

