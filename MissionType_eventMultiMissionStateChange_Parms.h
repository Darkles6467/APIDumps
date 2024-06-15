#pragma once

#include "BaseDeclarations.h"
struct MissionType_eventMultiMissionStateChange_Parms
{
	char __padding[0x1L];
	TEnumAsByte<enum EMissionState::Type>& NewStateField() { return *GetNativePointerField<TEnumAsByte<enum EMissionState::Type>*>(this, "MissionType_eventMultiMissionStateChange_Parms.NewState"); }
};

