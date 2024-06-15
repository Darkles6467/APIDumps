#pragma once

#include "BaseDeclarations.h"
struct MissionType_eventGetCurrentWorldIndicators_Parms
{
	char __padding[0x10L];
	TArray<FMissionWorldIndicator>& WorldIndicatorsField() { return *GetNativePointerField<TArray<FMissionWorldIndicator>*>(this, "MissionType_eventGetCurrentWorldIndicators_Parms.WorldIndicators"); }
};

